/* SPDX-License-Identifier: GPL-2.0-only */
/* Copyright (c) 2015-2016, 2018, 2020, The Linux Foundation. All rights reserved.
 */

#ifndef __MSM_JPEG_DMA_HW_H__
#define __MSM_JPEG_DMA_HW_H__

#include "msm_jpeg_dma_dev.h"

int msm_jpegdma_hw_check_config(struct msm_jpegdma_device *dma,
	struct msm_jpegdma_size_config *size_cfg);

int msm_jpegdma_hw_set_config(struct msm_jpegdma_device *dma,
	struct msm_jpegdma_size_config *size_cfg,
	struct msm_jpegdma_plane_config *plane_cfg);

int msm_jpegdma_hw_start(struct msm_jpegdma_device *dma,
	struct msm_jpegdma_addr *addr,
	struct msm_jpegdma_plane *plane,
	struct msm_jpegdma_speed *speed);

int msm_jpegdma_hw_abort(struct msm_jpegdma_device *dma);

int msm_jpegdma_hw_update_bus_data(struct msm_jpegdma_device *dma,
	u64 ab, u64 ib);

int msm_jpegdma_hw_handle_irq(struct msm_jpegdma_device *dma);

int msm_jpegdma_hw_request_irq(struct platform_device *pdev,
	struct msm_jpegdma_device *dma);

void msm_jpegdma_hw_release_irq(struct msm_jpegdma_device *dma);

void msm_jpegdma_hw_release_mem_resources(struct msm_jpegdma_device *dma);

int msm_jpegdma_hw_get_mem_resources(struct platform_device *pdev,
	struct msm_jpegdma_device *dma);

int msm_jpegdma_hw_get_regulators(struct msm_jpegdma_device *dma);

void msm_jpegdma_hw_put_regulators(struct msm_jpegdma_device *dma);

int msm_jpegdma_hw_get_clocks(struct msm_jpegdma_device *dma);

int msm_jpegdma_hw_put_clocks(struct msm_jpegdma_device *dma);

int msm_jpegdma_hw_get_max_downscale(struct msm_jpegdma_device *dma);

int msm_jpegdma_hw_get_qos(struct msm_jpegdma_device *dma);

void msm_jpegdma_hw_put_qos(struct msm_jpegdma_device *dma);

int msm_jpegdma_hw_get_vbif(struct msm_jpegdma_device *dma);

void msm_jpegdma_hw_put_vbif(struct msm_jpegdma_device *dma);

int msm_jpegdma_hw_get_prefetch(struct msm_jpegdma_device *dma);

void msm_jpegdma_hw_put_prefetch(struct msm_jpegdma_device *dma);

int msm_jpegdma_hw_get_capabilities(struct msm_jpegdma_device *dma);

int msm_jpegdma_hw_get(struct msm_jpegdma_device *dma);

void msm_jpegdma_hw_put(struct msm_jpegdma_device *dma);

int msm_jpegdma_hw_map_buffer(struct msm_jpegdma_device *dma, int fd,
	struct msm_jpegdma_buf_handle *buf);

void msm_jpegdma_hw_unmap_buffer(struct msm_jpegdma_buf_handle *buf);

#endif /* __MSM_JPEG_DMA_HW_H__ */
