// SPDX-License-Identifier: MIT
//
// Copyright 2024 Advanced Micro Devices, Inc.

#ifndef __DC_OPTC_DCN401_H__
#define __DC_OPTC_DCN401_H__

#include "dcn10/dcn10_optc.h"

#define OPTC_COMMON_MASK_SH_LIST_DCN401(mask_sh)\
	SF(OTG0_OTG_VSTARTUP_PARAM, VSTARTUP_START, mask_sh),\
	SF(OTG0_OTG_VUPDATE_PARAM, VUPDATE_OFFSET, mask_sh),\
	SF(OTG0_OTG_VUPDATE_PARAM, VUPDATE_WIDTH, mask_sh),\
	SF(OTG0_OTG_VREADY_PARAM, VREADY_OFFSET, mask_sh),\
	SF(OTG0_OTG_MASTER_UPDATE_LOCK, OTG_MASTER_UPDATE_LOCK, mask_sh),\
	SF(OTG0_OTG_MASTER_UPDATE_LOCK, UPDATE_LOCK_STATUS, mask_sh),\
	SF(OTG0_OTG_GLOBAL_CONTROL0, MASTER_UPDATE_LOCK_DB_START_X, mask_sh),\
	SF(OTG0_OTG_GLOBAL_CONTROL0, MASTER_UPDATE_LOCK_DB_END_X, mask_sh),\
	SF(OTG0_OTG_GLOBAL_CONTROL0, MASTER_UPDATE_LOCK_DB_EN, mask_sh),\
	SF(OTG0_OTG_GLOBAL_CONTROL1, MASTER_UPDATE_LOCK_DB_START_Y, mask_sh),\
	SF(OTG0_OTG_GLOBAL_CONTROL1, MASTER_UPDATE_LOCK_DB_END_Y, mask_sh),\
	SF(OTG0_OTG_GLOBAL_CONTROL2, OTG_MASTER_UPDATE_LOCK_SEL, mask_sh),\
	SF(OTG0_OTG_GLOBAL_CONTROL4, DIG_UPDATE_POSITION_X, mask_sh),\
	SF(OTG0_OTG_GLOBAL_CONTROL4, DIG_UPDATE_POSITION_Y, mask_sh),\
	SF(OTG0_OTG_DOUBLE_BUFFER_CONTROL, OTG_UPDATE_PENDING, mask_sh),\
	SF(OTG0_OTG_H_TOTAL, OTG_H_TOTAL, mask_sh),\
	SF(OTG0_OTG_H_BLANK_START_END, OTG_H_BLANK_START, mask_sh),\
	SF(OTG0_OTG_H_BLANK_START_END, OTG_H_BLANK_END, mask_sh),\
	SF(OTG0_OTG_H_SYNC_A, OTG_H_SYNC_A_START, mask_sh),\
	SF(OTG0_OTG_H_SYNC_A, OTG_H_SYNC_A_END, mask_sh),\
	SF(OTG0_OTG_H_SYNC_A_CNTL, OTG_H_SYNC_A_POL, mask_sh),\
	SF(OTG0_OTG_V_TOTAL, OTG_V_TOTAL, mask_sh),\
	SF(OTG0_OTG_V_BLANK_START_END, OTG_V_BLANK_START, mask_sh),\
	SF(OTG0_OTG_V_BLANK_START_END, OTG_V_BLANK_END, mask_sh),\
	SF(OTG0_OTG_V_SYNC_A, OTG_V_SYNC_A_START, mask_sh),\
	SF(OTG0_OTG_V_SYNC_A, OTG_V_SYNC_A_END, mask_sh),\
	SF(OTG0_OTG_V_SYNC_A_CNTL, OTG_V_SYNC_A_POL, mask_sh),\
	SF(OTG0_OTG_V_SYNC_A_CNTL, OTG_V_SYNC_MODE, mask_sh),\
	SF(OTG0_OTG_CONTROL, OTG_MASTER_EN, mask_sh),\
	SF(OTG0_OTG_CONTROL, OTG_START_POINT_CNTL, mask_sh),\
	SF(OTG0_OTG_CONTROL, OTG_DISABLE_POINT_CNTL, mask_sh),\
	SF(OTG0_OTG_CONTROL, OTG_FIELD_NUMBER_CNTL, mask_sh),\
	SF(OTG0_OTG_CONTROL, OTG_OUT_MUX, mask_sh),\
	SF(OTG0_OTG_STEREO_CONTROL, OTG_STEREO_EN, mask_sh),\
	SF(OTG0_OTG_STEREO_CONTROL, OTG_STEREO_SYNC_OUTPUT_LINE_NUM, mask_sh),\
	SF(OTG0_OTG_STEREO_CONTROL, OTG_STEREO_SYNC_OUTPUT_POLARITY, mask_sh),\
	SF(OTG0_OTG_STEREO_CONTROL, OTG_STEREO_EYE_FLAG_POLARITY, mask_sh),\
	SF(OTG0_OTG_STEREO_CONTROL, OTG_DISABLE_STEREOSYNC_OUTPUT_FOR_DP, mask_sh),\
	SF(OTG0_OTG_STEREO_STATUS, OTG_STEREO_CURRENT_EYE, mask_sh),\
	SF(OTG0_OTG_3D_STRUCTURE_CONTROL, OTG_3D_STRUCTURE_EN, mask_sh),\
	SF(OTG0_OTG_3D_STRUCTURE_CONTROL, OTG_3D_STRUCTURE_V_UPDATE_MODE, mask_sh),\
	SF(OTG0_OTG_3D_STRUCTURE_CONTROL, OTG_3D_STRUCTURE_STEREO_SEL_OVR, mask_sh),\
	SF(OTG0_OTG_V_TOTAL_MAX, OTG_V_TOTAL_MAX, mask_sh),\
	SF(OTG0_OTG_V_TOTAL_MIN, OTG_V_TOTAL_MIN, mask_sh),\
	SF(OTG0_OTG_V_TOTAL_CONTROL, OTG_V_TOTAL_MIN_SEL, mask_sh),\
	SF(OTG0_OTG_V_TOTAL_CONTROL, OTG_V_TOTAL_MAX_SEL, mask_sh),\
	SF(OTG0_OTG_V_TOTAL_CONTROL, OTG_FORCE_LOCK_ON_EVENT, mask_sh),\
	SF(OTG0_OTG_V_TOTAL_CONTROL, OTG_SET_V_TOTAL_MIN_MASK, mask_sh),\
	SF(OTG0_OTG_V_TOTAL_CONTROL, OTG_VTOTAL_MID_REPLACING_MIN_EN, mask_sh),\
	SF(OTG0_OTG_V_TOTAL_CONTROL, OTG_VTOTAL_MID_REPLACING_MAX_EN, mask_sh),\
	SF(OTG0_OTG_FORCE_COUNT_NOW_CNTL, OTG_FORCE_COUNT_NOW_CLEAR, mask_sh),\
	SF(OTG0_OTG_FORCE_COUNT_NOW_CNTL, OTG_FORCE_COUNT_NOW_MODE, mask_sh),\
	SF(OTG0_OTG_FORCE_COUNT_NOW_CNTL, OTG_FORCE_COUNT_NOW_OCCURRED, mask_sh),\
	SF(OTG0_OTG_TRIGA_CNTL, OTG_TRIGA_SOURCE_SELECT, mask_sh),\
	SF(OTG0_OTG_TRIGA_CNTL, OTG_TRIGA_SOURCE_PIPE_SELECT, mask_sh),\
	SF(OTG0_OTG_TRIGA_CNTL, OTG_TRIGA_RISING_EDGE_DETECT_CNTL, mask_sh),\
	SF(OTG0_OTG_TRIGA_CNTL, OTG_TRIGA_FALLING_EDGE_DETECT_CNTL, mask_sh),\
	SF(OTG0_OTG_TRIGA_CNTL, OTG_TRIGA_POLARITY_SELECT, mask_sh),\
	SF(OTG0_OTG_TRIGA_CNTL, OTG_TRIGA_FREQUENCY_SELECT, mask_sh),\
	SF(OTG0_OTG_TRIGA_CNTL, OTG_TRIGA_DELAY, mask_sh),\
	SF(OTG0_OTG_TRIGA_CNTL, OTG_TRIGA_CLEAR, mask_sh),\
	SF(OTG0_OTG_STATIC_SCREEN_CONTROL, OTG_STATIC_SCREEN_EVENT_MASK, mask_sh),\
	SF(OTG0_OTG_STATIC_SCREEN_CONTROL, OTG_STATIC_SCREEN_FRAME_COUNT, mask_sh),\
	SF(OTG0_OTG_STATUS_FRAME_COUNT, OTG_FRAME_COUNT, mask_sh),\
	SF(OTG0_OTG_STATUS, OTG_V_BLANK, mask_sh),\
	SF(OTG0_OTG_STATUS, OTG_V_ACTIVE_DISP, mask_sh),\
	SF(OTG0_OTG_STATUS_POSITION, OTG_HORZ_COUNT, mask_sh),\
	SF(OTG0_OTG_STATUS_POSITION, OTG_VERT_COUNT, mask_sh),\
	SF(OTG0_OTG_NOM_VERT_POSITION, OTG_VERT_COUNT_NOM, mask_sh),\
	SF(OTG0_OTG_M_CONST_DTO0, OTG_M_CONST_DTO_PHASE, mask_sh),\
	SF(OTG0_OTG_M_CONST_DTO1, OTG_M_CONST_DTO_MODULO, mask_sh),\
	SF(OTG0_OTG_CLOCK_CONTROL, OTG_BUSY, mask_sh),\
	SF(OTG0_OTG_CLOCK_CONTROL, OTG_CLOCK_EN, mask_sh),\
	SF(OTG0_OTG_CLOCK_CONTROL, OTG_CLOCK_ON, mask_sh),\
	SF(OTG0_OTG_CLOCK_CONTROL, OTG_CLOCK_GATE_DIS, mask_sh),\
	SF(OTG0_OTG_VERTICAL_INTERRUPT0_CONTROL, OTG_VERTICAL_INTERRUPT0_INT_ENABLE, mask_sh),\
	SF(OTG0_OTG_VERTICAL_INTERRUPT0_POSITION, OTG_VERTICAL_INTERRUPT0_LINE_START, mask_sh),\
	SF(OTG0_OTG_VERTICAL_INTERRUPT0_POSITION, OTG_VERTICAL_INTERRUPT0_LINE_END, mask_sh),\
	SF(OTG0_OTG_VERTICAL_INTERRUPT1_CONTROL, OTG_VERTICAL_INTERRUPT1_INT_ENABLE, mask_sh),\
	SF(OTG0_OTG_VERTICAL_INTERRUPT1_POSITION, OTG_VERTICAL_INTERRUPT1_LINE_START, mask_sh),\
	SF(OTG0_OTG_VERTICAL_INTERRUPT2_CONTROL, OTG_VERTICAL_INTERRUPT2_INT_ENABLE, mask_sh),\
	SF(OTG0_OTG_VERTICAL_INTERRUPT2_POSITION, OTG_VERTICAL_INTERRUPT2_LINE_START, mask_sh),\
	SF(ODM0_OPTC_INPUT_CLOCK_CONTROL, OPTC_INPUT_CLK_EN, mask_sh),\
	SF(ODM0_OPTC_INPUT_CLOCK_CONTROL, OPTC_INPUT_CLK_ON, mask_sh),\
	SF(ODM0_OPTC_INPUT_CLOCK_CONTROL, OPTC_INPUT_CLK_GATE_DIS, mask_sh),\
	SF(ODM0_OPTC_INPUT_GLOBAL_CONTROL, OPTC_UNDERFLOW_OCCURRED_STATUS, mask_sh),\
	SF(ODM0_OPTC_INPUT_GLOBAL_CONTROL, OPTC_DOUBLE_BUFFER_PENDING, mask_sh),\
	SF(ODM0_OPTC_INPUT_GLOBAL_CONTROL, OPTC_UNDERFLOW_CLEAR, mask_sh),\
	SF(VTG0_CONTROL, VTG0_ENABLE, mask_sh),\
	SF(VTG0_CONTROL, VTG0_FP2, mask_sh),\
	SF(VTG0_CONTROL, VTG0_VCOUNT_INIT, mask_sh),\
	SF(OTG0_OTG_VERT_SYNC_CONTROL, OTG_FORCE_VSYNC_NEXT_LINE_OCCURRED, mask_sh),\
	SF(OTG0_OTG_VERT_SYNC_CONTROL, OTG_FORCE_VSYNC_NEXT_LINE_CLEAR, mask_sh),\
	SF(OTG0_OTG_VERT_SYNC_CONTROL, OTG_AUTO_FORCE_VSYNC_MODE, mask_sh),\
	SF(OTG0_OTG_GSL_CONTROL, OTG_GSL0_EN, mask_sh),\
	SF(OTG0_OTG_GSL_CONTROL, OTG_GSL1_EN, mask_sh),\
	SF(OTG0_OTG_GSL_CONTROL, OTG_GSL2_EN, mask_sh),\
	SF(OTG0_OTG_GSL_CONTROL, OTG_GSL_MASTER_EN, mask_sh),\
	SF(OTG0_OTG_GSL_CONTROL, OTG_GSL_FORCE_DELAY, mask_sh),\
	SF(OTG0_OTG_GSL_CONTROL, OTG_GSL_CHECK_ALL_FIELDS, mask_sh),\
	SF(OTG0_OTG_CRC_CNTL, OTG_CRC_CONT_EN, mask_sh),\
	SF(OTG0_OTG_CRC_CNTL, OTG_CRC0_SELECT, mask_sh),\
	SF(OTG0_OTG_CRC_CNTL, OTG_CRC_EN, mask_sh),\
	SF(OTG0_OTG_CRC0_DATA_RG, CRC0_R_CR, mask_sh),\
	SF(OTG0_OTG_CRC0_DATA_RG, CRC0_G_Y, mask_sh),\
	SF(OTG0_OTG_CRC0_DATA_B, CRC0_B_CB, mask_sh),\
	SF(OTG0_OTG_CRC0_WINDOWA_X_CONTROL, OTG_CRC0_WINDOWA_X_START, mask_sh),\
	SF(OTG0_OTG_CRC0_WINDOWA_X_CONTROL, OTG_CRC0_WINDOWA_X_END, mask_sh),\
	SF(OTG0_OTG_CRC0_WINDOWA_Y_CONTROL, OTG_CRC0_WINDOWA_Y_START, mask_sh),\
	SF(OTG0_OTG_CRC0_WINDOWA_Y_CONTROL, OTG_CRC0_WINDOWA_Y_END, mask_sh),\
	SF(OTG0_OTG_CRC0_WINDOWB_X_CONTROL, OTG_CRC0_WINDOWB_X_START, mask_sh),\
	SF(OTG0_OTG_CRC0_WINDOWB_X_CONTROL, OTG_CRC0_WINDOWB_X_END, mask_sh),\
	SF(OTG0_OTG_CRC0_WINDOWB_Y_CONTROL, OTG_CRC0_WINDOWB_Y_START, mask_sh),\
	SF(OTG0_OTG_CRC0_WINDOWB_Y_CONTROL, OTG_CRC0_WINDOWB_Y_END, mask_sh),\
	SF(OTG0_OTG_TRIGA_MANUAL_TRIG, OTG_TRIGA_MANUAL_TRIG, mask_sh),\
	SF(GSL_SOURCE_SELECT, GSL0_READY_SOURCE_SEL, mask_sh),\
	SF(GSL_SOURCE_SELECT, GSL1_READY_SOURCE_SEL, mask_sh),\
	SF(GSL_SOURCE_SELECT, GSL2_READY_SOURCE_SEL, mask_sh),\
	SF(OTG0_OTG_GLOBAL_CONTROL2, MANUAL_FLOW_CONTROL_SEL, mask_sh),\
	SF(OTG0_OTG_GLOBAL_CONTROL2, GLOBAL_UPDATE_LOCK_EN, mask_sh),\
	SF(OTG0_OTG_GSL_WINDOW_X, OTG_GSL_WINDOW_START_X, mask_sh),\
	SF(OTG0_OTG_GSL_WINDOW_X, OTG_GSL_WINDOW_END_X, mask_sh), \
	SF(OTG0_OTG_GSL_WINDOW_Y, OTG_GSL_WINDOW_START_Y, mask_sh),\
	SF(OTG0_OTG_GSL_WINDOW_Y, OTG_GSL_WINDOW_END_Y, mask_sh),\
	SF(OTG0_OTG_VUPDATE_KEEPOUT, OTG_MASTER_UPDATE_LOCK_VUPDATE_KEEPOUT_EN, mask_sh), \
	SF(OTG0_OTG_VUPDATE_KEEPOUT, MASTER_UPDATE_LOCK_VUPDATE_KEEPOUT_START_OFFSET, mask_sh), \
	SF(OTG0_OTG_VUPDATE_KEEPOUT, MASTER_UPDATE_LOCK_VUPDATE_KEEPOUT_END_OFFSET, mask_sh), \
	SF(OTG0_OTG_GSL_CONTROL, OTG_GSL_MASTER_MODE, mask_sh), \
	SF(OTG0_OTG_GSL_CONTROL, OTG_MASTER_UPDATE_LOCK_GSL_EN, mask_sh), \
	SF(ODM0_OPTC_DATA_SOURCE_SELECT, OPTC_SEG0_SRC_SEL, mask_sh),\
	SF(ODM0_OPTC_DATA_SOURCE_SELECT, OPTC_SEG1_SRC_SEL, mask_sh),\
	SF(ODM0_OPTC_DATA_SOURCE_SELECT, OPTC_SEG2_SRC_SEL, mask_sh),\
	SF(ODM0_OPTC_DATA_SOURCE_SELECT, OPTC_SEG3_SRC_SEL, mask_sh),\
	SF(ODM0_OPTC_DATA_SOURCE_SELECT, OPTC_NUM_OF_INPUT_SEGMENT, mask_sh),\
	SF(ODM0_OPTC_MEMORY_CONFIG, OPTC_MEM_SEL, mask_sh),\
	SF(ODM0_OPTC_DATA_FORMAT_CONTROL, OPTC_DATA_FORMAT, mask_sh),\
	SF(ODM0_OPTC_DATA_FORMAT_CONTROL, OPTC_DSC_MODE, mask_sh),\
	SF(ODM0_OPTC_BYTES_PER_PIXEL, OPTC_DSC_BYTES_PER_PIXEL, mask_sh),\
	SF(ODM0_OPTC_WIDTH_CONTROL, OPTC_DSC_SLICE_WIDTH, mask_sh),\
	SF(ODM0_OPTC_WIDTH_CONTROL, OPTC_SEGMENT_WIDTH, mask_sh),\
	SF(ODM0_OPTC_WIDTH_CONTROL2, OPTC_SEGMENT_WIDTH_LAST, mask_sh),\
	SF(OTG0_OTG_DRR_TRIGGER_WINDOW, OTG_DRR_TRIGGER_WINDOW_START_X, mask_sh),\
	SF(OTG0_OTG_DRR_TRIGGER_WINDOW, OTG_DRR_TRIGGER_WINDOW_END_X, mask_sh),\
	SF(OTG0_OTG_DRR_V_TOTAL_CHANGE, OTG_DRR_V_TOTAL_CHANGE_LIMIT, mask_sh),\
	SF(OTG0_OTG_H_TIMING_CNTL, OTG_H_TIMING_DIV_MODE, mask_sh),\
	SF(OTG0_OTG_H_TIMING_CNTL, OTG_H_TIMING_DIV_MODE_MANUAL, mask_sh),\
	SF(OTG0_OTG_DOUBLE_BUFFER_CONTROL, OTG_DRR_TIMING_DBUF_UPDATE_MODE, mask_sh),\
	SF(OTG0_OTG_DRR_CONTROL, OTG_V_TOTAL_LAST_USED_BY_DRR, mask_sh)

void dcn401_timing_generator_init(struct optc *optc1);

void optc401_set_drr(
	struct timing_generator *optc,
	const struct drr_params *params);
void optc401_set_vtotal_min_max(struct timing_generator *optc, int vtotal_min, int vtotal_max);
void optc401_setup_manual_trigger(struct timing_generator *optc);

#endif /* __DC_OPTC_DCN401_H__ */
