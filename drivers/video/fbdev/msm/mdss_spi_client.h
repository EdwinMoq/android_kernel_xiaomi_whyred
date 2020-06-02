/* SPDX-License-Identifier: GPL-2.0-only */
/* Copyright (c) 2017-2018, The Linux Foundation. All rights reserved. */

#ifndef __MDSS_SPI_CLIENT_H__
#define __MDSS_SPI_CLIENT_H__

int mdss_spi_tx_command(const void *buf);
int mdss_spi_tx_parameter(const void *buf, size_t len);
int mdss_spi_tx_pixel(const void *buf, size_t len,
		void (*spi_tx_compelet)(void *), void *ctx);
int mdss_spi_read_data(u8 reg_addr, u8 *data, u8 len);

#endif /* End of __MDSS_SPI_CLIENT_H__ */
