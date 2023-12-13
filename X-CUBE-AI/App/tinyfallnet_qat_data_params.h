/**
  ******************************************************************************
  * @file    tinyfallnet_qat_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Wed Dec 13 09:14:26 2023
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#ifndef TINYFALLNET_QAT_DATA_PARAMS_H
#define TINYFALLNET_QAT_DATA_PARAMS_H
#pragma once

#include "ai_platform.h"

/*
#define AI_TINYFALLNET_QAT_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_tinyfallnet_qat_data_weights_params[1]))
*/

#define AI_TINYFALLNET_QAT_DATA_CONFIG               (NULL)


#define AI_TINYFALLNET_QAT_DATA_ACTIVATIONS_SIZES \
  { 9520, }
#define AI_TINYFALLNET_QAT_DATA_ACTIVATIONS_SIZE     (9520)
#define AI_TINYFALLNET_QAT_DATA_ACTIVATIONS_COUNT    (1)
#define AI_TINYFALLNET_QAT_DATA_ACTIVATION_1_SIZE    (9520)



#define AI_TINYFALLNET_QAT_DATA_WEIGHTS_SIZES \
  { 33736, }
#define AI_TINYFALLNET_QAT_DATA_WEIGHTS_SIZE         (33736)
#define AI_TINYFALLNET_QAT_DATA_WEIGHTS_COUNT        (1)
#define AI_TINYFALLNET_QAT_DATA_WEIGHT_1_SIZE        (33736)



#define AI_TINYFALLNET_QAT_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_tinyfallnet_qat_activations_table[1])

extern ai_handle g_tinyfallnet_qat_activations_table[1 + 2];



#define AI_TINYFALLNET_QAT_DATA_WEIGHTS_TABLE_GET() \
  (&g_tinyfallnet_qat_weights_table[1])

extern ai_handle g_tinyfallnet_qat_weights_table[1 + 2];


#endif    /* TINYFALLNET_QAT_DATA_PARAMS_H */