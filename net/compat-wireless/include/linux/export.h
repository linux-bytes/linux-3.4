/*
 * net/compat-wireless/include/linux/export.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef _COMPAT_LINUX_EXPORT_H
#define _COMPAT_LINUX_EXPORT_H 1

#include <linux/version.h>

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(3,2,0))
#include_next <linux/export.h>
#else
#include <linux/module.h>
#endif /* (LINUX_VERSION_CODE >= KERNEL_VERSION(3,2,0)) */

#endif	/* _COMPAT_LINUX_EXPORT_H */
