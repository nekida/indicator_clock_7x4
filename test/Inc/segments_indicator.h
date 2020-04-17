#ifndef __SEGMENTS_INDICATOR_H
#define __SEGMENTS_INDICATOR_H

#include "main.h"
#include "gpio.h"

#define DIG_1_ON		HAL_GPIO_WritePin(indctr_1_GPIO_Port, indctr_1_Pin, GPIO_PIN_SET);
#define	DIG_2_ON		HAL_GPIO_WritePin(indctr_2_GPIO_Port, indctr_2_Pin, GPIO_PIN_SET);
#define DIG_3_ON		HAL_GPIO_WritePin(indctr_3_GPIO_Port, indctr_3_Pin, GPIO_PIN_SET);
#define	DIG_4_ON		HAL_GPIO_WritePin(indctr_4_GPIO_Port, indctr_4_Pin, GPIO_PIN_SET);
#define DIG_1_OFF		HAL_GPIO_WritePin(indctr_1_GPIO_Port, indctr_1_Pin, GPIO_PIN_RESET);
#define	DIG_2_OFF		HAL_GPIO_WritePin(indctr_2_GPIO_Port, indctr_2_Pin, GPIO_PIN_RESET);
#define DIG_3_OFF		HAL_GPIO_WritePin(indctr_3_GPIO_Port, indctr_3_Pin, GPIO_PIN_RESET);
#define	DIG_4_OFF		HAL_GPIO_WritePin(indctr_4_GPIO_Port, indctr_4_Pin, GPIO_PIN_RESET);

#define SEG_D_ON		HAL_GPIO_WritePin(indctr_5_GPIO_Port, 	indctr_5_Pin, 	GPIO_PIN_RESET);//D
#define SEG_E_ON		HAL_GPIO_WritePin(indctr_6_GPIO_Port, 	indctr_6_Pin, 	GPIO_PIN_RESET);//E
#define SEG_F_ON		HAL_GPIO_WritePin(indctr_7_GPIO_Port, 	indctr_7_Pin, 	GPIO_PIN_RESET);//F
#define SEG_A_ON		HAL_GPIO_WritePin(indctr_8_GPIO_Port, 	indctr_8_Pin, 	GPIO_PIN_RESET);//A
#define SEG_B_ON		HAL_GPIO_WritePin(indctr_9_GPIO_Port, 	indctr_9_Pin, 	GPIO_PIN_RESET);//B
#define SEG_C_ON		HAL_GPIO_WritePin(indctr_10_GPIO_Port, 	indctr_10_Pin, 	GPIO_PIN_RESET);//C
#define SEG_G_ON		HAL_GPIO_WritePin(indctr_11_GPIO_Port, 	indctr_11_Pin, 	GPIO_PIN_RESET);//G
#define SEG_D3_ON		HAL_GPIO_WritePin(indctr_12_GPIO_Port, 	indctr_12_Pin, 	GPIO_PIN_RESET);//D3 + DIG2
#define SEG_D4_ON		HAL_GPIO_WritePin(indctr_13_GPIO_Port, 	indctr_13_Pin, 	GPIO_PIN_RESET);//D4 + DIG3
#define SEG_D_OFF		HAL_GPIO_WritePin(indctr_5_GPIO_Port, 	indctr_5_Pin, 	GPIO_PIN_SET);//D
#define SEG_E_OFF		HAL_GPIO_WritePin(indctr_6_GPIO_Port, 	indctr_6_Pin, 	GPIO_PIN_SET);//E
#define SEG_F_OFF		HAL_GPIO_WritePin(indctr_7_GPIO_Port, 	indctr_7_Pin, 	GPIO_PIN_SET);//F
#define SEG_A_OFF		HAL_GPIO_WritePin(indctr_8_GPIO_Port, 	indctr_8_Pin, 	GPIO_PIN_SET);//A
#define SEG_B_OFF		HAL_GPIO_WritePin(indctr_9_GPIO_Port, 	indctr_9_Pin, 	GPIO_PIN_SET);//B
#define SEG_C_OFF		HAL_GPIO_WritePin(indctr_10_GPIO_Port, 	indctr_10_Pin, 	GPIO_PIN_SET);//C
#define SEG_G_OFF		HAL_GPIO_WritePin(indctr_11_GPIO_Port, 	indctr_11_Pin, 	GPIO_PIN_SET);//G
#define SEG_D3_OFF	HAL_GPIO_WritePin(indctr_12_GPIO_Port, 	indctr_12_Pin, 	GPIO_PIN_SET);//D3 + DIG2
#define SEG_D4_OFF	HAL_GPIO_WritePin(indctr_13_GPIO_Port, 	indctr_13_Pin, 	GPIO_PIN_SET);//D4 + DIG3

#endif 
