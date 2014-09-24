/*
 *************************************************************************
 * Ralink Tech Inc.
 * 5F., No.36, Taiyuan St., Jhubei City,
 * Hsinchu County 302,
 * Taiwan, R.O.C.
 *
 * (c) Copyright 2002-2010, Ralink Technology, Inc.
 *
 * This program is free software; you can redistribute it and/or modify  *
 * it under the terms of the GNU General Public License as published by  *
 * the Free Software Foundation; either version 2 of the License, or     *
 * (at your option) any later version.                                   *
 *                                                                       *
 * This program is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 * GNU General Public License for more details.                          *
 *                                                                       *
 * You should have received a copy of the GNU General Public License     *
 * along with this program; if not, write to the                         *
 * Free Software Foundation, Inc.,                                       *
 * 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                       *
 *************************************************************************/


#define RTMP_MODULE_OS

/*#include "rt_config.h"*/
#include "rtmp_comm.h"
#include "rt_os_util.h"
#include "rt_os_net.h"


/* module table */
USB_DEVICE_ID rtusb_dev_id[] = {
#ifdef RT2870
	{USB_DEVICE(0x148F,0x2770)}, /* Ralink */
	{USB_DEVICE(0x148F,0x2870)}, /* Ralink */
	{USB_DEVICE(0x07D1,0x3C09)}, /* D-Link */
	{USB_DEVICE(0x07D1,0x3C11)}, /* D-Link */
#endif /* RT2870*/
#ifdef RT3070
	{USB_DEVICE(0x148F,0x3070)}, /* Ralink 3070 */
	{USB_DEVICE(0x148F,0x3071)}, /* Ralink 3071 */
	{USB_DEVICE(0x148F,0x3072)}, /* Ralink 3072 */
	{USB_DEVICE(0x07D1,0x3C0A)}, /* D-Link 3072 */
	{USB_DEVICE(0x07D1,0x3C0D)}, /* D-Link 3070 */
	{USB_DEVICE(0x07D1,0x3C0E)}, /* D-Link 3070 */
	{USB_DEVICE(0x07D1,0x3C0F)}, /* D-Link 3070 */
	{USB_DEVICE(0x07D1,0x3C16)}, /* D-Link 3070 */
	{USB_DEVICE(0x07D1,0x3C17)}, /* D-Link 8070 */
	{USB_DEVICE(0x2001,0x3C1B)}, /* Alpha */
#endif /* RT3070 */
#ifdef RT35xx
	{USB_DEVICE(0x148F,0x3572)}, /* Ralink 3572 */
#endif /* RT35xx */
#ifdef RT3370
	{USB_DEVICE(0x148F,0x3370)}, /* Ralink 3370 */
#endif /* RT3370*/
#ifdef RT3573
	{USB_DEVICE(0x148F,0x3573)}, /* Ralink 3573 */
#endif /* RT3573 */
#ifdef RT5370
	{USB_DEVICE(0x148F,0x5370)}, /* Ralink 5370 */
	{USB_DEVICE(0x148F,0x5372)}, /* Ralink 5372 */
#endif /* RT5370 */
#ifdef RT5572
	{USB_DEVICE(0x148F,0x5572)}, /* Ralink 5572 */
	{USB_DEVICE(0x2001,0x3C1A)}, /* D-Link DWA-160B2 */
#endif /* RT5572 */
	{ }/* Terminating entry */
};

INT const rtusb_usb_id_len = sizeof(rtusb_dev_id) / sizeof(USB_DEVICE_ID);
MODULE_DEVICE_TABLE(usb, rtusb_dev_id);
