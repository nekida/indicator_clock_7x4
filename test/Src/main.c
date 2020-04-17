/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "tim.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "indicator.h"
#include "segments_indicator.h"
#include <stdbool.h>
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
#define NUM_ON(i)		(digitals_on[i]());
#define NUM_OFF(i)	(digitals_off[i]());
#define CAT_ON(i)		(digital_cat_on[i]());
#define CAT_OFF(i)		(digital_cat_off[i]());
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */
uint8_t arr_indctr[4] = {0, 0, 0, 0};
uint8_t arr_sett[4] = {0, 0, 0, 0};
bool blink_points = false;
/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
void (*digitals_on[10])() 		= {digital_0_on, digital_1_on, digital_2_on, digital_3_on, digital_4_on, digital_5_on, digital_6_on, digital_7_on, digital_8_on, digital_9_on};
void (*digitals_off[10])() 		= {digital_0_off, digital_1_off, digital_2_off, digital_3_off, digital_4_off, digital_5_off, digital_6_off, digital_7_off, digital_8_off, digital_9_off};
void (*digital_cat_on[4])() 	= {digital_seg_1_on, digital_seg_2_on, digital_seg_3_on, digital_seg_4_on};
void (*digital_cat_off[4])() 	= {digital_seg_1_off, digital_seg_2_off, digital_seg_3_off, digital_seg_4_off};
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void all_cat_off(void)
{
	uint8_t i;
	
	for(i = 0; i < 4; i++)
		CAT_OFF(i)
}

void all_segment_in_digit_off(void)
{
	uint8_t i;
	
	for(i = 0; i < 10; i++)
		NUM_OFF(i)
}

void value_indicator(uint8_t * value)
{
	for(int j = 0; j < 4; j++)
	{
		CAT_ON(j)
		NUM_ON(value[j])
		if( (j == 1 || j == 2) & blink_points)
		{
			SEG_D3_ON
			SEG_D4_ON
		}
		HAL_Delay(2);
		all_segment_in_digit_off();
		all_cat_off();
	}
}

void HAL_TIM1_Callback(void)
{
	static uint8_t minute = 0;
	
	blink_points = !blink_points;
	
	minute++;
	if(minute == 60)																	{minute = 0;						arr_sett[0]++;}
	if(arr_sett[0] == 10)															{arr_sett[0] = 0;				arr_sett[1]++;}
	if(arr_sett[1] == 6)															{arr_sett[1] = 0; 			arr_sett[2]++;}
	if(arr_sett[2] == 10)															{arr_sett[2] = 0; 			arr_sett[3]++;}
	if(arr_sett[3] == 2 && arr_sett[2] == 4)					{arr_sett[3] = 0; 			arr_sett[2] = 0;}
}

void timer_start(void)
{
	HAL_TIM_Base_Start(&htim1);
	HAL_TIM_Base_Start_IT(&htim1);
}

void timer_stop(void)
{
	HAL_TIM_Base_Stop(&htim1);
	HAL_TIM_Base_Stop_IT(&htim1);
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
	uint8_t num_cat = 0;
	uint8_t num_digit = 0;
  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM1_Init();
  /* USER CODE BEGIN 2 */
	timer_start();
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
		if(!HAL_GPIO_ReadPin(button_2_GPIO_Port, button_2_Pin))
		{
			if(!HAL_GPIO_ReadPin(button_2_GPIO_Port, button_2_Pin))
			{
				timer_stop();
				while(HAL_GPIO_ReadPin(button_2_GPIO_Port, button_2_Pin));
				num_cat++;
				if(num_cat == 4)
				{
					num_cat = 0;
					timer_start();
				}
				while(!HAL_GPIO_ReadPin(button_2_GPIO_Port, button_2_Pin));
			}
		}
		
		if(!HAL_GPIO_ReadPin(button_1_GPIO_Port, button_1_Pin))
		{
			if(!HAL_GPIO_ReadPin(button_1_GPIO_Port, button_1_Pin))
			{
				timer_stop();
				while(HAL_GPIO_ReadPin(button_1_GPIO_Port, button_1_Pin));
				num_digit++;
				if(num_digit == 10)
				{
					num_digit = 0;
				}
				arr_sett[num_cat] = num_digit;
				while(!HAL_GPIO_ReadPin(button_1_GPIO_Port, button_1_Pin));
			}
		}
		
		arr_indctr[0] = arr_sett[0];
		arr_indctr[1] = arr_sett[1];
		arr_indctr[2] = arr_sett[2];
		arr_indctr[3] = arr_sett[3];
		value_indicator(arr_indctr);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL12;
  RCC_OscInitStruct.PLL.PREDIV = RCC_PREDIV_DIV1;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
