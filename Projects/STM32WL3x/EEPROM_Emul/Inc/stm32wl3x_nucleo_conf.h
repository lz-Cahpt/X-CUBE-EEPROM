/**
  ******************************************************************************
  * @file    stm32wl3x_nucleo_conf.h
  * @author  EMEA Application Team
  * @brief   STM32WL3x_Nucleo board configuration file.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef NUCLEO_WL33CCX_CONF_H
#define NUCLEO_WL33CCX_CONF_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdio.h>
#include "stm32wl3x_ll_gpio.h"
#include "stm32wl3x_ll_usart.h"
#include "stm32wl3x_ll_rcc.h"
#include "stm32wl3x_ll_bus.h"
#include "stm32wl3x_ll_system.h"
#include "stm32wl3x_hal_def.h"

/** @addtogroup BSP
  * @{
  */

/** @addtogroup STM32WLXX_NUCLEO
  * @{
  */

/** @defgroup STM32WLXX_NUCLEO_CONFIG Config
  * @{
  */

/** @defgroup STM32WLXX_NUCLEO_CONFIG_Exported_Constants Exported Constants
  * @{
  */
/* Usage of COM feature */
#define USE_BSP_COM_FEATURE 0U
#define USE_COM_LOG         0U

/* Button interrupt priorities */
#define BSP_B1_IT_PRIORITY 3U  /* Default is lowest priority level */
#define BSP_B2_IT_PRIORITY 3U  /* Default is lowest priority level */

/* Radio maximum wakeup time (in ms) */
#define RF_WAKEUP_TIME                     100U

/* Indicates whether or not TCXO is supported by the board
 * 0: TCXO not supported
 * 1: TCXO supported
 */
#define IS_TCXO_SUPPORTED                   0U

/* Indicates whether or not DCDC is supported by the board
 * 0: DCDC not supported
 * 1: DCDC supported
 */
#define IS_DCDC_SUPPORTED                   0U

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* STM32WLXX_NUCLEO_CONF_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
