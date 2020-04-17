/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define indctr_1_Pin GPIO_PIN_3
#define indctr_1_GPIO_Port GPIOC
#define B1_Pin GPIO_PIN_0
#define B1_GPIO_Port GPIOA
#define indctr_2_Pin GPIO_PIN_1
#define indctr_2_GPIO_Port GPIOA
#define indctr_3_Pin GPIO_PIN_2
#define indctr_3_GPIO_Port GPIOA
#define indctr_4_Pin GPIO_PIN_3
#define indctr_4_GPIO_Port GPIOA
#define indctr_5_Pin GPIO_PIN_4
#define indctr_5_GPIO_Port GPIOF
#define indctr_6_Pin GPIO_PIN_5
#define indctr_6_GPIO_Port GPIOF
#define indctr_7_Pin GPIO_PIN_4
#define indctr_7_GPIO_Port GPIOA
#define indctr_8_Pin GPIO_PIN_5
#define indctr_8_GPIO_Port GPIOA
#define indctr_9_Pin GPIO_PIN_6
#define indctr_9_GPIO_Port GPIOA
#define indctr_10_Pin GPIO_PIN_7
#define indctr_10_GPIO_Port GPIOA
#define indctr_11_Pin GPIO_PIN_4
#define indctr_11_GPIO_Port GPIOC
#define indctr_12_Pin GPIO_PIN_5
#define indctr_12_GPIO_Port GPIOC
#define indctr_13_Pin GPIO_PIN_0
#define indctr_13_GPIO_Port GPIOB
#define button_2_Pin GPIO_PIN_2
#define button_2_GPIO_Port GPIOB
#define button_1_Pin GPIO_PIN_11
#define button_1_GPIO_Port GPIOB
#define LD4_Pin GPIO_PIN_8
#define LD4_GPIO_Port GPIOC
#define LD3_Pin GPIO_PIN_9
#define LD3_GPIO_Port GPIOC
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */
void HAL_TIM1_Callback(void);
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
