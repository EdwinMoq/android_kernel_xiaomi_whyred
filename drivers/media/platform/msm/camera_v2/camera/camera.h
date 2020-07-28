/* SPDX-License-Identifier: GPL-2.0-only */
/* Copyright (c) 2012-2018, 2020 The Linux Foundation. All rights reserved.
 */

#ifndef _CAMERA_H
#define _CAMERA_H

enum stream_state {
	START_STREAM = 0,
	STOP_STREAM,
};

int camera_init_v4l2(struct device *dev, unsigned int *session);

#endif /*_CAMERA_H */
