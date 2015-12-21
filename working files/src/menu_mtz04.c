#include "header.h"

/*****************************************************/
//������� ����� ����������� ������� ��� 0,4��
/*****************************************************/
void make_ekran_setpoint_mtz04(unsigned int group)
{
  const unsigned char name_string[MAX_NAMBER_LANGUAGE][MAX_ROW_FOR_SETPOINT_MTZ04][MAX_COL_LCD] = 
  {
    {
      "  ��� 0,4�� 1   ",
      "  ��� 0,4�� 2   "
    },
    {
      "  ��� 0,4�� 1   ",
      "  ��� 0,4�� 2   "
    },
    {
      "  OCP 0,4kV 1   ",
      "  OCP 0,4kV 2   "
    },
    {
      "  ��� 0,4�� 1   ",
      "  ��� 0,4�� 2   "
    }
  };
  int index_language = index_language_in_array(current_settings.language);
  
  unsigned int position_temp = current_ekran.index_position;
  unsigned int index_of_ekran;
  unsigned int vaga, value, first_symbol;
  
  //�������� �� ��� �������� position_temp ������� ��� ����, �� ����� ������� �� ������������� ��� ����� (����� + ��������)
  index_of_ekran = ((position_temp<<1) >> POWER_MAX_ROW_LCD) << POWER_MAX_ROW_LCD;
  
  for (unsigned int i=0; i< MAX_ROW_LCD; i++)
  {
    if (index_of_ekran < (MAX_ROW_FOR_SETPOINT_MTZ04<<1))//�������� �� ��� ��������� MAX_ROW_FOR_SETPOINT_MTZ04 ������� ��� ����, �� ����� ������� �� ������������� ��� ����� (����� + ��������)
    {
      if ((i & 0x1) == 0)
      {
        //� ��������� ����� ����� �������� ���������
        for (unsigned int j = 0; j<MAX_COL_LCD; j++) working_ekran[i][j] = name_string[index_language][index_of_ekran>>1][j];
        if ((index_of_ekran>>1) == INDEX_ML_STPMTZ04_1)
        {
          vaga = 100000; //������������ ������� ���������� ��� �������� �������� �������
          if (current_ekran.edition == 0) value = current_settings.setpoint_mtz04_1[group]; //� ����� value ������� �������� �������
          else value = edition_settings.setpoint_mtz04_1[group];
        }
        else if ((index_of_ekran>>1) == INDEX_ML_STPMTZ04_2)
        {
          vaga = 100000; //������������ ������� ���������� ��� �������� �������� �������
          if (current_ekran.edition == 0) value = current_settings.setpoint_mtz04_2[group]; //� ����� value ������� �������� �������
          else value = edition_settings.setpoint_mtz04_2[group];
        }
        
        first_symbol = 0; //�������, �� �� ����� �������� ������ �� ���������
      }
      else
      {
        //� ������� ����� ����� �������� �������� �������
        for (unsigned int j = 0; j<MAX_COL_LCD; j++)
        {
          if ((index_of_ekran>>1) == INDEX_ML_STPMTZ04_1)
          {
            if (
                ((j < COL_SETPOINT_MTZ04_1_BEGIN) ||  (j > COL_SETPOINT_MTZ04_1_END ))  &&
                (j != (COL_SETPOINT_MTZ04_1_END + 2))  
               )working_ekran[i][j] = ' ';
            else if (j == COL_SETPOINT_MTZ04_1_COMMA )working_ekran[i][j] = ',';
            else if (j == (COL_SETPOINT_MTZ04_1_END + 2)) working_ekran[i][j] = odynyci_vymirjuvannja[index_language][INDEX_A];
            else
              calc_symbol_and_put_into_working_ekran((working_ekran[i] + j), &value, &vaga, &first_symbol, j, COL_SETPOINT_MTZ04_1_COMMA, 0);
          }
          else if ((index_of_ekran>>1) == INDEX_ML_STPMTZ04_2)
          {
            if (
                ((j < COL_SETPOINT_MTZ04_2_BEGIN) ||  (j > COL_SETPOINT_MTZ04_2_END ))  &&
                (j != (COL_SETPOINT_MTZ04_2_END + 2))  
               )working_ekran[i][j] = ' ';
            else if (j == COL_SETPOINT_MTZ04_2_COMMA )working_ekran[i][j] = ',';
            else if (j == (COL_SETPOINT_MTZ04_2_END + 2)) working_ekran[i][j] = odynyci_vymirjuvannja[index_language][INDEX_A];
            else
              calc_symbol_and_put_into_working_ekran((working_ekran[i] + j), &value, &vaga, &first_symbol, j, COL_SETPOINT_MTZ04_2_COMMA, 0);
          }
        }
      }
        
    }
    else
      for (unsigned int j = 0; j<MAX_COL_LCD; j++) working_ekran[i][j] = ' ';

    index_of_ekran++;
  }

  //³���������� ������ �� �������� � ������ ������ �� ���� � ��� �� ��������� ������
  current_ekran.position_cursor_y = ((position_temp<<1) + 1) & (MAX_ROW_LCD - 1);
  //������ �� ���������� ������������ �� ������� ������ � �������, ���� �� �� � ����� �����������, ������ ������� ���� ��������� � ������ main_manu_function
  if (current_ekran.edition == 0)
  {
    int last_position_cursor_x = MAX_COL_LCD;
    if (current_ekran.index_position == INDEX_ML_STPMTZ04_1)
    {
      current_ekran.position_cursor_x = COL_SETPOINT_MTZ04_1_BEGIN;
      last_position_cursor_x = COL_SETPOINT_MTZ04_1_END;
    }
    else if (current_ekran.index_position == INDEX_ML_STPMTZ04_2)
    {
      current_ekran.position_cursor_x = COL_SETPOINT_MTZ04_2_BEGIN;
      last_position_cursor_x = COL_SETPOINT_MTZ04_2_END;
    }
    
    //ϳ������� ������ �� ������� �������
    while (((working_ekran[current_ekran.position_cursor_y][current_ekran.position_cursor_x + 1]) == ' ') && 
           (current_ekran.position_cursor_x < (last_position_cursor_x -1))) current_ekran.position_cursor_x++;
    
    //������ ������� ���, ��� �� ��� ����� ������
    if (((working_ekran[current_ekran.position_cursor_y][current_ekran.position_cursor_x]) != ' ') && 
        (current_ekran.position_cursor_x > 0)) current_ekran.position_cursor_x--;
  }
  //������ �������
  current_ekran.cursor_on = 1;
  //������ �� ����
  if(current_ekran.edition == 0)current_ekran.cursor_blinking_on = 0;
  else current_ekran.cursor_blinking_on = 1;
  //�������� ������� ���� �����
  current_ekran.current_action = ACTION_WITH_CARRENT_EKRANE_FULL_UPDATE;
}
/*****************************************************/

/*****************************************************/
//������� ����� ����������� �������� ��� 0,4��
/*****************************************************/
void make_ekran_timeout_mtz04(unsigned int group)
{
  const unsigned char name_string[MAX_NAMBER_LANGUAGE][MAX_ROW_FOR_TIMEOUT_MTZ04][MAX_COL_LCD] = 
  {
    {
      "  ��� 0,4�� 1   ",
      "  ��� 0,4�� 2   ",
      " ���.��� 0,4�� 2",
      "�.��.��� 0,4�� 2"
    },
    {
      "  ��� 0,4�� 1   ",
      "  ��� 0,4�� 2   ",
      " ��.��� 0,4�� 2 ",
      "�.��.��� 0,4�� 2"
    },
    {
      "  OCP 0,4kV 1   ",
      "  OCP 0,4kV 2   ",
      " ��.��� 0,4kV 2 ",
      "�.��.��� 0,4kV 2"
    },
    {
      "  ��� 0,4�� 1   ",
      "  ��� 0,4�� 2   ",
      " ���.��� 0,4�� 2",
      "�.��.��� 0,4�� 2"
    }
  };
  int index_language = index_language_in_array(current_settings.language);
 
  unsigned int position_temp = current_ekran.index_position;
  unsigned int index_of_ekran;
  unsigned int vaga, value, first_symbol;
  
  //�������� �� ��� �������� position_temp ������� ��� ����, �� �� ���� ������� �� ������������� ��� ����� (����� + ��������)
  index_of_ekran = ((position_temp<<1) >> POWER_MAX_ROW_LCD) << POWER_MAX_ROW_LCD;

  
  for (unsigned int i=0; i< MAX_ROW_LCD; i++)
  {
    if (index_of_ekran < (MAX_ROW_FOR_TIMEOUT_MTZ04<<1))//�������� �� ��� ��������� MAX_ROW_FOR_TIMEOUT_MTZ04 ������� ��� ����, �� �� ���� ������� �� ������������� ��� ����� (����� + ��������)
    {
      if ((i & 0x1) == 0)
      {
        //� ��������� ����� ����� �������� ���������
        for (unsigned int j = 0; j<MAX_COL_LCD; j++) working_ekran[i][j] = name_string[index_language][index_of_ekran>>1][j];
        if ((index_of_ekran>>1) == INDEX_ML_TMOMTZ04_1)
        {
          vaga = 10000; //������������ ������� ���������� ��� �������� �������� ������� ��� ��������
          if (current_ekran.edition == 0) value = current_settings.timeout_mtz04_1[group]; //� ����� value ������� �������� ��������
          else value = edition_settings.timeout_mtz04_1[group];
        }
        else if ((index_of_ekran>>1) == INDEX_ML_TMOMTZ04_2)
        {
          vaga = 100000; //������������ ������� ���������� ��� �������� �������� ������� ��� ��������
          if (current_ekran.edition == 0) value = current_settings.timeout_mtz04_2[group]; //� ����� value ������� �������� ��������
          else value = edition_settings.timeout_mtz04_2[group];
        }
        else if ((index_of_ekran>>1) == INDEX_ML_TMOMTZ04_2_PR)
        {
          vaga = 1000; //������������ ������� ���������� ��� �������� �������� ������� ��� ��������
          if (current_ekran.edition == 0) value = current_settings.timeout_mtz04_2_pr[group]; //� ����� value ������� �������� ��������
          else value = edition_settings.timeout_mtz04_2_pr[group];
        }
        else if ((index_of_ekran>>1) == INDEX_ML_TMOMTZ04_2_VVID_PR)
        {
          vaga = 1000; //������������ ������� ���������� ��� �������� �������� ������� ��� ��������
          if (current_ekran.edition == 0) value = current_settings.timeout_mtz04_2_vvid_pr[group]; //� ����� value ������� �������� ��������
          else value = edition_settings.timeout_mtz04_2_vvid_pr[group];
        }

        first_symbol = 0; //�������, �� �� ����� �������� ������ �� ���������
      }
      else
      {
        //� ������� ����� ����� �������� �������� �������
        for (unsigned int j = 0; j<MAX_COL_LCD; j++)
        {
          if ((index_of_ekran>>1) == INDEX_ML_TMOMTZ04_1)
          {
            if (
                ((j < COL_TMO_MTZ04_1_BEGIN) ||  (j > COL_TMO_MTZ04_1_END )) &&
                (j != (COL_TMO_MTZ04_1_END + 2))  
               )working_ekran[i][j] = ' ';
            else if (j == COL_TMO_MTZ04_1_COMMA )working_ekran[i][j] = ',';
            else if (j == (COL_TMO_MTZ04_1_END + 2)) working_ekran[i][j] = odynyci_vymirjuvannja[index_language][INDEX_SECOND];
            else
              calc_symbol_and_put_into_working_ekran((working_ekran[i] + j), &value, &vaga, &first_symbol, j, COL_TMO_MTZ04_1_COMMA, 0);
          }
          else if ((index_of_ekran>>1) == INDEX_ML_TMOMTZ04_2)
          {
            if (
                ((j < COL_TMO_MTZ04_2_BEGIN) ||  (j > COL_TMO_MTZ04_2_END )) &&
                (j != (COL_TMO_MTZ04_2_END + 2))  
               )working_ekran[i][j] = ' ';
            else if (j == COL_TMO_MTZ04_2_COMMA )working_ekran[i][j] = ',';
            else if (j == (COL_TMO_MTZ04_2_END + 2)) working_ekran[i][j] = odynyci_vymirjuvannja[index_language][INDEX_SECOND];
            else
              calc_symbol_and_put_into_working_ekran((working_ekran[i] + j), &value, &vaga, &first_symbol, j, COL_TMO_MTZ04_2_COMMA, 0);
          }
          else if ((index_of_ekran>>1) == INDEX_ML_TMOMTZ04_2_PR)
          {
            if (
                ((j < COL_TMO_MTZ04_2_PR_BEGIN) ||  (j > COL_TMO_MTZ04_2_PR_END )) &&
                (j != (COL_TMO_MTZ04_2_PR_END + 2))  
               )working_ekran[i][j] = ' ';
            else if (j == COL_TMO_MTZ04_2_PR_COMMA )working_ekran[i][j] = ',';
            else if (j == (COL_TMO_MTZ04_2_PR_END + 2)) working_ekran[i][j] = odynyci_vymirjuvannja[index_language][INDEX_SECOND];
            else
              calc_symbol_and_put_into_working_ekran((working_ekran[i] + j), &value, &vaga, &first_symbol, j, COL_TMO_MTZ04_2_PR_COMMA, 0);
          }
          else if ((index_of_ekran>>1) == INDEX_ML_TMOMTZ04_2_VVID_PR)
          {
            if (
                ((j < COL_TMO_MTZ04_2_VVID_PR_BEGIN) ||  (j > COL_TMO_MTZ04_2_VVID_PR_END )) &&
                (j != (COL_TMO_MTZ04_2_VVID_PR_END + 2))  
               )working_ekran[i][j] = ' ';
            else if (j == COL_TMO_MTZ04_2_VVID_PR_COMMA )working_ekran[i][j] = ',';
            else if (j == (COL_TMO_MTZ04_2_VVID_PR_END + 2)) working_ekran[i][j] = odynyci_vymirjuvannja[index_language][INDEX_SECOND];
            else
              calc_symbol_and_put_into_working_ekran((working_ekran[i] + j), &value, &vaga, &first_symbol, j, COL_TMO_MTZ04_2_VVID_PR_COMMA, 0);
          }
        }
      }
        
    }
    else
      for (unsigned int j = 0; j<MAX_COL_LCD; j++) working_ekran[i][j] = ' ';

    index_of_ekran++;
  }

  //³���������� ������ �� �������� � ������ ������ �� ���� � ��� �� ��������� ������
  current_ekran.position_cursor_y = ((position_temp<<1) + 1) & (MAX_ROW_LCD - 1);
  //������ �� ���������� ������������ �� ������� ������ � �������, ���� �� �� � ����� �����������, ������ ������� ���� ��������� � ������ main_manu_function
  if (current_ekran.edition == 0)
  {
    int last_position_cursor_x = MAX_COL_LCD;
    if (current_ekran.index_position == INDEX_ML_TMOMTZ04_1) 
    {
      current_ekran.position_cursor_x = COL_TMO_MTZ04_1_BEGIN;
      last_position_cursor_x = COL_TMO_MTZ04_1_END;
    }
    else if (current_ekran.index_position == INDEX_ML_TMOMTZ04_2) 
    {
      current_ekran.position_cursor_x = COL_TMO_MTZ04_2_BEGIN;
      last_position_cursor_x = COL_TMO_MTZ04_2_END;
    }
    else if (current_ekran.index_position == INDEX_ML_TMOMTZ04_2_PR) 
    {
      current_ekran.position_cursor_x = COL_TMO_MTZ04_2_PR_BEGIN;
      last_position_cursor_x = COL_TMO_MTZ04_2_PR_END;
    }
    else if (current_ekran.index_position == INDEX_ML_TMOMTZ04_2_VVID_PR) 
    {
      current_ekran.position_cursor_x = COL_TMO_MTZ04_2_VVID_PR_BEGIN;
      last_position_cursor_x = COL_TMO_MTZ04_2_VVID_PR_END;
    }

    //ϳ������� ������ �� ������� �������
    while (((working_ekran[current_ekran.position_cursor_y][current_ekran.position_cursor_x + 1]) == ' ') && 
           (current_ekran.position_cursor_x < (last_position_cursor_x -1))) current_ekran.position_cursor_x++;

    //������ ������� ���, ��� �� ��� ����� ������
    if (((working_ekran[current_ekran.position_cursor_y][current_ekran.position_cursor_x]) != ' ') && 
        (current_ekran.position_cursor_x > 0)) current_ekran.position_cursor_x--;
  }
  //������ �������
  current_ekran.cursor_on = 1;
  //������ �� ����
  if(current_ekran.edition == 0)current_ekran.cursor_blinking_on = 0;
  else current_ekran.cursor_blinking_on = 1;
  //�������� ������� ���� �����
  current_ekran.current_action = ACTION_WITH_CARRENT_EKRANE_FULL_UPDATE;
}
/*****************************************************/

/*****************************************************/
//������� ����� ����������� �������� ����������� ���������� ��� ��� 0,4��
/*****************************************************/
void make_ekran_control_mtz04()
{
  const unsigned char name_string[MAX_NAMBER_LANGUAGE][MAX_ROW_FOR_CONTROL_MTZ04][MAX_COL_LCD] = 
  {
    {
      "  ��� 0,4�� 1   ",
      "  ��� 0,4�� 2   ",
      " ��� ��� 0,4�� 2",
      " �-� ��� 0,4�� 2",
      " �-� ��� 0,4�� 2"
    },
    {
      "  ��� 0,4�� 1   ",
      "  ��� 0,4�� 2   ",
      " ��� ��� 0,4�� 2",
      " �-� ��� 0,4�� 2",
      " �-� ��� 0,4�� 2"
    },
    {
      " OCP 0,4kV St.1 ",
      " OCP 0,4kV St.2 ",
      "OCP 0,4kV 2 Opt.",
      "OCP 0,4kV 2 Acc.",
      " Acc.OCP 0,4kV 2"
    },
    {
      "  ��� 0,4�� 1   ",
      "  ��� 0,4�� 2   ",
      " ��� ��� 0,4�� 2",
      " �-� ��� 0,4�� 2",
      " �-� ��� 0,4�� 2"
    }
  };
  int index_language = index_language_in_array(current_settings.language);
  
  unsigned int position_temp = current_ekran.index_position;
  unsigned int index_of_ekran;
  
  //�������� �� ��� �������� position_temp ������� ��� ����, �� �� ���� ������� �� ������������� ��� ����� (����� + ��������)
  index_of_ekran = ((position_temp<<1) >> POWER_MAX_ROW_LCD) << POWER_MAX_ROW_LCD;

  
  for (unsigned int i=0; i< MAX_ROW_LCD; i++)
  {
    if (index_of_ekran < (MAX_ROW_FOR_CONTROL_MTZ04<<1))//�������� �� ��� ��������� MAX_ROW_FOR_CONTROL_MTZ04 ������� ��� ����, �� �� ���� ������� �� ������������� ��� ����� (����� + ��������)
    {
      if ((i & 0x1) == 0)
      {
        //� ��������� ����� ����� �������� ���������
        for (unsigned int j = 0; j<MAX_COL_LCD; j++) working_ekran[i][j] = name_string[index_language][index_of_ekran>>1][j];
      }
      else
      {
        //� ������� ����� ����� �������� �������� �������
        unsigned int index_ctr = (index_of_ekran>>1);

        __SETTINGS *point;
          if(current_ekran.edition == 0) point = &current_settings;
          else point = &edition_settings;

        if (index_ctr == INDEX_ML_CTRMTZ04_2_TYPE)
        {
          int value = point->type_mtz04_2;

          const unsigned char information[MAX_NAMBER_LANGUAGE][6][MAX_COL_LCD] = 
          {
            {"    �������     ", "     ������     ", "     ������     ", " �����.(��� A)  ", " �����.(��� B)  ", " �����.(��� C)  "},
            {"     ������     ", "    �������     ", "    �������     ", " ������� (��� A)", " ������� (��� B)", " ������� (��� C)"},
            {"    �������     ", "     Error      ", "     Error      ", "  Dep.(Type A)  ", "  Dep.(Type B)  ", "  Dep.(Type C)  "},
            {"    �������     ", "     ������     ", "     ������     ", " �����.(��� A)  ", " �����.(��� B)  ", " �����.(��� C)  "}
          };
          const unsigned int cursor_x[MAX_NAMBER_LANGUAGE][6] = 
          {
            {3, 4, 4, 0, 0, 0},
            {4, 3, 3, 0, 0, 0},
            {3, 4, 4, 1, 1, 1},
            {3, 4, 4, 0, 0, 0}
          };
          
          for (unsigned int j = 0; j<MAX_COL_LCD; j++) working_ekran[i][j] = information[index_language][value][j];
          current_ekran.position_cursor_x = cursor_x[index_language][value];
        }
        else
        {
          const unsigned char information[MAX_NAMBER_LANGUAGE][2][MAX_COL_LCD] = 
          {
            {"     ����.      ", "      ���.      "},
            {"     ����.      ", "     ����.     "},
            {"      Off       ", "       On       "},
            {"     њ��.      ", "     ����.      "}
          };
          const unsigned int cursor_x[MAX_NAMBER_LANGUAGE][2] = 
          {
           {4, 5},
           {4, 4},
           {5, 6},
           {4, 4}
          };
        
          unsigned int temp_data = point->control_mtz04;
          unsigned int n_bit = 0;
          
          //�������� ����� ���
          if      (index_ctr == INDEX_ML_CTRMTZ04_1             ) n_bit = N_BIT_CTRMTZ04_1;
          else if (index_ctr == INDEX_ML_CTRMTZ04_2             ) n_bit = N_BIT_CTRMTZ04_2;
          else if (index_ctr == INDEX_ML_CTRMTZ04_2_PRYSKORENNJA) n_bit = N_BIT_CTRMTZ04_2_PRYSKORENNJA;
          else if (index_ctr == INDEX_ML_CTRMTZ04_2_PRYSKORENA  ) n_bit = N_BIT_CTRMTZ04_2_PRYSKORENA;
          
          for (unsigned int j = 0; j<MAX_COL_LCD; j++) working_ekran[i][j] = information[index_language][(temp_data >> n_bit) & 0x1][j];
          current_ekran.position_cursor_x = cursor_x[index_language][(temp_data >> n_bit) & 0x1];
        }
      }
    }
    else
      for (unsigned int j = 0; j<MAX_COL_LCD; j++) working_ekran[i][j] = ' ';

    index_of_ekran++;
  }

  //³���������� ������ �� �������� � ������ ������ �� ���� � ��� �� ��������� ������
  current_ekran.position_cursor_y = ((position_temp<<1) + 1) & (MAX_ROW_LCD - 1);
  //������ �������
  current_ekran.cursor_on = 1;
  //������ �� ����
  if(current_ekran.edition == 0)current_ekran.cursor_blinking_on = 0;
  else current_ekran.cursor_blinking_on = 1;
  //�������� ������� ���� �����
  current_ekran.current_action = ACTION_WITH_CARRENT_EKRANE_FULL_UPDATE;
}
/*****************************************************/

/*****************************************************/
//
/*****************************************************/
/*****************************************************/
