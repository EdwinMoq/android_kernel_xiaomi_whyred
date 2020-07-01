/* SPDX-License-Identifier: GPL-2.0-only */
/* Copyright (c) 2011-2014, 2016, 2018, 2020, The Linux Foundation. All rights reserved.
 */

#ifndef MSM_I2C_MUX_H
#define MSM_I2C_MUX_H

#include <linux/io.h>
#include <media/v4l2-subdev.h>

struct i2c_mux_device {
	struct platform_device *pdev;
	struct v4l2_subdev subdev;
	void __iomem *ctl_base;
	void __iomem *rw_base;
	struct mutex mutex;
	unsigned int use_count;
};

struct i2c_mux_cfg_params {
	struct v4l2_subdev *subdev;
	void *parms;
};

#define VIDIOC_MSM_I2C_MUX_CFG \
	_IOWR('V', BASE_VIDIOC_PRIVATE + 13, struct i2c_mux_cfg_params)

#define VIDIOC_MSM_I2C_MUX_INIT \
	_IOWR('V', BASE_VIDIOC_PRIVATE + 14, struct v4l2_subdev*)

#define VIDIOC_MSM_I2C_MUX_RELEASE \
	_IOWR('V', BASE_VIDIOC_PRIVATE + 15, struct v4l2_subdev*)

#endif
