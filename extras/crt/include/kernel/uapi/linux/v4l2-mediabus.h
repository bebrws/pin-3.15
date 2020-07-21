/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_V4L2_MEDIABUS_H
#define __LINUX_V4L2_MEDIABUS_H
#include <types.h>
#include <videodev2.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum v4l2_mbus_pixelcode {
 V4L2_MBUS_FMT_FIXED = 0x0001,
 V4L2_MBUS_FMT_RGB444_2X8_PADHI_BE = 0x1001,
 V4L2_MBUS_FMT_RGB444_2X8_PADHI_LE = 0x1002,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MBUS_FMT_RGB555_2X8_PADHI_BE = 0x1003,
 V4L2_MBUS_FMT_RGB555_2X8_PADHI_LE = 0x1004,
 V4L2_MBUS_FMT_BGR565_2X8_BE = 0x1005,
 V4L2_MBUS_FMT_BGR565_2X8_LE = 0x1006,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MBUS_FMT_RGB565_2X8_BE = 0x1007,
 V4L2_MBUS_FMT_RGB565_2X8_LE = 0x1008,
 V4L2_MBUS_FMT_RGB666_1X18 = 0x1009,
 V4L2_MBUS_FMT_RGB888_1X24 = 0x100a,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MBUS_FMT_RGB888_2X12_BE = 0x100b,
 V4L2_MBUS_FMT_RGB888_2X12_LE = 0x100c,
 V4L2_MBUS_FMT_ARGB8888_1X32 = 0x100d,
 V4L2_MBUS_FMT_Y8_1X8 = 0x2001,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MBUS_FMT_UV8_1X8 = 0x2015,
 V4L2_MBUS_FMT_UYVY8_1_5X8 = 0x2002,
 V4L2_MBUS_FMT_VYUY8_1_5X8 = 0x2003,
 V4L2_MBUS_FMT_YUYV8_1_5X8 = 0x2004,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MBUS_FMT_YVYU8_1_5X8 = 0x2005,
 V4L2_MBUS_FMT_UYVY8_2X8 = 0x2006,
 V4L2_MBUS_FMT_VYUY8_2X8 = 0x2007,
 V4L2_MBUS_FMT_YUYV8_2X8 = 0x2008,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MBUS_FMT_YVYU8_2X8 = 0x2009,
 V4L2_MBUS_FMT_Y10_1X10 = 0x200a,
 V4L2_MBUS_FMT_YUYV10_2X10 = 0x200b,
 V4L2_MBUS_FMT_YVYU10_2X10 = 0x200c,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MBUS_FMT_Y12_1X12 = 0x2013,
 V4L2_MBUS_FMT_UYVY8_1X16 = 0x200f,
 V4L2_MBUS_FMT_VYUY8_1X16 = 0x2010,
 V4L2_MBUS_FMT_YUYV8_1X16 = 0x2011,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MBUS_FMT_YVYU8_1X16 = 0x2012,
 V4L2_MBUS_FMT_YDYUYDYV8_1X16 = 0x2014,
 V4L2_MBUS_FMT_YUYV10_1X20 = 0x200d,
 V4L2_MBUS_FMT_YVYU10_1X20 = 0x200e,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MBUS_FMT_YUV10_1X30 = 0x2016,
 V4L2_MBUS_FMT_AYUV8_1X32 = 0x2017,
 V4L2_MBUS_FMT_SBGGR8_1X8 = 0x3001,
 V4L2_MBUS_FMT_SGBRG8_1X8 = 0x3013,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MBUS_FMT_SGRBG8_1X8 = 0x3002,
 V4L2_MBUS_FMT_SRGGB8_1X8 = 0x3014,
 V4L2_MBUS_FMT_SBGGR10_ALAW8_1X8 = 0x3015,
 V4L2_MBUS_FMT_SGBRG10_ALAW8_1X8 = 0x3016,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MBUS_FMT_SGRBG10_ALAW8_1X8 = 0x3017,
 V4L2_MBUS_FMT_SRGGB10_ALAW8_1X8 = 0x3018,
 V4L2_MBUS_FMT_SBGGR10_DPCM8_1X8 = 0x300b,
 V4L2_MBUS_FMT_SGBRG10_DPCM8_1X8 = 0x300c,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MBUS_FMT_SGRBG10_DPCM8_1X8 = 0x3009,
 V4L2_MBUS_FMT_SRGGB10_DPCM8_1X8 = 0x300d,
 V4L2_MBUS_FMT_SBGGR10_2X8_PADHI_BE = 0x3003,
 V4L2_MBUS_FMT_SBGGR10_2X8_PADHI_LE = 0x3004,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MBUS_FMT_SBGGR10_2X8_PADLO_BE = 0x3005,
 V4L2_MBUS_FMT_SBGGR10_2X8_PADLO_LE = 0x3006,
 V4L2_MBUS_FMT_SBGGR10_1X10 = 0x3007,
 V4L2_MBUS_FMT_SGBRG10_1X10 = 0x300e,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MBUS_FMT_SGRBG10_1X10 = 0x300a,
 V4L2_MBUS_FMT_SRGGB10_1X10 = 0x300f,
 V4L2_MBUS_FMT_SBGGR12_1X12 = 0x3008,
 V4L2_MBUS_FMT_SGBRG12_1X12 = 0x3010,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MBUS_FMT_SGRBG12_1X12 = 0x3011,
 V4L2_MBUS_FMT_SRGGB12_1X12 = 0x3012,
 V4L2_MBUS_FMT_JPEG_1X8 = 0x4001,
 V4L2_MBUS_FMT_S5C_UYVY_JPEG_1X8 = 0x5001,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MBUS_FMT_AHSV8888_1X32 = 0x6001,
};
struct v4l2_mbus_framefmt {
 __u32 width;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 height;
 __u32 code;
 __u32 field;
 __u32 colorspace;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 reserved[7];
};
#endif
