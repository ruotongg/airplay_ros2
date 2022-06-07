/*
 * rtmodel.h
 *
 * Code generation for Simulink model "draft".
 *
 * Simulink Coder version                : 9.7 (R2022a) 13-Nov-2021
 * C++ source code generated on : Mon Jun  6 22:06:45 2022
 *
 * Note that the generated code is not dependent on this header file.
 * The file is used in cojuction with the automatic build procedure.
 * It is included by the sample main executable harness
 * MATLAB/rtw/c/src/common/rt_main.c.
 *
 */

#ifndef RTW_HEADER_rtmodel_h_
#define RTW_HEADER_rtmodel_h_
#include "draft.h"
#define MODEL_CLASSNAME                draft
#define MODEL_STEPNAME                 step

/*
 * ROOT_IO_FORMAT: 0 (Individual arguments)
 * ROOT_IO_FORMAT: 1 (Structure reference)
 * ROOT_IO_FORMAT: 2 (Part of model data structure)
 */
#define ROOT_IO_FORMAT                 2

/* Macros generated for backwards compatibility  */
#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((void*) 0)
#endif
#endif                                 /* RTW_HEADER_rtmodel_h_ */
