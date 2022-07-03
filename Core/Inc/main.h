/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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
#define LEDPIN_Pin GPIO_PIN_13
#define LEDPIN_GPIO_Port GPIOC
#define HSE_CLOCK_IN___RCC_OSC_IN_Pin GPIO_PIN_0
#define HSE_CLOCK_IN___RCC_OSC_IN_GPIO_Port GPIOH
#define HSE_CLOCK_OUT___RCC_OSC_OUT_Pin GPIO_PIN_1
#define HSE_CLOCK_OUT___RCC_OSC_OUT_GPIO_Port GPIOH
#define Leftmost_Button___1_Pin GPIO_PIN_5
#define Leftmost_Button___1_GPIO_Port GPIOA
#define Middle_Button___2_Pin GPIO_PIN_6
#define Middle_Button___2_GPIO_Port GPIOA
#define Rightmost_Button___3_Pin GPIO_PIN_7
#define Rightmost_Button___3_GPIO_Port GPIOA
#define DATA____USB_OITG_FS_D__Pin GPIO_PIN_11
#define DATA____USB_OITG_FS_D__GPIO_Port GPIOA
#define DATA____USB_OTG_FS_D__Pin GPIO_PIN_12
#define DATA____USB_OTG_FS_D__GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
