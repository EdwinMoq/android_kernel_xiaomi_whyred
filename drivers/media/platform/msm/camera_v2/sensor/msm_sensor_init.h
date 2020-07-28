/* SPDX-License-Identifier: GPL-2.0-only */
/* Copyright (c) 2013-2014, 2018, 2020, The Linux Foundation. All rights reserved.
 */

#ifndef MSM_SENSOR_INIT_H
#define MSM_SENSOR_INIT_H

#include "msm_sensor.h"

struct msm_sensor_init_t {
	struct mutex imutex;
	struct msm_sd_subdev msm_sd;
	int module_init_status;
	wait_queue_head_t state_wait;
};

#endif
