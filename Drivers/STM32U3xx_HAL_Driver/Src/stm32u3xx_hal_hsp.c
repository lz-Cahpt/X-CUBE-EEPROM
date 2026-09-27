/**
  ******************************************************************************
  * @file    stm32u3xx_hal_hsp.c
  * @author  MCD Application Team
  * @brief   HSP HAL module driver.
  *          This file provides firmware functions to manage the following
  *          functionalities of the Hardware Signal Processing (HSP) peripheral:
  *           + Initialization and de-initialization functions
  *           + Peripheral Control functions
  *
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  @verbatim
  ==============================================================================
                      ##### HSP specific features #####
  ==============================================================================
    [..]
      <To be completed>.

      (+) <To be completed>.
      (+) <To be completed>.

    [..]
      <To be completed>:
      (+) <To be completed>
      (+) <To be completed>

  @endverbatim
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32u3xx_hal.h"

/** @addtogroup STM32U3xx_HAL_Driver
  * @{
  */

/** @defgroup HSP HSP
  * @brief HSP HAL module driver
  * @{
  */

#ifdef HAL_HSP_MODULE_ENABLED

/* Private typedef -----------------------------------------------------------*/
/* Private constants ---------------------------------------------------------*/
/** @defgroup HSP_Private_Constants HSP Private Constants
  * @{
  */
/**
  * @}
  */
/* Private macros ------------------------------------------------------------*/
/** @addtogroup HSP_Private_Macros
  * @{
  */
/**
  * @}
  */

/* Private define ------------------------------------------------------------*/
/** @defgroup HSP_Private_Constants HSP Private Constants
  * @{
  */
/**
  * @}
  */

/* Private macro -------------------------------------------------------------*/
/** @defgroup HSP_Private_Macros HSP Private Macros
  * @{
  */
/**
  * @}
  */

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/
/** @defgroup HSP_Private_Functions HSP Private Functions
  * @{
  */
static HAL_StatusTypeDef HSP_PrivateFunction(uint32_t param);
/**
  * @}
  */

/* Exported functions --------------------------------------------------------*/

/** @defgroup HSP_Exported_Functions HSP Exported Functions
  * @{
  */
/** @defgroup HSP_Exported_Functions_Group1 Initialization and de-initialization functions
  *  @brief    Initialization and Configuration functions
  *
  @verbatim
 ===============================================================================
           ##### Initialization and de-initialization functions #####
 ===============================================================================
    [..]
      <To be completed>.

    [..] <To be completed>n
         (+) <To be completed>.

         (+) <To be completed>.

  @endverbatim
  * @{
  */

/**
  * @brief  <To be completed>.
  * @note   <Optional: to be completed>
  * @retval HAL status
  */

HAL_StatusTypeDef HAL_HSP_xxx(void)
{
  (void)HSP_PrivateFunction(0);
  return HAL_OK;
}
/**
  * @}
  */

/**
  * @}
  */

/* Private function prototypes -----------------------------------------------*/
/** @addtogroup HSP_Private_Functions
  * @{
  */
/**
  * @brief  <To be completed>.
  * @param  param  description
  * @retval HAL status
  */
static HAL_StatusTypeDef HSP_PrivateFunction(uint32_t param)
{
  UNUSED(param);
  return HAL_OK;
}

/**
  * @}
  */
#endif /* HAL_HSP_MODULE_ENABLED */
/**
  * @}
  */

/**
  * @}
  */
