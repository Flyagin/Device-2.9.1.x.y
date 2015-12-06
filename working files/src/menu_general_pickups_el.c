#include "header.h"

/*****************************************************/
//Формуємо екран відображення загальних уставок розширеної логіки
/*****************************************************/
void make_ekran_general_pickups_el()
{
  const unsigned char name_string[MAX_NAMBER_LANGUAGE][MAX_ROW_FOR_GENERAL_PICKUPS_EL][MAX_COL_LCD] = 
  {
    {
      "Макс.кол.итерац."
    },
    {
      "Макс.кільк.ітер."
    },
    {
      " Max.NR of iter."
    },
    {
      "Макс.кол.итерац."
    }
  };

  int index_language = index_language_in_array(current_settings.language);
  int position_temp = current_ekran.index_position;
  int index_of_ekran;
  unsigned int vaga, value, first_symbol;
  
  //Множення на два величини position_temp потрібне для того, бо наодн позицію ми використовуємо два рядки (назва + значення)
  index_of_ekran = ((position_temp<<1) >> POWER_MAX_ROW_LCD) << POWER_MAX_ROW_LCD;

  
  for (unsigned int i=0; i< MAX_ROW_LCD; i++)
  {
    if (index_of_ekran < (MAX_ROW_FOR_GENERAL_PICKUPS_EL << 1))//Множення на два константи MAX_ROW_FOR_GENERAL_PICKUPS_EL потрібне для того, бо на одну позицію ми використовуємо два рядки (назва + значення)
    {
      if ((i & 0x1) == 0)
      {
        //У непарному номері рядку виводимо заголовок
        for (unsigned int j = 0; j<MAX_COL_LCD; j++) working_ekran[i][j] = name_string[index_language][index_of_ekran>>1][j];
        if ((index_of_ekran>>1) == INDEX_ML_NUMBER_INERATION)
        {
          vaga = 10; //максимальний ваговий
          if (current_ekran.edition == 0) value = current_settings.number_iteration_el; //у змінну value поміщаємо значення
          else value = edition_settings.number_iteration_el;
          first_symbol = 0; //помічаємо, що ще ніодин значущий символ не виведений
        }
      }
      else 
      {
        //У парному номері рядку виводимо значення уставки
        for (unsigned int j = 0; j<MAX_COL_LCD; j++)
        {
          if ((index_of_ekran>>1) == INDEX_ML_NUMBER_INERATION)
          {
            if ((j < COL_NUMBER_INERATION_BEGIN) ||  (j > COL_NUMBER_INERATION_END ))working_ekran[i][j] = ' ';
            else
              calc_int_symbol_and_put_into_working_ekran((working_ekran[i] + j), &value, &vaga, &first_symbol);
          }
        }
      }
        
    }
    else
      for (unsigned int j = 0; j<MAX_COL_LCD; j++) working_ekran[i][j] = ' ';

    index_of_ekran++;
  }

  //Відображення курору по вертикалі і курсор завжди має бути у полі із значенням устаки
  current_ekran.position_cursor_y = ((position_temp<<1) + 1) & (MAX_ROW_LCD - 1);
  //Курсор по горизонталі відображається на першому символі у випадку, коли ми не в режимі редагування, інакше позиція буде визначена у функцї main_manu_function
  if (current_ekran.edition == 0)
  {
    int last_position_cursor_x = MAX_COL_LCD;
    if (current_ekran.index_position == INDEX_ML_NUMBER_INERATION)
    {
      current_ekran.position_cursor_x = COL_NUMBER_INERATION_BEGIN;
      last_position_cursor_x = COL_NUMBER_INERATION_END;
    }

    //Підтягуємо курсор до першого символу
    while (((working_ekran[current_ekran.position_cursor_y][current_ekran.position_cursor_x + 1]) == ' ') && 
           (current_ekran.position_cursor_x < (last_position_cursor_x -1))) current_ekran.position_cursor_x++;
    
    //Курсор ставимо так, щоб він був перед числом
    if (((working_ekran[current_ekran.position_cursor_y][current_ekran.position_cursor_x]) != ' ') && 
        (current_ekran.position_cursor_x > 0)) current_ekran.position_cursor_x--;
  }
  //Курсор видимий
  current_ekran.cursor_on = 1;
  //Курсор не мигає
  if(current_ekran.edition == 0)current_ekran.cursor_blinking_on = 0;
  else current_ekran.cursor_blinking_on = 1;
  //Обновити повністю весь екран
  current_ekran.current_action = ACTION_WITH_CARRENT_EKRANE_FULL_UPDATE;
}
/*****************************************************/

/*****************************************************/
//
/*****************************************************/
/*****************************************************/
