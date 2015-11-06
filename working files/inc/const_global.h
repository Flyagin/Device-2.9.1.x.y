#ifndef __CONST_GLOBAL__
#define __CONST_GLOBAL__

#define N_BIG   8
#define N_SMALL 2

//��������, ��� ��������� ��� ��������� (����� 1  ��   ) ��������� ���������� ������� 1 ������� 2 � ������������ 2000 = (1999 + 1)
#define TIM2_CCR1_VAL                   30
//��������, ��� ��������� ��� ��������� (����� 10 ��   ) ��������� ���������� ������� 1 ������� 4 � ������������ 600 = (599 + 1)
#define TIM4_CCR1_VAL                   1000
//��������, ��� ��������� ��� ��������� (����� 1 ��   ) ��������� ���������� ������� 2 ������� 4 � ������������ 600 = (599 + 1)
#define TIM4_CCR2_VAL                   100
//��������, ��� ��������� ��� ��������� (�� ������, ����� 10 ���   ) ��������� ���������� ������� 3 ������� 4 � ������������ 600 = (599 + 1)
#define TIM4_CCR3_VAL                   1
//��������, ��� ��������� ��� ��������� (����� 0,625 ��) ��������� ���������� ������� 1 ������� 3 � ������������ 1 = (0 + 1)
#define TIM5_CCR1_2_VAL               37500

#define MAX_NUMBER_LINES_VMP            8

#define DELTA_TIME_FOR_TIMERS           1
#define PERIOD_SIGNAL_OUTPUT_MODE_2     1000 /*��*/

#define NUMBER_ANALOG_CANALES           8

#define NUMBER_INPUTS_1                 5
#define NUMBER_INPUTS_2                 5
#define NUMBER_INPUTS                   (NUMBER_INPUTS_1 + NUMBER_INPUTS_2)
#define NUMBER_OUTPUTS_1                6
#define NUMBER_OUTPUTS_2                4
#define NUMBER_OUTPUTS                  (NUMBER_OUTPUTS_1 + NUMBER_OUTPUTS_2)

#define NUMBER_LEDS                     8
#define NUMBER_DEFINED_FUNCTIONS        8
#define NUMBER_DEFINED_TRIGGERS         4
#define NUMBER_DEFINED_BUTTONS          6

#define NUMBER_GROUP_USTAVOK            4

enum _configuration {
MTZ_BIT_CONFIGURATION = 0,
MTZ04_BIT_CONFIGURATION,
ZDZ_BIT_CONFIGURATION,
ZZ_BIT_CONFIGURATION,
TZNP_BIT_CONFIGURATION,
APV_BIT_CONFIGURATION,
ACHR_CHAPV_BIT_CONFIGURATION,
UROV_BIT_CONFIGURATION,
ZOP_BIT_CONFIGURATION,
UMIN_BIT_CONFIGURATION,
UMAX_BIT_CONFIGURATION,
VMP_BIT_CONFIGURATION,

TOTAL_NUMBER_PROTECTION
};

/*****************************************/
//��������� ��� ���������� �������������� ������
/*****************************************/
enum __rang_button {
RANG_BUTTON_DF1_IN = 0,
RANG_BUTTON_DF2_IN,
RANG_BUTTON_DF3_IN,
RANG_BUTTON_DF4_IN,
RANG_BUTTON_DF5_IN,
RANG_BUTTON_DF6_IN,
RANG_BUTTON_DF7_IN,
RANG_BUTTON_DF8_IN,
RANG_BUTTON_DT1_SET,
RANG_BUTTON_DT1_RESET,
RANG_BUTTON_DT2_SET,
RANG_BUTTON_DT2_RESET,
RANG_BUTTON_DT3_SET,
RANG_BUTTON_DT3_RESET,
RANG_BUTTON_DT4_SET,
RANG_BUTTON_DT4_RESET,
RANG_BUTTON_RESET_LEDS,
RANG_BUTTON_RESET_RELES,
RANG_BUTTON_MISCEVE_DYSTANCIJNE,
RANG_BUTTON_VKL_VV,
RANG_BUTTON_OTKL_VV,
RANG_BUTTON_RESET_BLOCK_READY_TU_VID_ZAHYSTIV
};

#define NUMBER_GENERAL_SIGNAL_FOR_RANG_BUTTON     22
#define NUMBER_MTZ_SIGNAL_FOR_RANG_BUTTON         0
#define NUMBER_MTZ04_SIGNAL_FOR_RANG_BUTTON       0
#define NUMBER_ZDZ_SIGNAL_FOR_RANG_BUTTON         0
#define NUMBER_ZZ_SIGNAL_FOR_RANG_BUTTON          0
#define NUMBER_TZNP_SIGNAL_FOR_RANG_BUTTON        0
#define NUMBER_APV_SIGNAL_FOR_RANG_BUTTON         0
#define NUMBER_ACHR_CHAPV_SIGNAL_FOR_RANG_BUTTON  0
#define NUMBER_UROV_SIGNAL_FOR_RANG_BUTTON        0
#define NUMBER_ZOP_SIGNAL_FOR_RANG_BUTTON         0
#define NUMBER_UMIN_SIGNAL_FOR_RANG_BUTTON        0
#define NUMBER_UMAX_SIGNAL_FOR_RANG_BUTTON        0
#define NUMBER_VMP_SIGNAL_FOR_RANG_BUTTON         0

#define NUMBER_TOTAL_SIGNAL_FOR_RANG_BUTTON       (                                           \
                                                   NUMBER_GENERAL_SIGNAL_FOR_RANG_BUTTON     + \
                                                   NUMBER_MTZ_SIGNAL_FOR_RANG_BUTTON         + \
                                                   NUMBER_MTZ04_SIGNAL_FOR_RANG_BUTTON       + \
                                                   NUMBER_ZDZ_SIGNAL_FOR_RANG_BUTTON         + \
                                                   NUMBER_ZZ_SIGNAL_FOR_RANG_BUTTON          + \
                                                   NUMBER_TZNP_SIGNAL_FOR_RANG_BUTTON        + \
                                                   NUMBER_APV_SIGNAL_FOR_RANG_BUTTON         + \
                                                   NUMBER_ACHR_CHAPV_SIGNAL_FOR_RANG_BUTTON  + \
                                                   NUMBER_UROV_SIGNAL_FOR_RANG_BUTTON        + \
                                                   NUMBER_ZOP_SIGNAL_FOR_RANG_BUTTON         + \
                                                   NUMBER_UMIN_SIGNAL_FOR_RANG_BUTTON        + \
                                                   NUMBER_UMAX_SIGNAL_FOR_RANG_BUTTON        + \
                                                   NUMBER_VMP_SIGNAL_FOR_RANG_BUTTON           \
                                                  ) 
/*****************************************/

/*****************************************/
//��������� ��� ���������� ���������� �����
/*****************************************/
enum __rang_input {
RANG_INPUT_DF1_IN = 0,
RANG_INPUT_DF2_IN,
RANG_INPUT_DF3_IN,
RANG_INPUT_DF4_IN,
RANG_INPUT_DF5_IN,
RANG_INPUT_DF6_IN,
RANG_INPUT_DF7_IN,
RANG_INPUT_DF8_IN,
RANG_INPUT_DT1_SET,
RANG_INPUT_DT1_RESET,
RANG_INPUT_DT2_SET,
RANG_INPUT_DT2_RESET,
RANG_INPUT_DT3_SET,
RANG_INPUT_DT3_RESET,
RANG_INPUT_DT4_SET,
RANG_INPUT_DT4_RESET,
RANG_INPUT_BLOCK_VKL_VV,
RANG_INPUT_RESET_LEDS,
RANG_INPUT_RESET_RELES,
RANG_INPUT_MISCEVE_DYSTANCIJNE,
RANG_INPUT_STATE_VV,
RANG_INPUT_OTKL_VID_ZOVN_ZAHYSTIV,
RANG_INPUT_VKL_VV,
RANG_INPUT_CTRL_VKL,
RANG_INPUT_OTKL_VV,
RANG_INPUT_CTRL_OTKL,
RANG_INPUT_1_GRUPA_USTAVOK,
RANG_INPUT_2_GRUPA_USTAVOK,
RANG_INPUT_3_GRUPA_USTAVOK,
RANG_INPUT_4_GRUPA_USTAVOK,
RANG_INPUT_RESET_BLOCK_READY_TU_VID_ZAHYSTIV,

RANG_INPUT_BLOCK_MTZ1,
RANG_INPUT_BLOCK_MTZ2,
RANG_INPUT_BLOCK_USK_MTZ2,
RANG_INPUT_BLOCK_MTZ3,
RANG_INPUT_BLOCK_MTZ4,

RANG_INPUT_BLOCK_MTZ04_1,
RANG_INPUT_BLOCK_MTZ04_2,
RANG_INPUT_BLOCK_USK_MTZ04_2,

RANG_INPUT_PUSK_ZDZ_VID_DV,

RANG_INPUT_BLOCK_NZZ,

RANG_INPUT_BLOCK_TZNP1,
RANG_INPUT_BLOCK_TZNP2,
RANG_INPUT_BLOCK_TZNP3,

RANG_INPUT_STAT_BLK_APV,

RANG_INPUT_ACHR_CHAPV_VID_DV,
RANG_INPUT_BLOCK_ACHR1,
RANG_INPUT_BLOCK_ACHR2,

RANG_INPUT_PUSK_UROV_VID_DV,

RANG_INPUT_BLOCK_ZOP,

RANG_INPUT_BLOCK_UMIN1,
RANG_INPUT_START_UMIN1,
RANG_INPUT_BLOCK_UMIN2,
RANG_INPUT_START_UMIN2,

RANG_INPUT_BLOCK_UMAX1,
RANG_INPUT_BLOCK_UMAX2
};

#define NUMBER_GENERAL_SIGNAL_FOR_RANG_INPUT     31
#define NUMBER_MTZ_SIGNAL_FOR_RANG_INPUT         5
#define NUMBER_MTZ04_SIGNAL_FOR_RANG_INPUT       3
#define NUMBER_ZDZ_SIGNAL_FOR_RANG_INPUT         1
#define NUMBER_ZZ_SIGNAL_FOR_RANG_INPUT          1
#define NUMBER_TZNP_SIGNAL_FOR_RANG_INPUT        3
#define NUMBER_APV_SIGNAL_FOR_RANG_INPUT         1
#define NUMBER_ACHR_CHAPV_SIGNAL_FOR_RANG_INPUT  3
#define NUMBER_UROV_SIGNAL_FOR_RANG_INPUT        1
#define NUMBER_ZOP_SIGNAL_FOR_RANG_INPUT         1
#define NUMBER_UMIN_SIGNAL_FOR_RANG_INPUT        4
#define NUMBER_UMAX_SIGNAL_FOR_RANG_INPUT        2
#define NUMBER_VMP_SIGNAL_FOR_RANG_INPUT         0

#define NUMBER_TOTAL_SIGNAL_FOR_RANG_INPUT       (                                          \
                                                  NUMBER_GENERAL_SIGNAL_FOR_RANG_INPUT    + \
                                                  NUMBER_MTZ_SIGNAL_FOR_RANG_INPUT        + \
                                                  NUMBER_MTZ04_SIGNAL_FOR_RANG_INPUT      + \
                                                  NUMBER_ZDZ_SIGNAL_FOR_RANG_INPUT        + \
                                                  NUMBER_ZZ_SIGNAL_FOR_RANG_INPUT         + \
                                                  NUMBER_TZNP_SIGNAL_FOR_RANG_INPUT       + \
                                                  NUMBER_APV_SIGNAL_FOR_RANG_INPUT        + \
                                                  NUMBER_ACHR_CHAPV_SIGNAL_FOR_RANG_INPUT + \
                                                  NUMBER_UROV_SIGNAL_FOR_RANG_INPUT       + \
                                                  NUMBER_ZOP_SIGNAL_FOR_RANG_INPUT        + \
                                                  NUMBER_UMIN_SIGNAL_FOR_RANG_INPUT       + \
                                                  NUMBER_UMAX_SIGNAL_FOR_RANG_INPUT       + \
                                                  NUMBER_VMP_SIGNAL_FOR_RANG_INPUT          \
                                                 ) 
/*****************************************/

/*****************************************/
//��������� ��� ���������� ���������� ������-��������-�-�������-����������
/*****************************************/
enum __rang_output_led_df_reg {
RANG_OUTPUT_LED_DF_REG_DF1_IN= 0,
RANG_OUTPUT_LED_DF_REG_DF1_OUT,
RANG_OUTPUT_LED_DF_REG_DF2_IN,
RANG_OUTPUT_LED_DF_REG_DF2_OUT,
RANG_OUTPUT_LED_DF_REG_DF3_IN,
RANG_OUTPUT_LED_DF_REG_DF3_OUT,
RANG_OUTPUT_LED_DF_REG_DF4_IN,
RANG_OUTPUT_LED_DF_REG_DF4_OUT,
RANG_OUTPUT_LED_DF_REG_DF5_IN,
RANG_OUTPUT_LED_DF_REG_DF5_OUT,
RANG_OUTPUT_LED_DF_REG_DF6_IN,
RANG_OUTPUT_LED_DF_REG_DF6_OUT,
RANG_OUTPUT_LED_DF_REG_DF7_IN,
RANG_OUTPUT_LED_DF_REG_DF7_OUT,
RANG_OUTPUT_LED_DF_REG_DF8_IN,
RANG_OUTPUT_LED_DF_REG_DF8_OUT,
RANG_OUTPUT_LED_DF_REG_DT1_SET,
RANG_OUTPUT_LED_DF_REG_DT1_RESET,
RANG_OUTPUT_LED_DF_REG_DT1_OUT,
RANG_OUTPUT_LED_DF_REG_DT2_SET,
RANG_OUTPUT_LED_DF_REG_DT2_RESET,
RANG_OUTPUT_LED_DF_REG_DT2_OUT,
RANG_OUTPUT_LED_DF_REG_DT3_SET,
RANG_OUTPUT_LED_DF_REG_DT3_RESET,
RANG_OUTPUT_LED_DF_REG_DT3_OUT,
RANG_OUTPUT_LED_DF_REG_DT4_SET,
RANG_OUTPUT_LED_DF_REG_DT4_RESET,
RANG_OUTPUT_LED_DF_REG_DT4_OUT,
RANG_OUTPUT_LED_DF_REG_BLOCK_VKL_VV,
RANG_OUTPUT_LED_DF_REG_RESET_LEDS,
RANG_OUTPUT_LED_DF_REG_RESET_RELES,
RANG_OUTPUT_LED_DF_REG_MISCEVE_DYSTANCIJNE,
RANG_OUTPUT_LED_DF_REG_STATE_VV,
RANG_OUTPUT_LED_DF_REG_OTKL_VID_ZOVN_ZAHYSTIV,
RANG_OUTPUT_LED_DF_REG_VKL_VV,
RANG_OUTPUT_LED_DF_REG_CTRL_VKL,
RANG_OUTPUT_LED_DF_REG_OTKL_VV,
RANG_OUTPUT_LED_DF_REG_CTRL_OTKL,
RANG_OUTPUT_LED_DF_REG_PRYVID_VV,
RANG_OUTPUT_LED_DF_REG_PEREVYSHCHENNJA_Inom_VYMK,
RANG_OUTPUT_LED_DF_REG_KRYTYCHNYJ_RESURS_VYMYKACHA,
RANG_OUTPUT_LED_DF_REG_VYCHERPANYJ_RESURS_VYMYKACHA,
RANG_OUTPUT_LED_DF_REG_DEFECT,
RANG_OUTPUT_LED_DF_REG_AVAR_DEFECT,
RANG_OUTPUT_LED_DF_REG_WORK_A_REJESTRATOR,
RANG_OUTPUT_LED_DF_REG_WORK_D_REJESTRATOR,
RANG_OUTPUT_LED_DF_REG_VIDKL_VID_ZAKHYSTIV,
RANG_OUTPUT_LED_DF_REG_WORK_BO,
RANG_OUTPUT_LED_DF_REG_WORK_BV,
RANG_OUTPUT_LED_DF_REG_1_GRUPA_USTAVOK,
RANG_OUTPUT_LED_DF_REG_2_GRUPA_USTAVOK,
RANG_OUTPUT_LED_DF_REG_3_GRUPA_USTAVOK,
RANG_OUTPUT_LED_DF_REG_4_GRUPA_USTAVOK,
RANG_OUTPUT_LED_DF_REG_INVERS_DV_GRUPA_USTAVOK,
RANG_OUTPUT_LED_DF_REG_BLK_GRUP_USTAVOK_VID_ZACHYSTIV,
RANG_OUTPUT_LED_DF_REG_RESET_BLOCK_READY_TU_VID_ZAHYSTIV,
RANG_OUTPUT_LED_DF_REG_READY_TU,

RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ1,
RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ2,
RANG_OUTPUT_LED_DF_REG_BLOCK_USK_MTZ2,
RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ3,
RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ4,
RANG_OUTPUT_LED_DF_REG_SECTOR_VPERED_MTZN1,
RANG_OUTPUT_LED_DF_REG_SECTOR_NAZAD_MTZN1,
RANG_OUTPUT_LED_DF_REG_PO_MTZ1,
RANG_OUTPUT_LED_DF_REG_PO_MTZN1_VPERED,
RANG_OUTPUT_LED_DF_REG_PO_MTZN1_NAZAD,
RANG_OUTPUT_LED_DF_REG_PO_U_MTZPN1,
RANG_OUTPUT_LED_DF_REG_PO_MTZPN1,
RANG_OUTPUT_LED_DF_REG_MTZ1,
RANG_OUTPUT_LED_DF_REG_SECTOR_VPERED_MTZN2,
RANG_OUTPUT_LED_DF_REG_SECTOR_NAZAD_MTZN2,
RANG_OUTPUT_LED_DF_REG_PO_MTZ2,
RANG_OUTPUT_LED_DF_REG_PO_MTZN2_VPERED,
RANG_OUTPUT_LED_DF_REG_PO_MTZN2_NAZAD,
RANG_OUTPUT_LED_DF_REG_PO_U_MTZPN2,
RANG_OUTPUT_LED_DF_REG_PO_MTZPN2,
RANG_OUTPUT_LED_DF_REG_MTZ2,
RANG_OUTPUT_LED_DF_REG_SECTOR_VPERED_MTZN3,
RANG_OUTPUT_LED_DF_REG_SECTOR_NAZAD_MTZN3,
RANG_OUTPUT_LED_DF_REG_PO_MTZ3,
RANG_OUTPUT_LED_DF_REG_PO_MTZN3_VPERED,
RANG_OUTPUT_LED_DF_REG_PO_MTZN3_NAZAD,
RANG_OUTPUT_LED_DF_REG_PO_U_MTZPN3,
RANG_OUTPUT_LED_DF_REG_PO_MTZPN3,
RANG_OUTPUT_LED_DF_REG_MTZ3,
RANG_OUTPUT_LED_DF_REG_SECTOR_VPERED_MTZN4,
RANG_OUTPUT_LED_DF_REG_SECTOR_NAZAD_MTZN4,
RANG_OUTPUT_LED_DF_REG_PO_MTZ4,
RANG_OUTPUT_LED_DF_REG_PO_MTZN4_VPERED,
RANG_OUTPUT_LED_DF_REG_PO_MTZN4_NAZAD,
RANG_OUTPUT_LED_DF_REG_PO_U_MTZPN4,
RANG_OUTPUT_LED_DF_REG_PO_MTZPN4,
RANG_OUTPUT_LED_DF_REG_MTZ4,
RANG_OUTPUT_LED_DF_REG_PO_BLOCK_U_MTZN,
RANG_OUTPUT_LED_DF_REG_NCN_MTZ,

RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ04_1,
RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ04_2,
RANG_OUTPUT_LED_DF_REG_BLOCK_USK_MTZ04_2,
RANG_OUTPUT_LED_DF_REG_PO_MTZ04_1,
RANG_OUTPUT_LED_DF_REG_MTZ04_1,
RANG_OUTPUT_LED_DF_REG_PO_MTZ04_2,
RANG_OUTPUT_LED_DF_REG_MTZ04_2,

RANG_OUTPUT_LED_DF_REG_PUSK_ZDZ_VID_DV,
RANG_OUTPUT_LED_DF_REG_ZDZ,

RANG_OUTPUT_LED_DF_REG_BLOCK_NZZ,
RANG_OUTPUT_LED_DF_REG_PO_NZZ,
RANG_OUTPUT_LED_DF_REG_NZZ,
RANG_OUTPUT_LED_DF_REG_PO_3I0,
RANG_OUTPUT_LED_DF_REG_3I0,
RANG_OUTPUT_LED_DF_REG_PO_3U0,
RANG_OUTPUT_LED_DF_REG_3U0,
RANG_OUTPUT_LED_DF_REG_SECTOR_NZZ,

RANG_OUTPUT_LED_DF_REG_BLOCK_TZNP1,
RANG_OUTPUT_LED_DF_REG_SECTOR_TZNP1_VPERED,
RANG_OUTPUT_LED_DF_REG_SECTOR_TZNP1_NAZAD,
RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP1_VPERED,
RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP1_NAZAD,
RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP1_VPERED,
RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP1_NAZAD,
RANG_OUTPUT_LED_DF_REG_PO_TZNP1_VPERED,
RANG_OUTPUT_LED_DF_REG_PO_TZNP1_NAZAD,
RANG_OUTPUT_LED_DF_REG_TZNP1,
RANG_OUTPUT_LED_DF_REG_BLOCK_TZNP2,
RANG_OUTPUT_LED_DF_REG_SECTOR_TZNP2_VPERED,
RANG_OUTPUT_LED_DF_REG_SECTOR_TZNP2_NAZAD,
RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP2_VPERED,
RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP2_NAZAD,
RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP2_VPERED,
RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP2_NAZAD,
RANG_OUTPUT_LED_DF_REG_PO_TZNP2_VPERED,
RANG_OUTPUT_LED_DF_REG_PO_TZNP2_NAZAD,
RANG_OUTPUT_LED_DF_REG_TZNP2,
RANG_OUTPUT_LED_DF_REG_BLOCK_TZNP3,
RANG_OUTPUT_LED_DF_REG_SECTOR_TZNP3_VPERED,
RANG_OUTPUT_LED_DF_REG_SECTOR_TZNP3_NAZAD,
RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP3_VPERED,
RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP3_NAZAD,
RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP3_VPERED,
RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP3_NAZAD,
RANG_OUTPUT_LED_DF_REG_PO_TZNP3_VPERED,
RANG_OUTPUT_LED_DF_REG_PO_TZNP3_NAZAD,
RANG_OUTPUT_LED_DF_REG_TZNP3,

RANG_OUTPUT_LED_DF_REG_STAT_BLK_APV,
RANG_OUTPUT_LED_DF_REG_APV1,
RANG_OUTPUT_LED_DF_REG_APV2,
RANG_OUTPUT_LED_DF_REG_APV3,
RANG_OUTPUT_LED_DF_REG_APV4,
RANG_OUTPUT_LED_DF_REG_APV_WORK,

RANG_OUTPUT_LED_DF_REG_ACHR_CHAPV_VID_DV,
RANG_OUTPUT_LED_DF_REG_BLOCK_ACHR1,
RANG_OUTPUT_LED_DF_REG_BLOCK_ACHR2,
RANG_OUTPUT_LED_DF_REG_RAZR_CHAPV,
RANG_OUTPUT_LED_DF_REG_BLOCK_CHAPV1_VID_U,
RANG_OUTPUT_LED_DF_REG_BLOCK_CHAPV2_VID_U,
RANG_OUTPUT_LED_DF_REG_BLOCK_CHAPV_VID_U,
RANG_OUTPUT_LED_DF_REG_PO_ACHR1,
RANG_OUTPUT_LED_DF_REG_PO_CHAPV1,
RANG_OUTPUT_LED_DF_REG_ACHR_CHAPV1,
RANG_OUTPUT_LED_DF_REG_PO_ACHR2,
RANG_OUTPUT_LED_DF_REG_PO_CHAPV2,
RANG_OUTPUT_LED_DF_REG_ACHR_CHAPV2,

RANG_OUTPUT_LED_DF_REG_PUSK_UROV_VID_DV,
RANG_OUTPUT_LED_DF_REG_PO_UROV,
RANG_OUTPUT_LED_DF_REG_UROV1,
RANG_OUTPUT_LED_DF_REG_UROV2,

RANG_OUTPUT_LED_DF_REG_BLOCK_ZOP,
RANG_OUTPUT_LED_DF_REG_PO_ZOP,
RANG_OUTPUT_LED_DF_REG_ZOP,

RANG_OUTPUT_LED_DF_REG_BLOCK_UMIN1,
RANG_OUTPUT_LED_DF_REG_START_UMIN1,
RANG_OUTPUT_LED_DF_REG_BLOCK_UMIN2,
RANG_OUTPUT_LED_DF_REG_START_UMIN2,
RANG_OUTPUT_LED_DF_REG_PO_UMIN1,
RANG_OUTPUT_LED_DF_REG_PO_UBLK_UMIN1,
RANG_OUTPUT_LED_DF_REG_PO_IBLK_UMIN1,
RANG_OUTPUT_LED_DF_REG_UMIN1,
RANG_OUTPUT_LED_DF_REG_PO_UMIN2,
RANG_OUTPUT_LED_DF_REG_PO_UBLK_UMIN2,
RANG_OUTPUT_LED_DF_REG_PO_IBLK_UMIN2,
RANG_OUTPUT_LED_DF_REG_UMIN2,

RANG_OUTPUT_LED_DF_REG_BLOCK_UMAX1,
RANG_OUTPUT_LED_DF_REG_PO_UMAX1,
RANG_OUTPUT_LED_DF_REG_UMAX1,
RANG_OUTPUT_LED_DF_REG_BLOCK_UMAX2,
RANG_OUTPUT_LED_DF_REG_PO_UMAX2,
RANG_OUTPUT_LED_DF_REG_UMAX2
};

#define NUMBER_GENERAL_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG     57
#define NUMBER_MTZ_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG         39
#define NUMBER_MTZ04_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG       7
#define NUMBER_ZDZ_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG         2
#define NUMBER_ZZ_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG          8
#define NUMBER_TZNP_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG        30
#define NUMBER_APV_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG         6
#define NUMBER_ACHR_CHAPV_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG  13
#define NUMBER_UROV_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG        4
#define NUMBER_ZOP_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG         3
#define NUMBER_UMIN_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG        12
#define NUMBER_UMAX_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG        6
#define NUMBER_VMP_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG         0

#define NUMBER_TOTAL_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG       (                                                      \
                                                              NUMBER_GENERAL_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG    + \
                                                              NUMBER_MTZ_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG        + \
                                                              NUMBER_MTZ04_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG      + \
                                                              NUMBER_ZDZ_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG        + \
                                                              NUMBER_ZZ_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG         + \
                                                              NUMBER_TZNP_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG       + \
                                                              NUMBER_APV_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG        + \
                                                              NUMBER_ACHR_CHAPV_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG + \
                                                              NUMBER_UROV_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG       + \
                                                              NUMBER_ZOP_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG        + \
                                                              NUMBER_UMIN_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG       + \
                                                              NUMBER_UMAX_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG       + \
                                                              NUMBER_VMP_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG          \
                                                             ) 

/*****************************************/

enum __mtz_const {
  RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ = 0,
  RANG_OUTPUT_LED_DF_REG_BLOCK_USK_MTZ,
  RANG_OUTPUT_LED_DF_REG_SECTOR_VPERED_MTZN,
  RANG_OUTPUT_LED_DF_REG_SECTOR_NAZAD_MTZN,
  RANG_OUTPUT_LED_DF_REG_PO_MTZ,
  RANG_OUTPUT_LED_DF_REG_PO_MTZN_VPERED,
  RANG_OUTPUT_LED_DF_REG_PO_MTZN_NAZAD,
  RANG_OUTPUT_LED_DF_REG_PO_U_MTZPN,
  RANG_OUTPUT_LED_DF_REG_PO_MTZPN,
  RANG_OUTPUT_LED_DF_REG_MTZ,
  /*************************************/
  MTZ_SETTINGS_LENGTH
};

enum __mtz_levels_const {
  MTZ_LEVEL1 = 0,
  MTZ_LEVEL2,
  MTZ_LEVEL3,
  MTZ_LEVEL4,
  /*************************************/
  NUMBER_LEVEL_MTZ //���������� �������� ���
};

enum __mtz_abc_const {
  PHASE_A_INDEX = 0,
  PHASE_B_INDEX,
  PHASE_C_INDEX
};

enum __mtz_abc_direction_const {
  MTZ_NEVYZN = 0,
  MTZ_VPERED,
  MTZ_NAZAD
};

/*****************************************/
//������ �������, �� ������������� ��� � �.�����, ��� � ���������� �� �������������� ������
/*****************************************/
#define MASKA_FOR_INPUT_SIGNALS_0        (unsigned int)(                                \
    (1 << RANG_OUTPUT_LED_DF_REG_DF1_IN)                                        /*0*/   \
  | (1 << RANG_OUTPUT_LED_DF_REG_DF2_IN)                                        /*2*/   \
  | (1 << RANG_OUTPUT_LED_DF_REG_DF3_IN)                                        /*4*/   \
  | (1 << RANG_OUTPUT_LED_DF_REG_DF4_IN)                                        /*6*/   \
  | (1 << RANG_OUTPUT_LED_DF_REG_DF5_IN)                                        /*8*/   \
  | (1 << RANG_OUTPUT_LED_DF_REG_DF6_IN)                                        /*10*/  \
  | (1 << RANG_OUTPUT_LED_DF_REG_DF7_IN)                                        /*12*/  \
  | (1 << RANG_OUTPUT_LED_DF_REG_DF8_IN)                                        /*14*/  \
  | (1 << RANG_OUTPUT_LED_DF_REG_DT1_SET)                                       /*16*/  \
  | (1 << RANG_OUTPUT_LED_DF_REG_DT1_RESET)                                     /*17*/  \
  | (1 << RANG_OUTPUT_LED_DF_REG_DT2_SET)                                       /*19*/  \
  | (1 << RANG_OUTPUT_LED_DF_REG_DT2_RESET)                                     /*20*/  \
  | (1 << RANG_OUTPUT_LED_DF_REG_DT3_SET)                                       /*22*/  \
  | (1 << RANG_OUTPUT_LED_DF_REG_DT3_RESET)                                     /*23*/  \
  | (1 << RANG_OUTPUT_LED_DF_REG_DT4_SET)                                       /*25*/  \
  | (1 << RANG_OUTPUT_LED_DF_REG_DT4_RESET)                                     /*26*/  \
  | (1 << RANG_OUTPUT_LED_DF_REG_BLOCK_VKL_VV)                                  /*28*/  \
  | (1 << RANG_OUTPUT_LED_DF_REG_RESET_LEDS)                                    /*29*/  \
  | (1 << RANG_OUTPUT_LED_DF_REG_RESET_RELES)                                   /*30*/  \
  | (1 << RANG_OUTPUT_LED_DF_REG_MISCEVE_DYSTANCIJNE)                           /*31*/  \
)

#define MASKA_FOR_INPUT_SIGNALS_1        (unsigned int)(                                \
    (1 << (RANG_OUTPUT_LED_DF_REG_STATE_VV - 32))                               /*32*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_OTKL_VID_ZOVN_ZAHYSTIV - 32))                 /*33*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_VKL_VV - 32))                                 /*34*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_CTRL_VKL - 32))                               /*35*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_OTKL_VV - 32))                                /*36*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_CTRL_OTKL - 32))                              /*37*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_1_GRUPA_USTAVOK - 32))                        /*49*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_2_GRUPA_USTAVOK - 32))                        /*50*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_3_GRUPA_USTAVOK - 32))                        /*51*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_4_GRUPA_USTAVOK - 32))                        /*52*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_RESET_BLOCK_READY_TU_VID_ZAHYSTIV - 32))      /*55*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ1 - 32))                             /*57*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ2 - 32))                             /*58*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_USK_MTZ2 - 32))                         /*59*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ3 - 32))                             /*60*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ4 - 32))                             /*61*/  \
)

#define MASKA_FOR_INPUT_SIGNALS_2                  0
    
#define MASKA_FOR_INPUT_SIGNALS_3        (unsigned int)(                                \
    (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ04_1 - 96))                          /*96*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ04_2 - 96))                          /*97*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_USK_MTZ04_2 - 96))                      /*98*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_PUSK_ZDZ_VID_DV - 96))                        /*103*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_NZZ - 96))                              /*105*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_TZNP1 - 96))                            /*113*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_TZNP2 - 96))                            /*123*/ \
)

#define MASKA_FOR_INPUT_SIGNALS_4        (unsigned int)(                                \
    (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_TZNP3 - 128))                           /*133*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_STAT_BLK_APV - 128))                          /*143*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_ACHR_CHAPV_VID_DV - 128))                     /*149*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_ACHR1 - 128))                           /*150*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_ACHR2 - 128))                           /*151*/ \
)
    
#define MASKA_FOR_INPUT_SIGNALS_5        (unsigned int)(                                \
    (1 << (RANG_OUTPUT_LED_DF_REG_PUSK_UROV_VID_DV - 160))                      /*161*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_ZOP - 160))                             /*165*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_UMIN1 - 160))                           /*168*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_START_UMIN1 - 160))                           /*169*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_UMIN2 - 160))                           /*170*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_START_UMIN2 - 160))                           /*171*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_UMAX1 - 160))                           /*180*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_UMAX2 - 160))                           /*183*/ \
)
    
#define MASKA_FOR_INPUT_SIGNALS_6                  0
#define MASKA_FOR_INPUT_SIGNALS_7                  0
/*****************************************/

/*****************************************/
//������ ������ ������� ������� ���� ����� ����� ���������� ����
/*****************************************/
#define MASKA_FOR_DF_TRIGGERS_SIGNALS_0        (unsigned int)(                   \
     (1 << RANG_OUTPUT_LED_DF_REG_DT1_OUT)                               /*18*/  \
   | (1 << RANG_OUTPUT_LED_DF_REG_DT2_OUT)                               /*21*/  \
   | (1 << RANG_OUTPUT_LED_DF_REG_DT3_OUT)                               /*24*/  \
   | (1 << RANG_OUTPUT_LED_DF_REG_DT4_OUT)                               /*27*/  \
)     
#define MASKA_FOR_DF_TRIGGERS_SIGNALS_1                  0
#define MASKA_FOR_DF_TRIGGERS_SIGNALS_2                  0
#define MASKA_FOR_DF_TRIGGERS_SIGNALS_3                  0
#define MASKA_FOR_DF_TRIGGERS_SIGNALS_4                  0
#define MASKA_FOR_DF_TRIGGERS_SIGNALS_5                  0
#define MASKA_FOR_DF_TRIGGERS_SIGNALS_6                  0
#define MASKA_FOR_DF_TRIGGERS_SIGNALS_7                  0

#define MASKA_FOR_ON_OFF_SIGNALS_0                       0
#define MASKA_FOR_ON_OFF_SIGNALS_1        (unsigned int)(                        \
     (1 << (RANG_OUTPUT_LED_DF_REG_VIDKL_VID_ZAKHYSTIV - 32))            /*46*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_WORK_BO - 32))                        /*47*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_WORK_BV - 32))                        /*48*/  \
)     
#define MASKA_FOR_ON_OFF_SIGNALS_2                       0
#define MASKA_FOR_ON_OFF_SIGNALS_3                       0
#define MASKA_FOR_ON_OFF_SIGNALS_4                       0
#define MASKA_FOR_ON_OFF_SIGNALS_5                       0
#define MASKA_FOR_ON_OFF_SIGNALS_6                       0
#define MASKA_FOR_ON_OFF_SIGNALS_7                       0

#define MASKA_FOR_READY_TU_SIGNALS_0                     0
#define MASKA_FOR_READY_TU_SIGNALS_1        (unsigned int)(                      \
     (1 << (RANG_OUTPUT_LED_DF_REG_READY_TU - 32))                       /*56*/  \
)
#define MASKA_FOR_READY_TU_SIGNALS_2                     0
#define MASKA_FOR_READY_TU_SIGNALS_3                     0
#define MASKA_FOR_READY_TU_SIGNALS_4                     0
#define MASKA_FOR_READY_TU_SIGNALS_5                     0
#define MASKA_FOR_READY_TU_SIGNALS_6                     0
#define MASKA_FOR_READY_TU_SIGNALS_7                     0

#define MASKA_FOR_RESURS_VV_SIGNALS_0                    0
#define MASKA_FOR_RESURS_VV_SIGNALS_1     (unsigned int)(                        \
     (1 << (RANG_OUTPUT_LED_DF_REG_PEREVYSHCHENNJA_Inom_VYMK - 32))      /*39*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_KRYTYCHNYJ_RESURS_VYMYKACHA - 32))    /*40*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_VYCHERPANYJ_RESURS_VYMYKACHA - 32))   /*41*/  \
)
#define MASKA_FOR_RESURS_VV_SIGNALS_2                    0
#define MASKA_FOR_RESURS_VV_SIGNALS_3                    0
#define MASKA_FOR_RESURS_VV_SIGNALS_4                    0
#define MASKA_FOR_RESURS_VV_SIGNALS_5                    0
#define MASKA_FOR_RESURS_VV_SIGNALS_6                    0
#define MASKA_FOR_RESURS_VV_SIGNALS_7                    0

#define MASKA_FOR_REJESTRATORS_AND_DEFECT_SIGNALS_0      0
#define MASKA_FOR_REJESTRATORS_AND_DEFECT_SIGNALS_1     (unsigned int)(          \
     (1 << (RANG_OUTPUT_LED_DF_REG_DEFECT - 32))                         /*42*/ /*�������� ������������ ��������������� ���� ���� � �������� ������ ����������, ���� � �� ������� � �� �����. �� ���� ������������� � ���� ���� � �������� ������� ����������� ����������� � ������� �� ������� �����, ���� ���������� ���� ����� �� �����. ��� �������� �����������, �����, �� ���� ������ ���������, ���� ������ ����� �������� � ��������� ��������*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_WORK_A_REJESTRATOR - 32))             /*44*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_WORK_D_REJESTRATOR - 32))             /*45*/  \
)
#define MASKA_FOR_REJESTRATORS_AND_DEFECT_SIGNALS_2      0
#define MASKA_FOR_REJESTRATORS_AND_DEFECT_SIGNALS_3      0
#define MASKA_FOR_REJESTRATORS_AND_DEFECT_SIGNALS_4      0
#define MASKA_FOR_REJESTRATORS_AND_DEFECT_SIGNALS_5      0
#define MASKA_FOR_REJESTRATORS_AND_DEFECT_SIGNALS_6      0
#define MASKA_FOR_REJESTRATORS_AND_DEFECT_SIGNALS_7      0
/*****************************************/

/*****************************************/
//������ �������, �� ����� ������������ � ��������������� ���'���
/*****************************************/
#define MASKA_TRIGGER_SIGNALES_0               (unsigned int)(                   \
     (1 << RANG_OUTPUT_LED_DF_REG_DT1_OUT)                               /*18*/  \
   | (1 << RANG_OUTPUT_LED_DF_REG_DT2_OUT)                               /*21*/  \
   | (1 << RANG_OUTPUT_LED_DF_REG_DT3_OUT)                               /*24*/  \
   | (1 << RANG_OUTPUT_LED_DF_REG_DT4_OUT)                               /*27*/  \
)     

#define MASKA_TRIGGER_SIGNALES_1                  0
#define MASKA_TRIGGER_SIGNALES_2                  0
#define MASKA_TRIGGER_SIGNALES_3                  0
#define MASKA_TRIGGER_SIGNALES_4                  0
#define MASKA_TRIGGER_SIGNALES_5                  0
#define MASKA_TRIGGER_SIGNALES_6                  0
#define MASKA_TRIGGER_SIGNALES_7                  0
/*****************************************/

/*****************************************/
//������ ��� ���������� ���� ����  �������
/*****************************************/
#define MASKA_SIGNALES_FOR_LOCK_GROUP_PICKUP_0  0

#define MASKA_SIGNALES_FOR_LOCK_GROUP_PICKUP_1         (unsigned int)(         \
     (1 << (RANG_OUTPUT_LED_DF_REG_WORK_BO - 32))                       /* 47*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_WORK_BV - 32))                       /* 48*/\
)

#define MASKA_SIGNALES_FOR_LOCK_GROUP_PICKUP_2         (unsigned int)(         \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ1 - 64))                       /* 64*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_VPERED - 64))               /* 65*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_NAZAD - 64))                /* 66*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN1 - 64))                     /* 68*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ1 - 64))                          /* 69*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ2 - 64))                       /* 72*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_VPERED - 64))               /* 73*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_NAZAD - 64))                /* 74*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN2 - 64))                     /* 76*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ2 - 64))                          /* 77*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ3 - 64))                       /* 80*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_VPERED - 64))               /* 81*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_NAZAD - 64))                /* 82*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN3 - 64))                     /* 84*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ3 - 64))                          /* 85*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ4 - 64))                       /* 88*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_VPERED - 64))               /* 89*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_NAZAD - 64))                /* 90*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN4 - 64))                     /* 92*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ4 - 64))                          /* 93*/\
)

#define MASKA_SIGNALES_FOR_LOCK_GROUP_PICKUP_3         (unsigned int)(         \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ04_1 - 96))                    /* 99*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ04_1 - 96))                       /*100*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ04_2 - 96))                    /*101*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ04_2 - 96))                       /*102*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_NZZ - 96))                        /*106*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_NZZ - 96))                           /*107*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0 - 96))                        /*108*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_3I0 - 96))                           /*109*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0 - 96))                        /*110*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_3U0 - 96))                           /*111*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP1_VPERED - 96))           /*116*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP1_NAZAD - 96))            /*117*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP1_VPERED - 96))           /*118*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP1_NAZAD - 96))            /*119*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP1_VPERED - 96))               /*120*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP1_NAZAD - 96))                /*121*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP1 - 96))                         /*122*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP2_VPERED - 96))           /*126*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP2_NAZAD - 96))            /*127*/\
)

#define MASKA_SIGNALES_FOR_LOCK_GROUP_PICKUP_4         (unsigned int)(         \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP2_VPERED - 128))          /*128*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP2_NAZAD - 128))           /*129*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP2_VPERED - 128))              /*130*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP2_NAZAD - 128))               /*131*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP2 - 128))                        /*132*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP3_VPERED - 128))          /*136*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP3_NAZAD - 128))           /*137*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP3_VPERED - 128))          /*138*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP3_NAZAD - 128))           /*139*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP3_VPERED - 128))              /*140*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP3_NAZAD - 128))               /*141*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP3 - 128))                        /*142*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_APV_WORK - 128))                     /*143*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_ACHR1 - 128))                     /*156*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_ACHR_CHAPV1 - 128))                  /*158*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_ACHR2 - 128))                     /*159*/\
)

#define MASKA_SIGNALES_FOR_LOCK_GROUP_PICKUP_5         (unsigned int)(         \
     (1 << (RANG_OUTPUT_LED_DF_REG_ACHR_CHAPV2 - 160))                  /*160*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UROV - 160))                      /*163*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UROV1 - 160))                        /*164*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UROV2 - 160))                        /*165*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_ZOP - 160))                       /*167*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_ZOP - 160))                          /*168*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMIN1 - 160))                     /*173*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMIN1 - 160))                        /*176*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMIN2 - 160))                     /*177*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMIN2 - 160))                        /*180*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMAX1 - 160))                     /*182*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMAX1 - 160))                        /*183*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMAX2 - 160))                     /*184*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMAX2 - 160))                        /*186*/\
)

#define MASKA_SIGNALES_FOR_LOCK_GROUP_PICKUP_6  0
#define MASKA_SIGNALES_FOR_LOCK_GROUP_PICKUP_7  0

/*****************************************/

/*****************************************/
//������ ������������� �������
/*****************************************/
#define MASKA_INFO_SIGNALES_0                  0

#define MASKA_INFO_SIGNALES_1                  (unsigned int)(         \
     (1 << (RANG_OUTPUT_LED_DF_REG_STATE_VV - 32))             /*32*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_DEFECT - 32))               /*42*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_AVAR_DEFECT - 32))          /*43*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_WORK_A_REJESTRATOR - 32))   /*44*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_WORK_D_REJESTRATOR - 32))   /*45*/  \
)     
#define MASKA_INFO_SIGNALES_2                  0
#define MASKA_INFO_SIGNALES_3                  0
#define MASKA_INFO_SIGNALES_4                  0
#define MASKA_INFO_SIGNALES_5                  0
#define MASKA_INFO_SIGNALES_6                  0
#define MASKA_INFO_SIGNALES_7                  0
/*****************************************/

/*****************************************/
/*
������ ��� ����������� ����������, ��� �������, ��� ��������� ���� ������� ������������ ���������� ���������� ��������� � ��������� �����
(����) �� ��� � �������� �� ����� ����
*/
/*****************************************/
#define MASKA_FOR_CONTINUE_GET_DR_ACTINE_WORD_0        0

#define MASKA_FOR_CONTINUE_GET_DR_ACTINE_WORD_1 (unsigned int)(          \
     (1 << (RANG_OUTPUT_LED_DF_REG_OTKL_VID_ZOVN_ZAHYSTIV - 32))/* 33*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_VKL_VV - 32))                /* 34*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_OTKL_VV - 32))               /* 36*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_VIDKL_VID_ZAKHYSTIV - 32))   /* 46*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_WORK_BO - 32))               /* 47*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_WORK_BV - 32))               /* 48*/  \
)  

#define MASKA_FOR_CONTINUE_GET_DR_ACTINE_WORD_2 (unsigned int)(          \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ1 - 64))               /* 64*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_VPERED - 64))       /* 65*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_NAZAD - 64))        /* 66*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN1 - 64))             /* 68*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ1 - 64))                  /* 69*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ2 - 64))               /* 72*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_VPERED - 64))       /* 73*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_NAZAD - 64))        /* 74*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN2 - 64))             /* 76*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ2 - 64))                  /* 77*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ3 - 64))               /* 80*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_VPERED - 64))       /* 81*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_NAZAD - 64))        /* 82*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN3 - 64))             /* 84*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ3 - 64))                  /* 85*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ4 - 64))               /* 88*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_VPERED - 64))       /* 89*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_NAZAD - 64))        /* 90*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN4 - 64))             /* 92*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ4 - 64))                  /* 93*/  \
)            

#define MASKA_FOR_CONTINUE_GET_DR_ACTINE_WORD_3 (unsigned int)(          \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ04_1 - 96))            /* 99*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ04_1 - 96))               /*100*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ04_2 - 96))            /*101*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ04_2 - 96))               /*102*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_NZZ - 96))                /*106*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_NZZ - 96))                   /*107*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0 - 96))                /*108*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_3I0 - 96))                   /*109*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP1 - 96))                 /*122*/  \
)  

#define MASKA_FOR_CONTINUE_GET_DR_ACTINE_WORD_4 (unsigned int)(          \
     (1 << (RANG_OUTPUT_LED_DF_REG_TZNP2 - 128))                /*132*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP3 - 128))                /*142*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_APV1 - 128))                 /*144*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_APV2 - 128))                 /*145*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_APV3 - 128))                 /*146*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_APV4 - 128))                 /*147*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_APV_WORK - 128))             /*148*/  \
)  

#define MASKA_FOR_CONTINUE_GET_DR_ACTINE_WORD_5 (unsigned int)(          \
     (1 << (RANG_OUTPUT_LED_DF_REG_PUSK_UROV_VID_DV - 160))     /*162*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UROV - 160))              /*163*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_UROV1 - 160))                /*164*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_UROV2 - 160))                /*165*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_ZOP - 160))               /*167*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_ZOP - 160))                  /*168*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMAX1 - 160))             /*182*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMAX1 - 160))                /*183*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMAX2 - 160))             /*185*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMAX2 - 160))                /*186*/  \
)

#define MASKA_FOR_CONTINUE_GET_DR_ACTINE_WORD_6        0
#define MASKA_FOR_CONTINUE_GET_DR_ACTINE_WORD_7        0
/*****************************************/

/*****************************************/
//������ ����������� ������������� ������� ������ ��� ����������� ����������
/*****************************************/
#define MASKA_MONITOTYNG_PHASE_SIGNALES_0        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_1        0

#define MASKA_MONITOTYNG_PHASE_SIGNALES_2 (unsigned int)(                \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ1 - 64))               /* 64*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_VPERED - 64))       /* 65*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_NAZAD - 64))        /* 66*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN1 - 64))             /* 68*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ1 - 64))                  /* 69*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ2 - 64))               /* 72*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_VPERED - 64))       /* 73*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_NAZAD - 64))        /* 74*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN2 - 64))             /* 76*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ2 - 64))                  /* 77*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ3 - 64))               /* 80*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_VPERED - 64))       /* 81*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_NAZAD - 64))        /* 82*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN3 - 64))             /* 84*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ3 - 64))                  /* 86*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ4 - 64))               /* 88*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_VPERED - 64))       /* 89*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_NAZAD - 64))        /* 90*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN4 - 64))             /* 92*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ4 - 64))                  /* 93*/ \
)

#define MASKA_MONITOTYNG_PHASE_SIGNALES_3        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_4        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_5        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_6        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_7        0
/*****************************************/

/*****************************************/
//������ ����������� ������������� ������� ������ ������� 0,4�� ��� ����������� ����������
/*****************************************/
#define MASKA_MONITOTYNG_PHASE04_SIGNALES_0        0
#define MASKA_MONITOTYNG_PHASE04_SIGNALES_1        0
#define MASKA_MONITOTYNG_PHASE04_SIGNALES_2        0

#define MASKA_MONITOTYNG_PHASE04_SIGNALES_3 (unsigned int)(        \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ04_1 - 96))            /* 99*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ04_1 - 96))               /*100*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ04_2 - 96))            /*101*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ04_2 - 96))               /*102*/\
)

#define MASKA_MONITOTYNG_PHASE04_SIGNALES_4        0
#define MASKA_MONITOTYNG_PHASE04_SIGNALES_5        0
#define MASKA_MONITOTYNG_PHASE04_SIGNALES_6        0
#define MASKA_MONITOTYNG_PHASE04_SIGNALES_7        0
/*****************************************/

/*****************************************/
//������ ����������� ������������� ������ 3I0 ��� ����������� ����������
/*****************************************/
#define MASKA_MONITOTYNG_3I0_SIGNALES_0        0
#define MASKA_MONITOTYNG_3I0_SIGNALES_1        0
#define MASKA_MONITOTYNG_3I0_SIGNALES_2        0

#define MASKA_MONITOTYNG_3I0_SIGNALES_3        (unsigned int)(           \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_NZZ - 96))                /*106*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_NZZ - 96))                   /*107*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0 - 96))                /*108*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_3I0 - 96))                   /*109*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP1_VPERED - 96))   /*116*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP1_NAZAD - 96))    /*117*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP1_VPERED - 96))       /*120*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP1_NAZAD - 96))        /*121*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP1 - 96))                 /*122*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP2_VPERED - 96))   /*126*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP2_NAZAD - 96))    /*127*/  \
)            

#define MASKA_MONITOTYNG_3I0_SIGNALES_4        (unsigned int)(          \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP2_VPERED - 128))     /*130*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP2_NAZAD - 128))      /*131*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP2 - 128))               /*132*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP3_VPERED - 128)) /*136*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP3_NAZAD - 128))  /*137*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP3_VPERED - 128))     /*140*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP3_NAZAD - 128))      /*141*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP3 - 128))               /*142*/  \
)            

#define MASKA_MONITOTYNG_3I0_SIGNALES_5        0
#define MASKA_MONITOTYNG_3I0_SIGNALES_6        0
#define MASKA_MONITOTYNG_3I0_SIGNALES_7        0
/*****************************************/

/*****************************************/
//������ ����������� ����������� ������� 3U0 ��� ����������� ����������
/*****************************************/
#define MASKA_MONITOTYNG_3U0_SIGNALES_0        0
#define MASKA_MONITOTYNG_3U0_SIGNALES_1        0
#define MASKA_MONITOTYNG_3U0_SIGNALES_2        0

#define MASKA_MONITOTYNG_3U0_SIGNALES_3        (unsigned int)(           \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_NZZ - 96))                /*106*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_NZZ - 96))                   /*107*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0 - 96))                /*110*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_3U0 - 96))                   /*111*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP1_VPERED - 96))   /*118*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP1_NAZAD - 96))    /*119*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP1_VPERED - 96))       /*120*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP1_NAZAD - 96))        /*121*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP1 - 96))                 /*122*/  \
)            

#define MASKA_MONITOTYNG_3U0_SIGNALES_4        (unsigned int)(          \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP2_VPERED - 128))  /*128*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP2_NAZAD - 128))   /*129*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP2_VPERED - 128))      /*130*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP2_NAZAD - 128))       /*131*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP2 - 128))                /*132*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP3_VPERED - 128))  /*138*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP3_NAZAD - 128))   /*139*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP3_VPERED - 128))      /*140*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP3_NAZAD - 128))       /*141*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP3 - 128))                /*142*/  \
)            

#define MASKA_MONITOTYNG_3U0_SIGNALES_5        0
#define MASKA_MONITOTYNG_3U0_SIGNALES_6        0
#define MASKA_MONITOTYNG_3U0_SIGNALES_7        0
/*****************************************/

/*****************************************/
//������ ����������� Umin ��� ����������� ����������
/*****************************************/
#define MASKA_MONITOTYNG_UMIN_SIGNALES_0        0
#define MASKA_MONITOTYNG_UMIN_SIGNALES_1        0
#define MASKA_MONITOTYNG_UMIN_SIGNALES_2        0
#define MASKA_MONITOTYNG_UMIN_SIGNALES_3        0
#define MASKA_MONITOTYNG_UMIN_SIGNALES_4        0

#define MASKA_MONITOTYNG_UMIN_SIGNALES_5 (unsigned int)(   \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMIN1 - 160))/*173*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMIN1 - 160))   /*176*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMIN2 - 160))/*177*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMIN2 - 160))   /*181*/ \
)

#define MASKA_MONITOTYNG_UMIN_SIGNALES_6        0
#define MASKA_MONITOTYNG_UMIN_SIGNALES_7        0
/*****************************************/

/*****************************************/
//������ ����������� Umax ��� ����������� ����������
/*****************************************/
#define MASKA_MONITOTYNG_UMAX_SIGNALES_0        0
#define MASKA_MONITOTYNG_UMAX_SIGNALES_1        0
#define MASKA_MONITOTYNG_UMAX_SIGNALES_2        0
#define MASKA_MONITOTYNG_UMAX_SIGNALES_3        0
#define MASKA_MONITOTYNG_UMAX_SIGNALES_4        0

#define MASKA_MONITOTYNG_UMAX_SIGNALES_5 (unsigned int)(   \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMAX1 - 160))/*182*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMAX1 - 160))   /*183*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMAX2 - 160))/*185*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMAX2 - 160))   /*186*/ \
)

#define MASKA_MONITOTYNG_UMAX_SIGNALES_6        0
#define MASKA_MONITOTYNG_UMAX_SIGNALES_7        0
/*****************************************/

/*****************************************/
//������ ����������� ������������� ������ ��������� ����������� ��� ����������� ����������
/*****************************************/
#define MASKA_MONITOTYNG_ZOP_SIGNALES_0                  0
#define MASKA_MONITOTYNG_ZOP_SIGNALES_1                  0
#define MASKA_MONITOTYNG_ZOP_SIGNALES_2                  0
#define MASKA_MONITOTYNG_ZOP_SIGNALES_3                  0
#define MASKA_MONITOTYNG_ZOP_SIGNALES_4                  0

#define MASKA_MONITOTYNG_ZOP_SIGNALES_5 (unsigned int)(   \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_ZOP - 160))/*167*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_ZOP - 160))   /*169*/  \
)

#define MASKA_MONITOTYNG_ZOP_SIGNALES_6                  0
#define MASKA_MONITOTYNG_ZOP_SIGNALES_7                  0
/*****************************************/

/*****************************************/
//������ ����������� ������� ��� ��� ��� ����������� ����������
/*****************************************/
#define MASKA_MONITOTYNG_F_MIN_ACHR_SIGNALES_0   0
#define MASKA_MONITOTYNG_F_MIN_ACHR_SIGNALES_1   0
#define MASKA_MONITOTYNG_F_MIN_ACHR_SIGNALES_2   0
#define MASKA_MONITOTYNG_F_MIN_ACHR_SIGNALES_3   0

#define MASKA_MONITOTYNG_F_MIN_ACHR_SIGNALES_4   (unsigned int)(  \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_ACHR1 - 128))    /*156*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_ACHR_CHAPV1 - 128)) /*158*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_ACHR2 - 128))    /*159*/  \
)     

#define MASKA_MONITOTYNG_F_MIN_ACHR_SIGNALES_5   (unsigned int)(  \
     (1 << (RANG_OUTPUT_LED_DF_REG_ACHR_CHAPV2 - 160)) /*161*/  \
)     

#define MASKA_MONITOTYNG_F_MIN_ACHR_SIGNALES_6   0
#define MASKA_MONITOTYNG_F_MIN_ACHR_SIGNALES_7   0
/*****************************************/

/*****************************************/
//������ ����������� ������������� ������� ������ ��� �������� ��
/*****************************************/
#define MASKA_MONITOTYNG_PHASE_SIGNALES_KZ_0        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_KZ_1        0

#define MASKA_MONITOTYNG_PHASE_SIGNALES_KZ_2 (unsigned int)(             \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ1 - 64))               /* 64*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_VPERED - 64))       /* 65*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_NAZAD - 64))        /* 66*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN1 - 64))             /* 68*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ2 - 64))               /* 72*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_VPERED - 64))       /* 73*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_NAZAD - 64))        /* 74*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN2 - 64))             /* 76*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ3 - 64))               /* 80*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_VPERED - 64))       /* 81*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_NAZAD - 64))        /* 82*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN3 - 64))             /* 84*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ4 - 64))               /* 88*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_VPERED - 64))       /* 89*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_NAZAD - 64))        /* 90*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN4 - 64))             /* 92*/ \
)

#define MASKA_MONITOTYNG_PHASE_SIGNALES_KZ_3        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_KZ_4        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_KZ_5        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_KZ_6        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_KZ_7        0
/*****************************************/


/*****************************************/
//³��������� �� �������
/*****************************************/
typedef enum __vymknennja_vid_zakhystiv__
{
  VYMKNENNJA_VID_MTZ1,
  VYMKNENNJA_VID_MTZ2,
  VYMKNENNJA_VID_MTZ3,
  VYMKNENNJA_VID_MTZ4,

  VYMKNENNJA_VID_MTZ04_1,
  VYMKNENNJA_VID_MTZ04_2,

  VYMKNENNJA_VID_ZDZ,

  VYMKNENNJA_VID_3I0,
  VYMKNENNJA_VID_3U0,
  VYMKNENNJA_VID_NZZ,

  VYMKNENNJA_VID_TZNP1,
  VYMKNENNJA_VID_TZNP2,
  VYMKNENNJA_VID_TZNP3,

  VYMKNENNJA_VID_ACHR_CHAPV_VID_DV,
  VYMKNENNJA_VID_ACHR_CHAPV1,
  VYMKNENNJA_VID_ACHR_CHAPV2,

  VYMKNENNJA_VID_UROV1,
  VYMKNENNJA_VID_UROV2,

  VYMKNENNJA_VID_ZOP,

  VYMKNENNJA_VID_UMIN1,
  VYMKNENNJA_VID_UMIN2,

  VYMKNENNJA_VID_UMAX1,
  VYMKNENNJA_VID_UMAX2,

  VYMKNENNJA_VID_ZOVNISHNIKH_ZAKHYSTIV,
  
  VYMKNENNJA_VID_INSHYKH_SYGNALIV,
    
  VYMKNENNJA_VID_MAX_NUMBER  
  
}__vymknennja_vid_zakhystiv;
/*****************************************/

/*****************************************/
//����������� ������� ������� (�������), �� ������ ���� ���������� �� �����/������/��������������/�.���������/��
/*****************************************/
#define VAGA_MAX_FUNCTIONS_IN_INPUT             3
#define MAX_FUNCTIONS_IN_INPUT                  (1 << VAGA_MAX_FUNCTIONS_IN_INPUT)
#define VAGA_MAX_FUNCTIONS_IN_OUTPUT            4
#define MAX_FUNCTIONS_IN_OUTPUT                 (1 << VAGA_MAX_FUNCTIONS_IN_OUTPUT)
#define VAGA_MAX_FUNCTIONS_IN_LED               3
#define MAX_FUNCTIONS_IN_LED                    (1 << VAGA_MAX_FUNCTIONS_IN_LED)
#define VAGA_MAX_FUNCTIONS_IN_DF                4
#define MAX_FUNCTIONS_IN_DF                     (1 << VAGA_MAX_FUNCTIONS_IN_DF)
#define MAX_FUNCTIONS_IN_DT                     6
#define VAGA_MAX_FUNCTIONS_IN_DB                3
#define MAX_FUNCTIONS_IN_DB                     (1 << VAGA_MAX_FUNCTIONS_IN_DB)
#define VAGA_MAX_FUNCTIONS_IN_AREG              5
#define MAX_FUNCTIONS_IN_AREG                   (1 << VAGA_MAX_FUNCTIONS_IN_AREG)
#define VAGA_MAX_FUNCTIONS_IN_DREG              5
#define MAX_FUNCTIONS_IN_DREG                   (1 << VAGA_MAX_FUNCTIONS_IN_DREG)
/*****************************************/


/*****************************************/
//��������� ��� �����������
/*****************************************/
#define MAX_CHAR_IN_NAME_OF_CELL                              32
/*****************************************/

/*****************************************/
//��������� ��� �������� ���� ���������
/*****************************************/
#define CHANGED_ETAP_NONE                                     0
#define CHANGED_ETAP_EXECUTION                                1
#define CHANGED_ETAP_ENDED                                    2
#define CHANGED_ETAP_ENDED_EXTRA_ETAP                         3
/*****************************************/

/*****************************************/
//��������� ��� ���������� �������������� ������
/*****************************************/
enum __odynyci_vymirjuvannja {
INDEX_A = 0,
INDEX_V,
INDEX_SECOND,

NUMBER_ODYNYCI_VYMIRJUVANNJA
};
/*****************************************/

/*****************************************/
//��� ����� ������� ��������
/*****************************************/
#define TYPE_INPUT_0_1        0
#define TYPE_INPUT_1_0        1
/*****************************************/

/*****************************************/
//������������� ���� ������ �������� �����������
/*****************************************/
//#define ADJUSTMENT_3I0_IA_IB_IC                             1
//#define ADJUSTMENT_3I0_IA_IC_3U0                            2
//#define ADJUSTMENT_3I0_IA_IB_IC_UA_UB_UC_UABTN2             3
#define ADJUSTMENT_3I0_IA_IB_IC_UA_UB_UC_3U0                  4
#define ADJUSTMENT_ID                                         ADJUSTMENT_3I0_IA_IB_IC_UA_UB_UC_3U0
/*****************************************/

/*****************************************/
//����� ����������� ������������
/*****************************************/
#define VERSIA_PZ                                             9
#define MODYFIKACIA_VERSII_PZ                                 1
#define ZBIRKA_VERSII_PZ                                      0
/*****************************************/

/*****************************************/
//��� ���������
/*****************************************/

#define YEAR_VER                                              ((__DATE__[9] != ' ') ? (((__DATE__[9] - 0x30) << 4) | (__DATE__[10] - 0x30)) : (__DATE__[10] - 0x30))
#define MONTH_VER                                             str_to_int_DATE_Mmm()
#define DAY_VER                                               ((__DATE__[4] != ' ') ? (((__DATE__[4] - 0x30) << 4) | (__DATE__[5] - 0x30)) : (__DATE__[5] - 0x30))
#define HOUR_VER                                              (((__TIME__[0] - 0x30) << 4) | (__TIME__[1] - 0x30))
#define MINUTE_VER                                            (((__TIME__[3] - 0x30) << 4) | (__TIME__[4] - 0x30))
#define SECOND_VER                                            (((__TIME__[6] - 0x30) << 4) | (__TIME__[7] - 0x30))
/*****************************************/

/*****************************************/
//����� ������������ ����� �����
/*****************************************/
#define VERSIA_GMM                                             6
#define MODYFIKACIA_VERSII_GMM                                 4
/*****************************************/
#endif
