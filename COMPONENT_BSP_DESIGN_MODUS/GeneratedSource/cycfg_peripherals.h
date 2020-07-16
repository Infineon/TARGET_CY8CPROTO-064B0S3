/*******************************************************************************
* File Name: cycfg_peripherals.h
*
* Description:
* Peripheral Hardware Block configuration
* This file was automatically generated and should not be modified.
* cfg-backend-cli: 1.2.0.1483
* Device Support Library (libs/psoc6pdl): 1.6.0.4266
*
********************************************************************************
* Copyright 2017-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_smif.h"
#include "cycfg_qspi_memslot.h"
#if defined (CY_USING_HAL)
	#include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)

#if defined(__cplusplus)
extern "C" {
#endif

#define smif_0_ENABLED 1U
#define smif_0_HW SMIF0
#define smif_0_IRQ smif_interrupt_IRQn
#define smif_0_MEMORY_MODE_ALIGMENT_ERROR (0UL)
#define smif_0_RX_DATA_FIFO_UNDERFLOW (0UL)
#define smif_0_TX_COMMAND_FIFO_OVERFLOW (0UL)
#define smif_0_TX_DATA_FIFO_OVERFLOW (0UL)
#define smif_0_RX_FIFO_TRIGEER_LEVEL (0UL)
#define smif_0_TX_FIFO_TRIGEER_LEVEL (0UL)
#define smif_0_DATALINES0_1 (1UL)
#define smif_0_DATALINES2_3 (1UL)
#define smif_0_DATALINES4_5 (0UL)
#define smif_0_DATALINES6_7 (0UL)
#define smif_0_SS0 (1UL)
#define smif_0_SS1 (0UL)
#define smif_0_SS2 (0UL)
#define smif_0_SS3 (0UL)
#define smif_0_DESELECT_DELAY 7

extern const cy_stc_smif_config_t smif_0_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t smif_0_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PERIPHERALS_H */
