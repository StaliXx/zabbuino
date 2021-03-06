/*
 clock-arch.h - Arduino implementation of uIP clock device.
 Copyright (c) 2010 Adam Nielsen <malvineous@shikadi.net>
 All rights reserved.

 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.

 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */


#include "../network_hlp.h"
#ifdef NETWORK_ETH_ENC28J60

#ifndef _UIP_CLOCK_ARCH_H_
#define _UIP_CLOCK_ARCH_H_

//#include <Arduino.h>

typedef unsigned long clock_time_t;
#define CLOCK_CONF_SECOND 1000

#endif // _UIP_CLOCK-ARCH_H_
#endif // NETWORK_ETH_ENC28J60
