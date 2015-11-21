#ifndef __CONST_GLOBAL__
#define __CONST_GLOBAL__

#define N_BIG   8
#define N_SMALL 2

//Величина, яка необхідна для періодичної (період 1  мс   ) генерації переривань каналом 1 таймеру 2 з прескаллером 2000 = (1999 + 1)
#define TIM2_CCR1_VAL                   30
//Величина, яка необхідна для періодичної (період 10 мс   ) генерації переривань каналом 1 таймеру 4 з прескаллером 600 = (599 + 1)
#define TIM4_CCR1_VAL                   1000
//Величина, яка необхідна для періодичної (період 1 мс   ) генерації переривань каналом 2 таймеру 4 з прескаллером 600 = (599 + 1)
#define TIM4_CCR2_VAL                   100
//Величина, яка необхідна для періодичної (як мінімум, період 10 мкс   ) генерації переривань каналом 3 таймеру 4 з прескаллером 600 = (599 + 1)
#define TIM4_CCR3_VAL                   1
//Величина, яка необхідна для періодичної (період 0,625 мс) генерації переривань каналом 1 таймеру 3 з прескаллером 1 = (0 + 1)
#define TIM5_CCR1_2_VAL               37500

#define MAX_NUMBER_LINES_VMP            8

#define DELTA_TIME_FOR_TIMERS           1
#define PERIOD_SIGNAL_OUTPUT_MODE_2     1000 /*мс*/

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
#define NUMBER_DEFINED_AND              8
#define NUMBER_DEFINED_OR               8
#define NUMBER_DEFINED_XOR              8
#define NUMBER_DEFINED_NOT              16
#define NUMBER_DEFINED_BUTTONS          6

#define NUMBER_IN_AND                   8
#define NUMBER_IN_OR                    8

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
//Константи для ранжування функціональних кнопок
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
//Константи для ранжування дискретних входів
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
//Константи для ранжування дискретних виходів-свтодіодів-О-функцій-реєстраторів
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
RANG_OUTPUT_LED_DF_REG_D_AND1,
RANG_OUTPUT_LED_DF_REG_D_AND2,
RANG_OUTPUT_LED_DF_REG_D_AND3,
RANG_OUTPUT_LED_DF_REG_D_AND4,
RANG_OUTPUT_LED_DF_REG_D_AND5,
RANG_OUTPUT_LED_DF_REG_D_AND6,
RANG_OUTPUT_LED_DF_REG_D_AND7,
RANG_OUTPUT_LED_DF_REG_D_AND8,
RANG_OUTPUT_LED_DF_REG_D_OR1,
RANG_OUTPUT_LED_DF_REG_D_OR2,
RANG_OUTPUT_LED_DF_REG_D_OR3,
RANG_OUTPUT_LED_DF_REG_D_OR4,
RANG_OUTPUT_LED_DF_REG_D_OR5,
RANG_OUTPUT_LED_DF_REG_D_OR6,
RANG_OUTPUT_LED_DF_REG_D_OR7,
RANG_OUTPUT_LED_DF_REG_D_OR8,
RANG_OUTPUT_LED_DF_REG_D_XOR1,
RANG_OUTPUT_LED_DF_REG_D_XOR2,
RANG_OUTPUT_LED_DF_REG_D_XOR3,
RANG_OUTPUT_LED_DF_REG_D_XOR4,
RANG_OUTPUT_LED_DF_REG_D_XOR5,
RANG_OUTPUT_LED_DF_REG_D_XOR6,
RANG_OUTPUT_LED_DF_REG_D_XOR7,
RANG_OUTPUT_LED_DF_REG_D_XOR8,
RANG_OUTPUT_LED_DF_REG_D_NOT1,
RANG_OUTPUT_LED_DF_REG_D_NOT2,
RANG_OUTPUT_LED_DF_REG_D_NOT3,
RANG_OUTPUT_LED_DF_REG_D_NOT4,
RANG_OUTPUT_LED_DF_REG_D_NOT5,
RANG_OUTPUT_LED_DF_REG_D_NOT6,
RANG_OUTPUT_LED_DF_REG_D_NOT7,
RANG_OUTPUT_LED_DF_REG_D_NOT8,
RANG_OUTPUT_LED_DF_REG_D_NOT9,
RANG_OUTPUT_LED_DF_REG_D_NOT10,
RANG_OUTPUT_LED_DF_REG_D_NOT11,
RANG_OUTPUT_LED_DF_REG_D_NOT12,
RANG_OUTPUT_LED_DF_REG_D_NOT13,
RANG_OUTPUT_LED_DF_REG_D_NOT14,
RANG_OUTPUT_LED_DF_REG_D_NOT15,
RANG_OUTPUT_LED_DF_REG_D_NOT16,
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

#define NUMBER_GENERAL_SIGNAL_FOR_RANG_OUTPUT_LED_DF_REG     97
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
  NUMBER_LEVEL_MTZ //Количество ступеней МТЗ
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
//Макски сигналів, які активовуються або з д.входів, або з інтирфейсів чи функціональних кнопок
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
)

#define MASKA_FOR_INPUT_SIGNALS_1                  0
    
#define MASKA_FOR_INPUT_SIGNALS_2        (unsigned int)(                                \
    (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_VKL_VV - 64))                           /*68*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_RESET_LEDS - 64))                             /*69*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_RESET_RELES - 64))                            /*70*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_MISCEVE_DYSTANCIJNE - 64))                    /*71*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_STATE_VV - 64))                               /*72*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_OTKL_VID_ZOVN_ZAHYSTIV - 64))                 /*73*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_VKL_VV - 64))                                 /*74*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_CTRL_VKL - 64))                               /*75*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_OTKL_VV - 64))                                /*76*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_CTRL_OTKL - 64))                              /*77*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_RESET_BLOCK_READY_TU_VID_ZAHYSTIV - 64))      /*95*/  \
)

#define MASKA_FOR_INPUT_SIGNALS_3        (unsigned int)(                                \
    (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ1 - 96))                             /*97*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ2 - 96))                             /*98*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_USK_MTZ2 - 96))                         /*99*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ3 - 96))                             /*100*/  \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ4 - 96))                             /*101*/  \
)

#define MASKA_FOR_INPUT_SIGNALS_4        (unsigned int)(                                \
    (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ04_1 - 128))                          /*136*/\
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ04_2 - 128))                          /*137*/\
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_USK_MTZ04_2 - 128))                      /*138*/\
  | (1 << (RANG_OUTPUT_LED_DF_REG_PUSK_ZDZ_VID_DV - 128))                        /*143*/\
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_NZZ - 128))                              /*145*/\
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_TZNP1 - 128))                            /*153*/\
)
    
#define MASKA_FOR_INPUT_SIGNALS_5        (unsigned int)(                                \
    (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_TZNP2 - 160))                           /*163*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_TZNP3 - 160))                           /*173*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_STAT_BLK_APV - 160))                          /*183*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_ACHR_CHAPV_VID_DV - 160))                     /*189*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_ACHR1 - 160))                           /*190*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_ACHR2 - 160))                           /*191*/ \
)
    
#define MASKA_FOR_INPUT_SIGNALS_6        (unsigned int)(                                \
    (1 << (RANG_OUTPUT_LED_DF_REG_PUSK_UROV_VID_DV - 192))                      /*201*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_ZOP - 192))                             /*205*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_UMIN1 - 192))                           /*208*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_START_UMIN1 - 192))                           /*209*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_UMIN2 - 192))                           /*210*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_START_UMIN2 - 192))                           /*211*/ \
  | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_UMAX1 - 192))                           /*220*/ \
)
    
#define MASKA_FOR_INPUT_SIGNALS_7        (unsigned int)(                                \
    (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_UMAX2 - 224))                           /*223*/ \
)
/*****************************************/

/*****************************************/
//Макски всіх сигналів МСЗ
/*****************************************/
#define MASKA_MTZ_SIGNALS_0                  0
#define MASKA_MTZ_SIGNALS_1                  0
#define MASKA_MTZ_SIGNALS_2                  0

#define MASKA_MTZ_SIGNALS_3        (unsigned int)(                                     \
     (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ1 - 96))                            /* 97*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ2 - 96))                            /* 98*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_USK_MTZ2 - 96))                        /* 99*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ3 - 96))                            /*100*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ4 - 96))                            /*101*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_SECTOR_VPERED_MTZN1 - 96))                   /*102*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_SECTOR_NAZAD_MTZN1 - 96))                    /*103*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ1 - 96))                               /*104*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_VPERED - 96))                       /*105*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_NAZAD - 96))                        /*106*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_U_MTZPN1 - 96))                           /*107*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN1 - 96))                             /*108*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ1 - 96))                                  /*109*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_SECTOR_VPERED_MTZN2 - 96))                   /*110*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_SECTOR_NAZAD_MTZN2 - 96))                    /*111*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ2 - 96))                               /*112*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_VPERED - 96))                       /*113*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_NAZAD - 96))                        /*114*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_U_MTZPN2 - 96))                           /*115*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN2 - 96))                             /*116*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ2 - 96))                                  /*117*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_SECTOR_VPERED_MTZN3 - 96))                   /*118*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_SECTOR_NAZAD_MTZN3 - 96))                    /*119*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ3 - 96))                               /*120*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_VPERED - 96))                       /*121*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_NAZAD - 96))                        /*122*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_U_MTZPN3 - 96))                           /*123*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN3 - 96))                             /*124*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ3 - 96))                                  /*125*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_SECTOR_VPERED_MTZN4 - 96))                   /*126*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_SECTOR_NAZAD_MTZN4 - 96))                    /*127*/\
)

#define MASKA_MTZ_SIGNALS_4        (unsigned int)(                                     \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ4 - 128))                              /*128*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_VPERED - 128))                      /*129*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_NAZAD - 128))                       /*130*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_U_MTZPN4 - 128))                          /*131*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN4 - 128))                            /*132*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ4 - 128))                                 /*133*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_BLOCK_U_MTZN - 128))                      /*134*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_NCN_MTZ - 128))                              /*135*/\
)

#define MASKA_MTZ_SIGNALS_5                  0
#define MASKA_MTZ_SIGNALS_6                  0
#define MASKA_MTZ_SIGNALS_7                  0
/*****************************************/
     
/*****************************************/
//Макски всіх сигналів МСЗ 0,4кВ
/*****************************************/
#define MASKA_MTZ04_SIGNALS_0                0
#define MASKA_MTZ04_SIGNALS_1                0
#define MASKA_MTZ04_SIGNALS_2                0
#define MASKA_MTZ04_SIGNALS_3                0

#define MASKA_MTZ04_SIGNALS_4      (unsigned int)(                                     \
     (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ04_1 - 128))                        /*136*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_MTZ04_2 - 128))                        /*137*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_USK_MTZ04_2 - 128))                    /*138*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ04_1 - 128))                           /*139*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ04_1 - 128))                              /*140*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ04_2 - 128))                           /*141*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ04_2 - 128))                              /*142*/\
)

#define MASKA_MTZ04_SIGNALS_5                0
#define MASKA_MTZ04_SIGNALS_6                0
#define MASKA_MTZ04_SIGNALS_7                0
/*****************************************/
     
/*****************************************/
//Макски всіх сигналів ЗДЗ
/*****************************************/
#define MASKA_ZDZ_SIGNALS_0                  0
#define MASKA_ZDZ_SIGNALS_1                  0
#define MASKA_ZDZ_SIGNALS_2                  0
#define MASKA_ZDZ_SIGNALS_3                  0

#define MASKA_ZDZ_SIGNALS_4        (unsigned int)(                                     \
     (1 << (RANG_OUTPUT_LED_DF_REG_PUSK_ZDZ_VID_DV - 128))                       /*143*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_ZDZ - 128))                                   /*144*/\
)

#define MASKA_ZDZ_SIGNALS_5                  0
#define MASKA_ZDZ_SIGNALS_6                  0
#define MASKA_ZDZ_SIGNALS_7                  0
/*****************************************/
     
/*****************************************/
//Макски всіх сигналів НЗЗ
/*****************************************/
#define MASKA_NZZ_SIGNALS_0                  0
#define MASKA_NZZ_SIGNALS_1                  0
#define MASKA_NZZ_SIGNALS_2                  0
#define MASKA_NZZ_SIGNALS_3                  0

#define MASKA_NZZ_SIGNALS_4        (unsigned int)(                                     \
     (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_NZZ - 128))                            /*145*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_NZZ - 128))                               /*146*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_NZZ - 128))                                  /*147*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0 - 128))                               /*148*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_3I0 - 128))                                  /*149*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0 - 128))                               /*150*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_3U0 - 128))                                  /*151*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_SECTOR_NZZ - 128))                           /*152*/\
)

#define MASKA_NZZ_SIGNALS_5                  0
#define MASKA_NZZ_SIGNALS_6                  0
#define MASKA_NZZ_SIGNALS_7                  0
/*****************************************/
     
/*****************************************/
//Макски всіх сигналів СЗНП
/*****************************************/
#define MASKA_TZNP_SIGNALS_0                 0
#define MASKA_TZNP_SIGNALS_1                 0
#define MASKA_TZNP_SIGNALS_2                 0
#define MASKA_TZNP_SIGNALS_3                 0
     
#define MASKA_TZNP_SIGNALS_4       (unsigned int)(                                     \
     (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_TZNP1 - 128))                          /*153*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_SECTOR_TZNP1_VPERED - 128))                  /*154*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_SECTOR_TZNP1_NAZAD - 128))                   /*155*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP1_VPERED - 128))                  /*156*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP1_NAZAD - 128))                   /*157*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP1_VPERED - 128))                  /*158*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP1_NAZAD - 128))                   /*159*/\
)

#define MASKA_TZNP_SIGNALS_5       (unsigned int)(                                     \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP1_VPERED - 160))                       /*160*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP1_NAZAD - 160))                        /*161*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP1 - 160))                                 /*162*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_TZNP2 - 160))                           /*163*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_SECTOR_TZNP2_VPERED - 160))                   /*164*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_SECTOR_TZNP2_NAZAD - 160))                    /*165*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP2_VPERED - 160))                   /*166*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP2_NAZAD - 160))                    /*167*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP2_VPERED - 160))                  /*168*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP2_NAZAD - 160))                   /*169*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP2_VPERED - 160))                      /*170*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP2_NAZAD - 160))                       /*171*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP2 - 160))                                /*172*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_TZNP3 - 160))                          /*173*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_SECTOR_TZNP3_VPERED - 160))                  /*174*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_SECTOR_TZNP3_NAZAD - 160))                   /*175*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP3_VPERED - 160))                  /*176*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP3_NAZAD - 160))                   /*177*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP3_VPERED - 160))                  /*178*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP3_NAZAD - 160))                   /*179*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP3_VPERED - 160))                      /*180*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP3_NAZAD - 160))                       /*181*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP3 - 160))                                /*182*/\
)

#define MASKA_TZNP_SIGNALS_6                 0
#define MASKA_TZNP_SIGNALS_7                 0
/*****************************************/
     
/*****************************************/
//Макски всіх сигналів АПВ
/*****************************************/
#define MASKA_APV_SIGNALS_0                  0
#define MASKA_APV_SIGNALS_1                  0
#define MASKA_APV_SIGNALS_2                  0
#define MASKA_APV_SIGNALS_3                  0
#define MASKA_APV_SIGNALS_4                  0
     
#define MASKA_APV_SIGNALS_5        (unsigned int)(                                     \
     (1 << (RANG_OUTPUT_LED_DF_REG_STAT_BLK_APV - 160))                         /*183*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_APV1 - 160))                                 /*184*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_APV2 - 160))                                 /*185*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_APV3 - 160))                                 /*186*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_APV4 - 160))                                 /*187*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_APV_WORK - 160))                             /*188*/\
)

#define MASKA_APV_SIGNALS_6                  0
#define MASKA_APV_SIGNALS_7                  0
/*****************************************/

/*****************************************/
//Макски всіх сигналів АЧР/ЧАПВ
/*****************************************/
#define MASKA_ACHR_CHAPV_SIGNALS_0           0
#define MASKA_ACHR_CHAPV_SIGNALS_1           0
#define MASKA_ACHR_CHAPV_SIGNALS_2           0
#define MASKA_ACHR_CHAPV_SIGNALS_3           0
#define MASKA_ACHR_CHAPV_SIGNALS_4           0

#define MASKA_ACHR_CHAPV_SIGNALS_5 (unsigned int)(                                     \
     (1 << (RANG_OUTPUT_LED_DF_REG_ACHR_CHAPV_VID_DV - 160))                    /*189*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_ACHR1 - 160))                          /*190*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_ACHR2 - 160))                          /*191*/\
)

#define MASKA_ACHR_CHAPV_SIGNALS_6 (unsigned int)(                                     \
     (1 << (RANG_OUTPUT_LED_DF_REG_RAZR_CHAPV - 192))                           /*192*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_CHAPV1_VID_U - 192))                   /*193*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_CHAPV2_VID_U - 192))                   /*194*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_CHAPV_VID_U - 192))                    /*195*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_ACHR1 - 192))                             /*196*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_CHAPV1 - 192))                            /*197*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_ACHR_CHAPV1 - 192))                          /*198*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_ACHR2 - 192))                             /*199*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_CHAPV2 - 192))                            /*200*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_ACHR_CHAPV2 - 192))                          /*201*/\
)

#define MASKA_ACHR_CHAPV_SIGNALS_7           0
/*****************************************/
     
/*****************************************/
//Макски всіх сигналів ПРВВ
/*****************************************/
#define MASKA_UROV_SIGNALS_0                 0
#define MASKA_UROV_SIGNALS_1                 0
#define MASKA_UROV_SIGNALS_2                 0
#define MASKA_UROV_SIGNALS_3                 0
#define MASKA_UROV_SIGNALS_4                 0

#define MASKA_UROV_SIGNALS_5       (unsigned int)(                                     \
     (1 << (RANG_OUTPUT_LED_DF_REG_PUSK_UROV_VID_DV - 192))                     /*202*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UROV - 192))                              /*203*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UROV1 - 192))                                /*204*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UROV2 - 192))                                /*205*/\
)

#define MASKA_UROV_SIGNALS_6                 0
#define MASKA_UROV_SIGNALS_7                 0
/*****************************************/

/*****************************************/
//Макски всіх сигналів ЗЗП
/*****************************************/
#define MASKA_ZOP_SIGNALS_0                  0
#define MASKA_ZOP_SIGNALS_1                  0
#define MASKA_ZOP_SIGNALS_2                  0
#define MASKA_ZOP_SIGNALS_3                  0
#define MASKA_ZOP_SIGNALS_4                  0
#define MASKA_ZOP_SIGNALS_5                  0

#define MASKA_ZOP_SIGNALS_6        (unsigned int)(                                     \
     (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_ZOP - 192))                            /*206*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_ZOP - 192))                               /*207*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_ZOP - 192))                                  /*208*/\
)

#define MASKA_ZOP_SIGNALS_7                  0
/*****************************************/

/*****************************************/
//Макски всіх сигналів ЗНмін
/*****************************************/
#define MASKA_UMIN_SIGNALS_0                 0
#define MASKA_UMIN_SIGNALS_1                 0
#define MASKA_UMIN_SIGNALS_2                 0
#define MASKA_UMIN_SIGNALS_3                 0
#define MASKA_UMIN_SIGNALS_4                 0
#define MASKA_UMIN_SIGNALS_5                 0
     
#define MASKA_UMIN_SIGNALS_6       (unsigned int)(                                     \
     (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_UMIN1 - 192))                          /*209*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_START_UMIN1 - 192))                          /*210*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_UMIN2 - 192))                          /*211*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_START_UMIN2 - 192))                          /*212*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMIN1 - 192))                             /*213*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UBLK_UMIN1 - 192))                        /*214*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_IBLK_UMIN1 - 192))                        /*215*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMIN1 - 192))                                /*216*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMIN2 - 192))                             /*217*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UBLK_UMIN2 - 192))                        /*218*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_IBLK_UMIN2 - 192))                        /*219*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMIN2 - 192))                                /*220*/\
)

#define MASKA_UMIN_SIGNALS_7                 0
/*****************************************/

/*****************************************/
//Макски всіх сигналів ЗНмакс
/*****************************************/
#define MASKA_UMAX_SIGNALS_0                 0
#define MASKA_UMAX_SIGNALS_1                 0
#define MASKA_UMAX_SIGNALS_2                 0
#define MASKA_UMAX_SIGNALS_3                 0
#define MASKA_UMAX_SIGNALS_4                 0
#define MASKA_UMAX_SIGNALS_5                 0
     
#define MASKA_UMAX_SIGNALS_6       (unsigned int)(                                     \
     (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_UMAX1 - 192))                          /*221*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMAX1 - 192))                             /*222*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMAX1 - 192))                                /*223*/\
)

#define MASKA_UMAX_SIGNALS_7       (unsigned int)(                                     \
     (1 << (RANG_OUTPUT_LED_DF_REG_BLOCK_UMAX2 - 224))                          /*224*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMAX2 - 224))                             /*225*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMAX2 - 224))                                /*226*/\
)
/*****************************************/

/*****************************************/
//Макска сигналів, які мають записуватися у енергонезалежну пам'ять
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
//Макска для блокування зміни груп  уставок
/*****************************************/
#define MASKA_SIGNALES_FOR_LOCK_GROUP_PICKUP_0  0
#define MASKA_SIGNALES_FOR_LOCK_GROUP_PICKUP_1  0

#define MASKA_SIGNALES_FOR_LOCK_GROUP_PICKUP_2         (unsigned int)(         \
     (1 << (RANG_OUTPUT_LED_DF_REG_WORK_BO - 64))                       /* 87*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_WORK_BV - 64))                       /* 88*/\
)

#define MASKA_SIGNALES_FOR_LOCK_GROUP_PICKUP_3         (unsigned int)(         \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ1 - 96))                       /*104*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_VPERED - 96))               /*105*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_NAZAD - 96))                /*106*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN1 - 96))                     /*108*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ1 - 96))                          /*109*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ2 - 96))                       /*112*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_VPERED - 96))               /*113*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_NAZAD - 96))                /*114*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN2 - 96))                     /*116*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ2 - 96))                          /*117*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ3 - 96))                       /*120*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_VPERED - 96))               /*121*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_NAZAD - 96))                /*122*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN3 - 96))                     /*124*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ3 - 96))                          /*125*/\
)

#define MASKA_SIGNALES_FOR_LOCK_GROUP_PICKUP_4         (unsigned int)(         \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ4 - 128))                       /*128*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_VPERED - 128))               /*129*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_NAZAD - 128))                /*130*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN4 - 128))                     /*132*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ4 - 128))                          /*133*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ04_1 - 128))                    /*139*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ04_1 - 128))                       /*140*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ04_2 - 128))                    /*141*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ04_2 - 128))                       /*142*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_NZZ - 128))                        /*146*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_NZZ - 128))                           /*147*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0 - 128))                        /*148*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_3I0 - 128))                           /*149*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0 - 128))                        /*150*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_3U0 - 128))                           /*151*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP1_VPERED - 128))           /*156*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP1_NAZAD - 128))            /*157*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP1_VPERED - 128))           /*158*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP1_NAZAD - 128))            /*159*/\
)

#define MASKA_SIGNALES_FOR_LOCK_GROUP_PICKUP_5         (unsigned int)(         \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP1_VPERED - 160))              /*160*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP1_NAZAD - 160))               /*161*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP1 - 160))                        /*162*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP2_VPERED - 160))          /*166*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP2_NAZAD - 160))           /*167*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP2_VPERED - 160))          /*168*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP2_NAZAD - 160))           /*169*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP2_VPERED - 160))              /*170*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP2_NAZAD - 160))               /*171*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP2 - 160))                        /*172*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP3_VPERED - 160))          /*176*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP3_NAZAD - 160))           /*177*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP3_VPERED - 160))          /*178*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP3_NAZAD - 160))           /*179*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP3_VPERED - 160))              /*180*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP3_NAZAD - 160))               /*181*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP3 - 160))                        /*182*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_APV_WORK - 160))                     /*183*/\
)

#define MASKA_SIGNALES_FOR_LOCK_GROUP_PICKUP_6         (unsigned int)(         \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_ACHR1 - 192))                     /*196*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_ACHR_CHAPV1 - 192))                  /*198*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_ACHR2 - 192))                     /*199*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_ACHR_CHAPV2 - 192))                  /*200*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UROV - 192))                      /*203*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UROV1 - 192))                        /*204*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UROV2 - 192))                        /*205*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_ZOP - 192))                       /*207*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_ZOP - 192))                          /*208*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMIN1 - 192))                     /*213*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMIN1 - 192))                        /*216*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMIN2 - 192))                     /*217*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMIN2 - 192))                        /*220*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMAX1 - 192))                     /*222*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMAX1 - 192))                        /*223*/\
)


#define MASKA_SIGNALES_FOR_LOCK_GROUP_PICKUP_7         (unsigned int)(         \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMAX2 - 224))                     /*224*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMAX2 - 224))                        /*226*/\
)
/*****************************************/

/*****************************************/
//Макска інформативних сигналів
/*****************************************/
#define MASKA_INFO_SIGNALES_0                  0
#define MASKA_INFO_SIGNALES_1                  0

#define MASKA_INFO_SIGNALES_2                  (unsigned int)(         \
     (1 << (RANG_OUTPUT_LED_DF_REG_STATE_VV - 64))             /*72*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_DEFECT - 64))               /*82*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_AVAR_DEFECT - 64))          /*83*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_WORK_A_REJESTRATOR - 64))   /*84*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_WORK_D_REJESTRATOR - 64))   /*85*/  \
)     
#define MASKA_INFO_SIGNALES_3                  0
#define MASKA_INFO_SIGNALES_4                  0
#define MASKA_INFO_SIGNALES_5                  0
#define MASKA_INFO_SIGNALES_6                  0
#define MASKA_INFO_SIGNALES_7                  0
/*****************************************/

/*****************************************/
/*
Макска для дискретного реєстратора, яка визначає, при активності яких функцій продовжувати утримувати дискретний реєстратор у активному стані
(якщо) він вже є активним до цього часу
*/
/*****************************************/
#define MASKA_FOR_CONTINUE_GET_DR_ACTINE_WORD_0        0
#define MASKA_FOR_CONTINUE_GET_DR_ACTINE_WORD_1        0

#define MASKA_FOR_CONTINUE_GET_DR_ACTINE_WORD_2 (unsigned int)(          \
     (1 << (RANG_OUTPUT_LED_DF_REG_OTKL_VID_ZOVN_ZAHYSTIV - 64))/* 73*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_VKL_VV - 64))                /* 74*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_OTKL_VV - 64))               /* 76*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_VIDKL_VID_ZAKHYSTIV - 64))   /* 86*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_WORK_BO - 64))               /* 87*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_WORK_BV - 64))               /* 88*/  \
)  

#define MASKA_FOR_CONTINUE_GET_DR_ACTINE_WORD_3 (unsigned int)(          \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ1 - 96))               /*104*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_VPERED - 96))       /*105*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_NAZAD - 96))        /*106*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN1 - 96))             /*108*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ1 - 96))                  /*109*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ2 - 96))               /*112*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_VPERED - 96))       /*113*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_NAZAD - 96))        /*114*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN2 - 96))             /*116*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ2 - 96))                  /*117*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ3 - 96))               /*120*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_VPERED - 96))       /*121*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_NAZAD - 96))        /*122*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN3 - 96))             /*124*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ3 - 96))                  /*125*/  \
)            

#define MASKA_FOR_CONTINUE_GET_DR_ACTINE_WORD_4 (unsigned int)(         \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ4 - 128))               /*128*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_VPERED - 128))       /*129*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_NAZAD - 128))        /*130*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN4 - 128))             /*132*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ4 - 128))                  /*133*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ04_1 - 128))            /*139*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ04_1 - 128))               /*140*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ04_2 - 128))            /*141*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ04_2 - 128))               /*142*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_NZZ - 128))                /*146*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_NZZ - 128))                   /*147*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0 - 128))                /*148*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_3I0 - 128))                   /*149*/  \
)  

#define MASKA_FOR_CONTINUE_GET_DR_ACTINE_WORD_5 (unsigned int)(          \
     (1 << (RANG_OUTPUT_LED_DF_REG_TZNP1 - 160))                /*162*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP2 - 160))                /*172*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP3 - 160))                /*182*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_APV1 - 160))                 /*184*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_APV2 - 160))                 /*185*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_APV3 - 160))                 /*186*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_APV4 - 160))                 /*187*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_APV_WORK - 160))             /*188*/  \
)  

#define MASKA_FOR_CONTINUE_GET_DR_ACTINE_WORD_6 (unsigned int)(          \
     (1 << (RANG_OUTPUT_LED_DF_REG_PUSK_UROV_VID_DV - 192))     /*202*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UROV - 192))              /*203*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_UROV1 - 192))                /*204*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_UROV2 - 192))                /*205*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_ZOP - 192))               /*207*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_ZOP - 192))                  /*208*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMAX1 - 192))             /*222*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMAX1 - 192))                /*223*/  \
)

#define MASKA_FOR_CONTINUE_GET_DR_ACTINE_WORD_7 (unsigned int)(          \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMAX2 - 224))             /*225*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMAX2 - 224))                /*226*/  \
)
/*****************************************/

/*****************************************/
//Макска моніторингу максимального фазного струму для дискретного реєстратора
/*****************************************/
#define MASKA_MONITOTYNG_PHASE_SIGNALES_0        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_1        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_2        0

#define MASKA_MONITOTYNG_PHASE_SIGNALES_3 (unsigned int)(                \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ1 - 96))               /*104*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_VPERED - 96))       /*105*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_NAZAD - 96))        /*106*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN1 - 96))             /*108*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ1 - 96))                  /*109*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ2 - 96))               /*112*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_VPERED - 96))       /*113*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_NAZAD - 96))        /*114*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN2 - 96))             /*116*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ2 - 96))                  /*117*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ3 - 96))               /*120*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_VPERED - 96))       /*121*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_NAZAD - 96))        /*122*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN3 - 96))             /*124*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ3 - 96))                  /*126*/  \
)

#define MASKA_MONITOTYNG_PHASE_SIGNALES_4 (unsigned int)(                \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ4 - 128))               /*128*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_VPERED - 128))       /*129*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_NAZAD - 128))        /*130*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN4 - 128))             /*132*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ4 - 128))                  /*133*/ \
)

#define MASKA_MONITOTYNG_PHASE_SIGNALES_5        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_6        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_7        0
/*****************************************/

/*****************************************/
//Макска моніторингу максимального фазного струму сторони 0,4кВ для дискретного реєстратора
/*****************************************/
#define MASKA_MONITOTYNG_PHASE04_SIGNALES_0        0
#define MASKA_MONITOTYNG_PHASE04_SIGNALES_1        0
#define MASKA_MONITOTYNG_PHASE04_SIGNALES_2        0
#define MASKA_MONITOTYNG_PHASE04_SIGNALES_3        0

#define MASKA_MONITOTYNG_PHASE04_SIGNALES_4 (unsigned int)(        \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ04_1 - 128))            /*139*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ04_1 - 128))               /*140*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ04_2 - 128))            /*141*/\
   | (1 << (RANG_OUTPUT_LED_DF_REG_MTZ04_2 - 128))               /*142*/\
)

#define MASKA_MONITOTYNG_PHASE04_SIGNALES_5        0
#define MASKA_MONITOTYNG_PHASE04_SIGNALES_6        0
#define MASKA_MONITOTYNG_PHASE04_SIGNALES_7        0
/*****************************************/

/*****************************************/
//Макска моніторингу максимального струму 3I0 для дискретного реєстратора
/*****************************************/
#define MASKA_MONITOTYNG_3I0_SIGNALES_0        0
#define MASKA_MONITOTYNG_3I0_SIGNALES_1        0
#define MASKA_MONITOTYNG_3I0_SIGNALES_2        0
#define MASKA_MONITOTYNG_3I0_SIGNALES_3        0

#define MASKA_MONITOTYNG_3I0_SIGNALES_4        (unsigned int)(           \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_NZZ - 128))               /*146*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_NZZ - 128))                  /*147*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0 - 128))               /*148*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_3I0 - 128))                  /*149*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP1_VPERED - 128))  /*156*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP1_NAZAD - 128))   /*157*/  \
)            

#define MASKA_MONITOTYNG_3I0_SIGNALES_5        (unsigned int)(          \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP1_VPERED - 160))     /*160*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP1_NAZAD - 160))      /*161*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP1 - 160))               /*162*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP2_VPERED - 160)) /*166*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP2_NAZAD - 160))  /*167*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP2_VPERED - 160))     /*170*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP2_NAZAD - 160))      /*171*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP2 - 160))               /*172*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP3_VPERED - 160)) /*176*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3I0_TZNP3_NAZAD - 160))  /*177*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP3_VPERED - 160))     /*180*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP3_NAZAD - 160))      /*181*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP3 - 160))               /*182*/  \
)            

#define MASKA_MONITOTYNG_3I0_SIGNALES_6        0
#define MASKA_MONITOTYNG_3I0_SIGNALES_7        0
/*****************************************/

/*****************************************/
//Макска моніторингу максимальної напргуи 3U0 для дискретного реєстратора
/*****************************************/
#define MASKA_MONITOTYNG_3U0_SIGNALES_0        0
#define MASKA_MONITOTYNG_3U0_SIGNALES_1        0
#define MASKA_MONITOTYNG_3U0_SIGNALES_2        0
#define MASKA_MONITOTYNG_3U0_SIGNALES_3        0

#define MASKA_MONITOTYNG_3U0_SIGNALES_4        (unsigned int)(           \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_NZZ - 128))                /*146*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_NZZ - 128))                   /*147*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0 - 128))                /*150*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_3U0 - 128))                   /*151*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP1_VPERED - 128))   /*158*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP1_NAZAD - 128))    /*159*/  \
)            

#define MASKA_MONITOTYNG_3U0_SIGNALES_5        (unsigned int)(           \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP1_VPERED - 160))      /*160*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP1_NAZAD - 160))       /*161*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP1 - 160))                /*162*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP2_VPERED - 160))  /*168*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP2_NAZAD - 160))   /*169*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP2_VPERED - 160))      /*170*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP2_NAZAD - 160))       /*171*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP2 - 160))                /*172*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP3_VPERED - 160))  /*178*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_3U0_TZNP3_NAZAD - 160))   /*179*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP3_VPERED - 160))      /*180*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_TZNP3_NAZAD - 160))       /*181*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_TZNP3 - 160))                /*182*/  \
)            

#define MASKA_MONITOTYNG_3U0_SIGNALES_6        0
#define MASKA_MONITOTYNG_3U0_SIGNALES_7        0
/*****************************************/

/*****************************************/
//Макска моніторингу Umin для дискретного реєстратора
/*****************************************/
#define MASKA_MONITOTYNG_UMIN_SIGNALES_0        0
#define MASKA_MONITOTYNG_UMIN_SIGNALES_1        0
#define MASKA_MONITOTYNG_UMIN_SIGNALES_2        0
#define MASKA_MONITOTYNG_UMIN_SIGNALES_3        0
#define MASKA_MONITOTYNG_UMIN_SIGNALES_4        0
#define MASKA_MONITOTYNG_UMIN_SIGNALES_5        0

#define MASKA_MONITOTYNG_UMIN_SIGNALES_6 (unsigned int)(   \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMIN1 - 192))/*213*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMIN1 - 192))   /*216*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMIN2 - 192))/*217*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMIN2 - 192))   /*221*/ \
)

#define MASKA_MONITOTYNG_UMIN_SIGNALES_7        0
/*****************************************/

/*****************************************/
//Макска моніторингу Umax для дискретного реєстратора
/*****************************************/
#define MASKA_MONITOTYNG_UMAX_SIGNALES_0        0
#define MASKA_MONITOTYNG_UMAX_SIGNALES_1        0
#define MASKA_MONITOTYNG_UMAX_SIGNALES_2        0
#define MASKA_MONITOTYNG_UMAX_SIGNALES_3        0
#define MASKA_MONITOTYNG_UMAX_SIGNALES_4        0
#define MASKA_MONITOTYNG_UMAX_SIGNALES_5        0

#define MASKA_MONITOTYNG_UMAX_SIGNALES_6 (unsigned int)(   \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMAX1 - 192))/*222*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMAX1 - 192))   /*223*/ \
)

#define MASKA_MONITOTYNG_UMAX_SIGNALES_7 (unsigned int)(   \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_UMAX2 - 224))/*225*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_UMAX2 - 224))   /*226*/ \
)
/*****************************************/

/*****************************************/
//Макска моніторингу максимального струму зворотньої послідовності для дискретного реєстратора
/*****************************************/
#define MASKA_MONITOTYNG_ZOP_SIGNALES_0                  0
#define MASKA_MONITOTYNG_ZOP_SIGNALES_1                  0
#define MASKA_MONITOTYNG_ZOP_SIGNALES_2                  0
#define MASKA_MONITOTYNG_ZOP_SIGNALES_3                  0
#define MASKA_MONITOTYNG_ZOP_SIGNALES_4                  0
#define MASKA_MONITOTYNG_ZOP_SIGNALES_5                  0

#define MASKA_MONITOTYNG_ZOP_SIGNALES_6 (unsigned int)(   \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_ZOP - 192))/*207*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_ZOP - 192))   /*208*/  \
)

#define MASKA_MONITOTYNG_ZOP_SIGNALES_7                  0
/*****************************************/

/*****************************************/
//Макска моніторингу частоти при АЧР для дискретного реєстратора
/*****************************************/
#define MASKA_MONITOTYNG_F_MIN_ACHR_SIGNALES_0   0
#define MASKA_MONITOTYNG_F_MIN_ACHR_SIGNALES_1   0
#define MASKA_MONITOTYNG_F_MIN_ACHR_SIGNALES_2   0
#define MASKA_MONITOTYNG_F_MIN_ACHR_SIGNALES_3   0
#define MASKA_MONITOTYNG_F_MIN_ACHR_SIGNALES_4   0
#define MASKA_MONITOTYNG_F_MIN_ACHR_SIGNALES_5   0

#define MASKA_MONITOTYNG_F_MIN_ACHR_SIGNALES_6   (unsigned int)(  \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_ACHR1 - 192))    /*196*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_ACHR_CHAPV1 - 192)) /*198*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_ACHR2 - 192))    /*199*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_ACHR_CHAPV2 - 192)) /*201*/  \
)     

#define MASKA_MONITOTYNG_F_MIN_ACHR_SIGNALES_7   0
/*****************************************/

/*****************************************/
//Макска моніторингу максимального фазного струму для фіксації КЗ
/*****************************************/
#define MASKA_MONITOTYNG_PHASE_SIGNALES_KZ_0        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_KZ_1        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_KZ_2        0

#define MASKA_MONITOTYNG_PHASE_SIGNALES_KZ_3 (unsigned int)(             \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ1 - 96))               /*104*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_VPERED - 96))       /*105*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN1_NAZAD - 96))        /*106*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN1 - 96))             /*108*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ2 - 96))               /*112*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_VPERED - 96))       /*113*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN2_NAZAD - 96))        /*114*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN2 - 96))             /*116*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ3 - 96))               /*120*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_VPERED - 96))       /*121*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN3_NAZAD - 96))        /*122*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN3 - 96))             /*124*/  \
)

#define MASKA_MONITOTYNG_PHASE_SIGNALES_KZ_4 (unsigned int)(             \
     (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZ4 - 128))               /*128*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_VPERED - 128))       /*129*/  \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZN4_NAZAD - 128))        /*130*/ \
   | (1 << (RANG_OUTPUT_LED_DF_REG_PO_MTZPN4 - 128))             /*132*/ \
)

#define MASKA_MONITOTYNG_PHASE_SIGNALES_KZ_5        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_KZ_6        0
#define MASKA_MONITOTYNG_PHASE_SIGNALES_KZ_7        0
/*****************************************/


/*****************************************/
//Відключення від захистів
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
//Максимальна кількість сигналів (функцій), які можуть бути зранжовані на входи/виходи/світлоіндикатори/д.реєстратор/оф
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
#define MAX_FUNCTIONS_IN_D_AND                  NUMBER_IN_AND
#define MAX_FUNCTIONS_IN_D_OR                   NUMBER_IN_OR
#define MAX_FUNCTIONS_IN_D_XOR                  2
#define MAX_FUNCTIONS_IN_D_NOT                  1
#define VAGA_MAX_FUNCTIONS_IN_DB                3
#define MAX_FUNCTIONS_IN_DB                     (1 << VAGA_MAX_FUNCTIONS_IN_DB)
#define VAGA_MAX_FUNCTIONS_IN_AREG              5
#define MAX_FUNCTIONS_IN_AREG                   (1 << VAGA_MAX_FUNCTIONS_IN_AREG)
#define VAGA_MAX_FUNCTIONS_IN_DREG              5
#define MAX_FUNCTIONS_IN_DREG                   (1 << VAGA_MAX_FUNCTIONS_IN_DREG)
/*****************************************/


/*****************************************/
//Константи для комунікації
/*****************************************/
#define MAX_CHAR_IN_NAME_OF_CELL                              32
/*****************************************/

/*****************************************/
//Константи для фіксації зміни настройок
/*****************************************/
#define CHANGED_ETAP_NONE                                     0
#define CHANGED_ETAP_EXECUTION                                1
#define CHANGED_ETAP_ENDED                                    2
#define CHANGED_ETAP_ENDED_EXTRA_ETAP                         3
/*****************************************/

/*****************************************/
//Константи для ранжування функціональних кнопок
/*****************************************/
enum __odynyci_vymirjuvannja {
INDEX_A = 0,
INDEX_V,
INDEX_SECOND,

NUMBER_ODYNYCI_VYMIRJUVANNJA
};
/*****************************************/

/*****************************************/
//Тип входів логічних елементів
/*****************************************/
#define TYPE_INPUT_0_1        0
#define TYPE_INPUT_1_0        1
/*****************************************/

/*****************************************/
//Індетифікатор типу набору юстуючих коефіцієнтів
/*****************************************/
//#define ADJUSTMENT_3I0_IA_IB_IC                             1
//#define ADJUSTMENT_3I0_IA_IC_3U0                            2
//#define ADJUSTMENT_3I0_IA_IB_IC_UA_UB_UC_UABTN2             3
#define ADJUSTMENT_3I0_IA_IB_IC_UA_UB_UC_3U0                  4
#define ADJUSTMENT_ID                                         ADJUSTMENT_3I0_IA_IB_IC_UA_UB_UC_3U0
/*****************************************/

/*****************************************/
//Версія програмного забезпечення
/*****************************************/
#define VERSIA_PZ                                             9
#define MODYFIKACIA_VERSII_PZ                                 1
#define ZBIRKA_VERSII_PZ                                      0
/*****************************************/

/*****************************************/
//Час компіляції
/*****************************************/

#define YEAR_VER                                              ((__DATE__[9] != ' ') ? (((__DATE__[9] - 0x30) << 4) | (__DATE__[10] - 0x30)) : (__DATE__[10] - 0x30))
#define MONTH_VER                                             str_to_int_DATE_Mmm()
#define DAY_VER                                               ((__DATE__[4] != ' ') ? (((__DATE__[4] - 0x30) << 4) | (__DATE__[5] - 0x30)) : (__DATE__[5] - 0x30))
#define HOUR_VER                                              (((__TIME__[0] - 0x30) << 4) | (__TIME__[1] - 0x30))
#define MINUTE_VER                                            (((__TIME__[3] - 0x30) << 4) | (__TIME__[4] - 0x30))
#define SECOND_VER                                            (((__TIME__[6] - 0x30) << 4) | (__TIME__[7] - 0x30))
/*****************************************/

/*****************************************/
//Версія універсальної карти памяті
/*****************************************/
#define VERSIA_GMM                                             6
#define MODYFIKACIA_VERSII_GMM                                 4
/*****************************************/
#endif
