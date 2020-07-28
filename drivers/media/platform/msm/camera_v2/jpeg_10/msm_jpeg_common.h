/* SPDX-License-Identifier: GPL-2.0-only */
/* Copyright (c) 2012-2015, 2018, 2020 The Linux Foundation. All rights reserved.
 */

#ifndef MSM_JPEG_COMMON_H
#define MSM_JPEG_COMMON_H

#define JPEG_DBG(fmt, args...) pr_debug(fmt, ##args)

#define JPEG_PR_ERR   pr_err
#define JPEG_DBG_HIGH   pr_debug

#define JPEG_BUS_VOTED(pgmn_dev) (pgmn_dev->jpeg_bus_vote = 1)
#define JPEG_BUS_UNVOTED(pgmn_dev) (pgmn_dev->jpeg_bus_vote = 0)

enum JPEG_MODE {
	JPEG_MODE_DISABLE,
	JPEG_MODE_OFFLINE,
	JPEG_MODE_REALTIME,
	JPEG_MODE_REALTIME_ROTATION
};

enum JPEG_ROTATION {
	JPEG_ROTATION_0,
	JPEG_ROTATION_90,
	JPEG_ROTATION_180,
	JPEG_ROTATION_270
};

#endif /* MSM_JPEG_COMMON_H */
