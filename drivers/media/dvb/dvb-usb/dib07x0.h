/*
 * drivers/media/dvb/dvb-usb/dib07x0.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef _DIB07X0_H_
#define _DIB07X0_H_

enum dib07x0_gpios {
	GPIO0  =  0,
	GPIO1  =  2,
	GPIO2  =  3,
	GPIO3  =  4,
	GPIO4  =  5,
	GPIO5  =  6,
	GPIO6  =  8,
	GPIO7  = 10,
	GPIO8  = 11,
	GPIO9  = 14,
	GPIO10 = 15,
};

#define GPIO_IN  0
#define GPIO_OUT 1

#endif
