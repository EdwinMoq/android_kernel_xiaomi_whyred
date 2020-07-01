/* SPDX-License-Identifier: GPL-2.0-only */
/* Copyright (c) 2019-2020, The Linux Foundation. All rights reserved.
 */

#ifndef _MSM_CAM_CX_IPEAK_H_
#define _MSM_CAM_CX_IPEAK_H_

#include <soc/qcom/cx_ipeak.h>

int cam_cx_ipeak_register_cx_ipeak(struct cx_ipeak_client *p_cam_cx_ipeak,
	int *cam_cx_ipeak_bit);

int cam_cx_ipeak_update_vote_cx_ipeak(int cam_cx_ipeak_bit);
int cam_cx_ipeak_unvote_cx_ipeak(int cam_cx_ipeak_bit);

#endif /* _CAM_CX_IPEAK_H_ */
