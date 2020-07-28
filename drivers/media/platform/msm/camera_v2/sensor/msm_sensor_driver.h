/* SPDX-License-Identifier: GPL-2.0-only */
/* Copyright (c) 2013-2014, 2018, 2020, The Linux Foundation. All rights reserved.
 */

#ifndef MSM_SENSOR_DRIVER_H
#define MSM_SENSOR_DRIVER_H

#include "msm_sensor.h"

int32_t msm_sensor_driver_probe(void *setting,
	struct msm_sensor_info_t *probed_info, char *entity_name);

#endif
