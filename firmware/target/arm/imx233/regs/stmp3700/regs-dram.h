/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 2.1.7
 * XML versions: stmp3700:3.2.0
 *
 * Copyright (C) 2013 by Amaury Pouly
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#ifndef __HEADERGEN__STMP3700__DRAM__H__
#define __HEADERGEN__STMP3700__DRAM__H__

#define REGS_DRAM_BASE (0x800e0000)

#define REGS_DRAM_VERSION "3.2.0"

/**
 * Register: HW_DRAM_CTL00
 * Address: 0
 * SCT: no
*/
#define HW_DRAM_CTL00                       (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x0))
#define BP_DRAM_CTL00_AHB0_W_PRIORITY       24
#define BM_DRAM_CTL00_AHB0_W_PRIORITY       0x1000000
#define BF_DRAM_CTL00_AHB0_W_PRIORITY(v)    (((v) << 24) & 0x1000000)
#define BP_DRAM_CTL00_AHB0_R_PRIORITY       16
#define BM_DRAM_CTL00_AHB0_R_PRIORITY       0x10000
#define BF_DRAM_CTL00_AHB0_R_PRIORITY(v)    (((v) << 16) & 0x10000)
#define BP_DRAM_CTL00_AHB0_FIFO_TYPE_REG    8
#define BM_DRAM_CTL00_AHB0_FIFO_TYPE_REG    0x100
#define BF_DRAM_CTL00_AHB0_FIFO_TYPE_REG(v) (((v) << 8) & 0x100)
#define BP_DRAM_CTL00_ADDR_CMP_EN           0
#define BM_DRAM_CTL00_ADDR_CMP_EN           0x1
#define BF_DRAM_CTL00_ADDR_CMP_EN(v)        (((v) << 0) & 0x1)

/**
 * Register: HW_DRAM_CTL01
 * Address: 0x4
 * SCT: no
*/
#define HW_DRAM_CTL01                       (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x4))
#define BP_DRAM_CTL01_AHB2_FIFO_TYPE_REG    24
#define BM_DRAM_CTL01_AHB2_FIFO_TYPE_REG    0x1000000
#define BF_DRAM_CTL01_AHB2_FIFO_TYPE_REG(v) (((v) << 24) & 0x1000000)
#define BP_DRAM_CTL01_AHB1_W_PRIORITY       16
#define BM_DRAM_CTL01_AHB1_W_PRIORITY       0x10000
#define BF_DRAM_CTL01_AHB1_W_PRIORITY(v)    (((v) << 16) & 0x10000)
#define BP_DRAM_CTL01_AHB1_R_PRIORITY       8
#define BM_DRAM_CTL01_AHB1_R_PRIORITY       0x100
#define BF_DRAM_CTL01_AHB1_R_PRIORITY(v)    (((v) << 8) & 0x100)
#define BP_DRAM_CTL01_AHB1_FIFO_TYPE_REG    0
#define BM_DRAM_CTL01_AHB1_FIFO_TYPE_REG    0x1
#define BF_DRAM_CTL01_AHB1_FIFO_TYPE_REG(v) (((v) << 0) & 0x1)

/**
 * Register: HW_DRAM_CTL02
 * Address: 0x8
 * SCT: no
*/
#define HW_DRAM_CTL02                       (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x8))
#define BP_DRAM_CTL02_AHB3_R_PRIORITY       24
#define BM_DRAM_CTL02_AHB3_R_PRIORITY       0x1000000
#define BF_DRAM_CTL02_AHB3_R_PRIORITY(v)    (((v) << 24) & 0x1000000)
#define BP_DRAM_CTL02_AHB3_FIFO_TYPE_REG    16
#define BM_DRAM_CTL02_AHB3_FIFO_TYPE_REG    0x10000
#define BF_DRAM_CTL02_AHB3_FIFO_TYPE_REG(v) (((v) << 16) & 0x10000)
#define BP_DRAM_CTL02_AHB2_W_PRIORITY       8
#define BM_DRAM_CTL02_AHB2_W_PRIORITY       0x100
#define BF_DRAM_CTL02_AHB2_W_PRIORITY(v)    (((v) << 8) & 0x100)
#define BP_DRAM_CTL02_AHB2_R_PRIORITY       0
#define BM_DRAM_CTL02_AHB2_R_PRIORITY       0x1
#define BF_DRAM_CTL02_AHB2_R_PRIORITY(v)    (((v) << 0) & 0x1)

/**
 * Register: HW_DRAM_CTL03
 * Address: 0xc
 * SCT: no
*/
#define HW_DRAM_CTL03                       (*(volatile unsigned long *)(REGS_DRAM_BASE + 0xc))
#define BP_DRAM_CTL03_AUTO_REFRESH_MODE     24
#define BM_DRAM_CTL03_AUTO_REFRESH_MODE     0x1000000
#define BF_DRAM_CTL03_AUTO_REFRESH_MODE(v)  (((v) << 24) & 0x1000000)
#define BP_DRAM_CTL03_AREFRESH              16
#define BM_DRAM_CTL03_AREFRESH              0x10000
#define BF_DRAM_CTL03_AREFRESH(v)           (((v) << 16) & 0x10000)
#define BP_DRAM_CTL03_AP                    8
#define BM_DRAM_CTL03_AP                    0x100
#define BF_DRAM_CTL03_AP(v)                 (((v) << 8) & 0x100)
#define BP_DRAM_CTL03_AHB3_W_PRIORITY       0
#define BM_DRAM_CTL03_AHB3_W_PRIORITY       0x1
#define BF_DRAM_CTL03_AHB3_W_PRIORITY(v)    (((v) << 0) & 0x1)

/**
 * Register: HW_DRAM_CTL04
 * Address: 0x10
 * SCT: no
*/
#define HW_DRAM_CTL04                       (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x10))
#define BP_DRAM_CTL04_DLL_BYPASS_MODE       24
#define BM_DRAM_CTL04_DLL_BYPASS_MODE       0x1000000
#define BF_DRAM_CTL04_DLL_BYPASS_MODE(v)    (((v) << 24) & 0x1000000)
#define BP_DRAM_CTL04_DLLLOCKREG            16
#define BM_DRAM_CTL04_DLLLOCKREG            0x10000
#define BF_DRAM_CTL04_DLLLOCKREG(v)         (((v) << 16) & 0x10000)
#define BP_DRAM_CTL04_CONCURRENTAP          8
#define BM_DRAM_CTL04_CONCURRENTAP          0x100
#define BF_DRAM_CTL04_CONCURRENTAP(v)       (((v) << 8) & 0x100)
#define BP_DRAM_CTL04_BANK_SPLIT_EN         0
#define BM_DRAM_CTL04_BANK_SPLIT_EN         0x1
#define BF_DRAM_CTL04_BANK_SPLIT_EN(v)      (((v) << 0) & 0x1)

/**
 * Register: HW_DRAM_CTL05
 * Address: 0x14
 * SCT: no
*/
#define HW_DRAM_CTL05                       (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x14))
#define BP_DRAM_CTL05_INTRPTREADA           24
#define BM_DRAM_CTL05_INTRPTREADA           0x1000000
#define BF_DRAM_CTL05_INTRPTREADA(v)        (((v) << 24) & 0x1000000)
#define BP_DRAM_CTL05_INTRPTAPBURST         16
#define BM_DRAM_CTL05_INTRPTAPBURST         0x10000
#define BF_DRAM_CTL05_INTRPTAPBURST(v)      (((v) << 16) & 0x10000)
#define BP_DRAM_CTL05_FAST_WRITE            8
#define BM_DRAM_CTL05_FAST_WRITE            0x100
#define BF_DRAM_CTL05_FAST_WRITE(v)         (((v) << 8) & 0x100)
#define BP_DRAM_CTL05_EN_LOWPOWER_MODE      0
#define BM_DRAM_CTL05_EN_LOWPOWER_MODE      0x1
#define BF_DRAM_CTL05_EN_LOWPOWER_MODE(v)   (((v) << 0) & 0x1)

/**
 * Register: HW_DRAM_CTL06
 * Address: 0x18
 * SCT: no
*/
#define HW_DRAM_CTL06                   (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x18))
#define BP_DRAM_CTL06_POWER_DOWN        24
#define BM_DRAM_CTL06_POWER_DOWN        0x1000000
#define BF_DRAM_CTL06_POWER_DOWN(v)     (((v) << 24) & 0x1000000)
#define BP_DRAM_CTL06_PLACEMENT_EN      16
#define BM_DRAM_CTL06_PLACEMENT_EN      0x10000
#define BF_DRAM_CTL06_PLACEMENT_EN(v)   (((v) << 16) & 0x10000)
#define BP_DRAM_CTL06_NO_CMD_INIT       8
#define BM_DRAM_CTL06_NO_CMD_INIT       0x100
#define BF_DRAM_CTL06_NO_CMD_INIT(v)    (((v) << 8) & 0x100)
#define BP_DRAM_CTL06_INTRPTWRITEA      0
#define BM_DRAM_CTL06_INTRPTWRITEA      0x1
#define BF_DRAM_CTL06_INTRPTWRITEA(v)   (((v) << 0) & 0x1)

/**
 * Register: HW_DRAM_CTL07
 * Address: 0x1c
 * SCT: no
*/
#define HW_DRAM_CTL07                       (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x1c))
#define BP_DRAM_CTL07_RW_SAME_EN            24
#define BM_DRAM_CTL07_RW_SAME_EN            0x1000000
#define BF_DRAM_CTL07_RW_SAME_EN(v)         (((v) << 24) & 0x1000000)
#define BP_DRAM_CTL07_REG_DIMM_ENABLE       16
#define BM_DRAM_CTL07_REG_DIMM_ENABLE       0x10000
#define BF_DRAM_CTL07_REG_DIMM_ENABLE(v)    (((v) << 16) & 0x10000)
#define BP_DRAM_CTL07_RD2RD_TURN            8
#define BM_DRAM_CTL07_RD2RD_TURN            0x100
#define BF_DRAM_CTL07_RD2RD_TURN(v)         (((v) << 8) & 0x100)
#define BP_DRAM_CTL07_PRIORITY_EN           0
#define BM_DRAM_CTL07_PRIORITY_EN           0x1
#define BF_DRAM_CTL07_PRIORITY_EN(v)        (((v) << 0) & 0x1)

/**
 * Register: HW_DRAM_CTL08
 * Address: 0x20
 * SCT: no
*/
#define HW_DRAM_CTL08                   (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x20))
#define BP_DRAM_CTL08_TRAS_LOCKOUT      24
#define BM_DRAM_CTL08_TRAS_LOCKOUT      0x1000000
#define BF_DRAM_CTL08_TRAS_LOCKOUT(v)   (((v) << 24) & 0x1000000)
#define BP_DRAM_CTL08_START             16
#define BM_DRAM_CTL08_START             0x10000
#define BF_DRAM_CTL08_START(v)          (((v) << 16) & 0x10000)
#define BP_DRAM_CTL08_SREFRESH          8
#define BM_DRAM_CTL08_SREFRESH          0x100
#define BF_DRAM_CTL08_SREFRESH(v)       (((v) << 8) & 0x100)
#define BP_DRAM_CTL08_SDR_MODE          0
#define BM_DRAM_CTL08_SDR_MODE          0x1
#define BF_DRAM_CTL08_SDR_MODE(v)       (((v) << 0) & 0x1)

/**
 * Register: HW_DRAM_CTL09
 * Address: 0x24
 * SCT: no
*/
#define HW_DRAM_CTL09                           (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x24))
#define BP_DRAM_CTL09_OUT_OF_RANGE_TYPE         24
#define BM_DRAM_CTL09_OUT_OF_RANGE_TYPE         0x3000000
#define BF_DRAM_CTL09_OUT_OF_RANGE_TYPE(v)      (((v) << 24) & 0x3000000)
#define BP_DRAM_CTL09_OUT_OF_RANGE_SOURCE_ID    16
#define BM_DRAM_CTL09_OUT_OF_RANGE_SOURCE_ID    0x30000
#define BF_DRAM_CTL09_OUT_OF_RANGE_SOURCE_ID(v) (((v) << 16) & 0x30000)
#define BP_DRAM_CTL09_WRITE_MODEREG             8
#define BM_DRAM_CTL09_WRITE_MODEREG             0x100
#define BF_DRAM_CTL09_WRITE_MODEREG(v)          (((v) << 8) & 0x100)
#define BP_DRAM_CTL09_WRITEINTERP               0
#define BM_DRAM_CTL09_WRITEINTERP               0x1
#define BF_DRAM_CTL09_WRITEINTERP(v)            (((v) << 0) & 0x1)

/**
 * Register: HW_DRAM_CTL10
 * Address: 0x28
 * SCT: no
*/
#define HW_DRAM_CTL10               (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x28))
#define BP_DRAM_CTL10_AGE_COUNT     24
#define BM_DRAM_CTL10_AGE_COUNT     0x7000000
#define BF_DRAM_CTL10_AGE_COUNT(v)  (((v) << 24) & 0x7000000)
#define BP_DRAM_CTL10_ADDR_PINS     16
#define BM_DRAM_CTL10_ADDR_PINS     0x70000
#define BF_DRAM_CTL10_ADDR_PINS(v)  (((v) << 16) & 0x70000)
#define BP_DRAM_CTL10_TEMRS         8
#define BM_DRAM_CTL10_TEMRS         0x300
#define BF_DRAM_CTL10_TEMRS(v)      (((v) << 8) & 0x300)
#define BP_DRAM_CTL10_Q_FULLNESS    0
#define BM_DRAM_CTL10_Q_FULLNESS    0x3
#define BF_DRAM_CTL10_Q_FULLNESS(v) (((v) << 0) & 0x3)

/**
 * Register: HW_DRAM_CTL11
 * Address: 0x2c
 * SCT: no
*/
#define HW_DRAM_CTL11                       (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x2c))
#define BP_DRAM_CTL11_MAX_CS_REG            24
#define BM_DRAM_CTL11_MAX_CS_REG            0x7000000
#define BF_DRAM_CTL11_MAX_CS_REG(v)         (((v) << 24) & 0x7000000)
#define BP_DRAM_CTL11_COMMAND_AGE_COUNT     16
#define BM_DRAM_CTL11_COMMAND_AGE_COUNT     0x70000
#define BF_DRAM_CTL11_COMMAND_AGE_COUNT(v)  (((v) << 16) & 0x70000)
#define BP_DRAM_CTL11_COLUMN_SIZE           8
#define BM_DRAM_CTL11_COLUMN_SIZE           0x700
#define BF_DRAM_CTL11_COLUMN_SIZE(v)        (((v) << 8) & 0x700)
#define BP_DRAM_CTL11_CASLAT                0
#define BM_DRAM_CTL11_CASLAT                0x7
#define BF_DRAM_CTL11_CASLAT(v)             (((v) << 0) & 0x7)

/**
 * Register: HW_DRAM_CTL12
 * Address: 0x30
 * SCT: no
*/
#define HW_DRAM_CTL12               (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x30))
#define BP_DRAM_CTL12_TWR_INT       24
#define BM_DRAM_CTL12_TWR_INT       0x7000000
#define BF_DRAM_CTL12_TWR_INT(v)    (((v) << 24) & 0x7000000)
#define BP_DRAM_CTL12_TRRD          16
#define BM_DRAM_CTL12_TRRD          0x70000
#define BF_DRAM_CTL12_TRRD(v)       (((v) << 16) & 0x70000)
#define BP_DRAM_CTL12_TCKE          0
#define BM_DRAM_CTL12_TCKE          0x7
#define BF_DRAM_CTL12_TCKE(v)       (((v) << 0) & 0x7)

/**
 * Register: HW_DRAM_CTL13
 * Address: 0x34
 * SCT: no
*/
#define HW_DRAM_CTL13                       (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x34))
#define BP_DRAM_CTL13_CASLAT_LIN_GATE       24
#define BM_DRAM_CTL13_CASLAT_LIN_GATE       0xf000000
#define BF_DRAM_CTL13_CASLAT_LIN_GATE(v)    (((v) << 24) & 0xf000000)
#define BP_DRAM_CTL13_CASLAT_LIN            16
#define BM_DRAM_CTL13_CASLAT_LIN            0xf0000
#define BF_DRAM_CTL13_CASLAT_LIN(v)         (((v) << 16) & 0xf0000)
#define BP_DRAM_CTL13_APREBIT               8
#define BM_DRAM_CTL13_APREBIT               0xf00
#define BF_DRAM_CTL13_APREBIT(v)            (((v) << 8) & 0xf00)
#define BP_DRAM_CTL13_TWTR                  0
#define BM_DRAM_CTL13_TWTR                  0x7
#define BF_DRAM_CTL13_TWTR(v)               (((v) << 0) & 0x7)

/**
 * Register: HW_DRAM_CTL14
 * Address: 0x38
 * SCT: no
*/
#define HW_DRAM_CTL14                               (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x38))
#define BP_DRAM_CTL14_MAX_COL_REG                   24
#define BM_DRAM_CTL14_MAX_COL_REG                   0xf000000
#define BF_DRAM_CTL14_MAX_COL_REG(v)                (((v) << 24) & 0xf000000)
#define BP_DRAM_CTL14_LOWPOWER_REFRESH_ENABLE       16
#define BM_DRAM_CTL14_LOWPOWER_REFRESH_ENABLE       0xf0000
#define BF_DRAM_CTL14_LOWPOWER_REFRESH_ENABLE(v)    (((v) << 16) & 0xf0000)
#define BP_DRAM_CTL14_INITAREF                      8
#define BM_DRAM_CTL14_INITAREF                      0xf00
#define BF_DRAM_CTL14_INITAREF(v)                   (((v) << 8) & 0xf00)
#define BP_DRAM_CTL14_CS_MAP                        0
#define BM_DRAM_CTL14_CS_MAP                        0xf
#define BF_DRAM_CTL14_CS_MAP(v)                     (((v) << 0) & 0xf)

/**
 * Register: HW_DRAM_CTL15
 * Address: 0x3c
 * SCT: no
*/
#define HW_DRAM_CTL15                   (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x3c))
#define BP_DRAM_CTL15_TRP               24
#define BM_DRAM_CTL15_TRP               0xf000000
#define BF_DRAM_CTL15_TRP(v)            (((v) << 24) & 0xf000000)
#define BP_DRAM_CTL15_TDAL              16
#define BM_DRAM_CTL15_TDAL              0xf0000
#define BF_DRAM_CTL15_TDAL(v)           (((v) << 16) & 0xf0000)
#define BP_DRAM_CTL15_PORT_BUSY         8
#define BM_DRAM_CTL15_PORT_BUSY         0xf00
#define BF_DRAM_CTL15_PORT_BUSY(v)      (((v) << 8) & 0xf00)
#define BP_DRAM_CTL15_MAX_ROW_REG       0
#define BM_DRAM_CTL15_MAX_ROW_REG       0xf
#define BF_DRAM_CTL15_MAX_ROW_REG(v)    (((v) << 0) & 0xf)

/**
 * Register: HW_DRAM_CTL16
 * Address: 0x40
 * SCT: no
*/
#define HW_DRAM_CTL16                           (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x40))
#define BP_DRAM_CTL16_TMRD                      24
#define BM_DRAM_CTL16_TMRD                      0x1f000000
#define BF_DRAM_CTL16_TMRD(v)                   (((v) << 24) & 0x1f000000)
#define BP_DRAM_CTL16_LOWPOWER_CONTROL          16
#define BM_DRAM_CTL16_LOWPOWER_CONTROL          0x1f0000
#define BF_DRAM_CTL16_LOWPOWER_CONTROL(v)       (((v) << 16) & 0x1f0000)
#define BP_DRAM_CTL16_LOWPOWER_AUTO_ENABLE      8
#define BM_DRAM_CTL16_LOWPOWER_AUTO_ENABLE      0x1f00
#define BF_DRAM_CTL16_LOWPOWER_AUTO_ENABLE(v)   (((v) << 8) & 0x1f00)
#define BP_DRAM_CTL16_INT_ACK                   0
#define BM_DRAM_CTL16_INT_ACK                   0xf
#define BF_DRAM_CTL16_INT_ACK(v)                (((v) << 0) & 0xf)

/**
 * Register: HW_DRAM_CTL17
 * Address: 0x44
 * SCT: no
*/
#define HW_DRAM_CTL17                       (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x44))
#define BP_DRAM_CTL17_DLL_START_POINT       24
#define BM_DRAM_CTL17_DLL_START_POINT       0xff000000
#define BF_DRAM_CTL17_DLL_START_POINT(v)    (((v) << 24) & 0xff000000)
#define BP_DRAM_CTL17_DLL_LOCK              16
#define BM_DRAM_CTL17_DLL_LOCK              0xff0000
#define BF_DRAM_CTL17_DLL_LOCK(v)           (((v) << 16) & 0xff0000)
#define BP_DRAM_CTL17_DLL_INCREMENT         8
#define BM_DRAM_CTL17_DLL_INCREMENT         0xff00
#define BF_DRAM_CTL17_DLL_INCREMENT(v)      (((v) << 8) & 0xff00)
#define BP_DRAM_CTL17_TRC                   0
#define BM_DRAM_CTL17_TRC                   0x1f
#define BF_DRAM_CTL17_TRC(v)                (((v) << 0) & 0x1f)

/**
 * Register: HW_DRAM_CTL18
 * Address: 0x48
 * SCT: no
*/
#define HW_DRAM_CTL18                       (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x48))
#define BP_DRAM_CTL18_DLL_DQS_DELAY_1       24
#define BM_DRAM_CTL18_DLL_DQS_DELAY_1       0x7f000000
#define BF_DRAM_CTL18_DLL_DQS_DELAY_1(v)    (((v) << 24) & 0x7f000000)
#define BP_DRAM_CTL18_DLL_DQS_DELAY_0       16
#define BM_DRAM_CTL18_DLL_DQS_DELAY_0       0x7f0000
#define BF_DRAM_CTL18_DLL_DQS_DELAY_0(v)    (((v) << 16) & 0x7f0000)
#define BP_DRAM_CTL18_INT_STATUS            8
#define BM_DRAM_CTL18_INT_STATUS            0x1f00
#define BF_DRAM_CTL18_INT_STATUS(v)         (((v) << 8) & 0x1f00)
#define BP_DRAM_CTL18_INT_MASK              0
#define BM_DRAM_CTL18_INT_MASK              0x1f
#define BF_DRAM_CTL18_INT_MASK(v)           (((v) << 0) & 0x1f)

/**
 * Register: HW_DRAM_CTL19
 * Address: 0x4c
 * SCT: no
*/
#define HW_DRAM_CTL19                           (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x4c))
#define BP_DRAM_CTL19_DQS_OUT_SHIFT_BYPASS      24
#define BM_DRAM_CTL19_DQS_OUT_SHIFT_BYPASS      0xff000000
#define BF_DRAM_CTL19_DQS_OUT_SHIFT_BYPASS(v)   (((v) << 24) & 0xff000000)
#define BP_DRAM_CTL19_DQS_OUT_SHIFT             16
#define BM_DRAM_CTL19_DQS_OUT_SHIFT             0x7f0000
#define BF_DRAM_CTL19_DQS_OUT_SHIFT(v)          (((v) << 16) & 0x7f0000)
#define BP_DRAM_CTL19_DLL_DQS_DELAY_BYPASS_1    8
#define BM_DRAM_CTL19_DLL_DQS_DELAY_BYPASS_1    0xff00
#define BF_DRAM_CTL19_DLL_DQS_DELAY_BYPASS_1(v) (((v) << 8) & 0xff00)
#define BP_DRAM_CTL19_DLL_DQS_DELAY_BYPASS_0    0
#define BM_DRAM_CTL19_DLL_DQS_DELAY_BYPASS_0    0xff
#define BF_DRAM_CTL19_DLL_DQS_DELAY_BYPASS_0(v) (((v) << 0) & 0xff)

/**
 * Register: HW_DRAM_CTL20
 * Address: 0x50
 * SCT: no
*/
#define HW_DRAM_CTL20                           (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x50))
#define BP_DRAM_CTL20_TRCD_INT                  24
#define BM_DRAM_CTL20_TRCD_INT                  0xff000000
#define BF_DRAM_CTL20_TRCD_INT(v)               (((v) << 24) & 0xff000000)
#define BP_DRAM_CTL20_TRAS_MIN                  16
#define BM_DRAM_CTL20_TRAS_MIN                  0xff0000
#define BF_DRAM_CTL20_TRAS_MIN(v)               (((v) << 16) & 0xff0000)
#define BP_DRAM_CTL20_WR_DQS_SHIFT_BYPASS       8
#define BM_DRAM_CTL20_WR_DQS_SHIFT_BYPASS       0xff00
#define BF_DRAM_CTL20_WR_DQS_SHIFT_BYPASS(v)    (((v) << 8) & 0xff00)
#define BP_DRAM_CTL20_WR_DQS_SHIFT              0
#define BM_DRAM_CTL20_WR_DQS_SHIFT              0x7f
#define BF_DRAM_CTL20_WR_DQS_SHIFT(v)           (((v) << 0) & 0x7f)

/**
 * Register: HW_DRAM_CTL21
 * Address: 0x54
 * SCT: no
*/
#define HW_DRAM_CTL21                           (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x54))
#define BP_DRAM_CTL21_OUT_OF_RANGE_LENGTH       8
#define BM_DRAM_CTL21_OUT_OF_RANGE_LENGTH       0x3ff00
#define BF_DRAM_CTL21_OUT_OF_RANGE_LENGTH(v)    (((v) << 8) & 0x3ff00)
#define BP_DRAM_CTL21_TRFC                      0
#define BM_DRAM_CTL21_TRFC                      0xff
#define BF_DRAM_CTL21_TRFC(v)                   (((v) << 0) & 0xff)

/**
 * Register: HW_DRAM_CTL22
 * Address: 0x58
 * SCT: no
*/
#define HW_DRAM_CTL22               (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x58))
#define BP_DRAM_CTL22_AHB0_WRCNT    16
#define BM_DRAM_CTL22_AHB0_WRCNT    0x7ff0000
#define BF_DRAM_CTL22_AHB0_WRCNT(v) (((v) << 16) & 0x7ff0000)
#define BP_DRAM_CTL22_AHB0_RDCNT    0
#define BM_DRAM_CTL22_AHB0_RDCNT    0x7ff
#define BF_DRAM_CTL22_AHB0_RDCNT(v) (((v) << 0) & 0x7ff)

/**
 * Register: HW_DRAM_CTL23
 * Address: 0x5c
 * SCT: no
*/
#define HW_DRAM_CTL23               (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x5c))
#define BP_DRAM_CTL23_AHB1_WRCNT    16
#define BM_DRAM_CTL23_AHB1_WRCNT    0x7ff0000
#define BF_DRAM_CTL23_AHB1_WRCNT(v) (((v) << 16) & 0x7ff0000)
#define BP_DRAM_CTL23_AHB1_RDCNT    0
#define BM_DRAM_CTL23_AHB1_RDCNT    0x7ff
#define BF_DRAM_CTL23_AHB1_RDCNT(v) (((v) << 0) & 0x7ff)

/**
 * Register: HW_DRAM_CTL24
 * Address: 0x60
 * SCT: no
*/
#define HW_DRAM_CTL24               (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x60))
#define BP_DRAM_CTL24_AHB2_WRCNT    16
#define BM_DRAM_CTL24_AHB2_WRCNT    0x7ff0000
#define BF_DRAM_CTL24_AHB2_WRCNT(v) (((v) << 16) & 0x7ff0000)
#define BP_DRAM_CTL24_AHB2_RDCNT    0
#define BM_DRAM_CTL24_AHB2_RDCNT    0x7ff
#define BF_DRAM_CTL24_AHB2_RDCNT(v) (((v) << 0) & 0x7ff)

/**
 * Register: HW_DRAM_CTL25
 * Address: 0x64
 * SCT: no
*/
#define HW_DRAM_CTL25               (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x64))
#define BP_DRAM_CTL25_AHB3_WRCNT    16
#define BM_DRAM_CTL25_AHB3_WRCNT    0x7ff0000
#define BF_DRAM_CTL25_AHB3_WRCNT(v) (((v) << 16) & 0x7ff0000)
#define BP_DRAM_CTL25_AHB3_RDCNT    0
#define BM_DRAM_CTL25_AHB3_RDCNT    0x7ff
#define BF_DRAM_CTL25_AHB3_RDCNT(v) (((v) << 0) & 0x7ff)

/**
 * Register: HW_DRAM_CTL26
 * Address: 0x68
 * SCT: no
*/
#define HW_DRAM_CTL26           (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x68))
#define BP_DRAM_CTL26_TREF      0
#define BM_DRAM_CTL26_TREF      0xfff
#define BF_DRAM_CTL26_TREF(v)   (((v) << 0) & 0xfff)

/**
 * Register: HW_DRAM_CTL27
 * Address: 0x6c
 * SCT: no
*/
#define HW_DRAM_CTL27   (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x6c))

/**
 * Register: HW_DRAM_CTL28
 * Address: 0x70
 * SCT: no
*/
#define HW_DRAM_CTL28   (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x70))

/**
 * Register: HW_DRAM_CTL29
 * Address: 0x74
 * SCT: no
*/
#define HW_DRAM_CTL29                           (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x74))
#define BP_DRAM_CTL29_LOWPOWER_INTERNAL_CNT     16
#define BM_DRAM_CTL29_LOWPOWER_INTERNAL_CNT     0xffff0000
#define BF_DRAM_CTL29_LOWPOWER_INTERNAL_CNT(v)  (((v) << 16) & 0xffff0000)
#define BP_DRAM_CTL29_LOWPOWER_EXTERNAL_CNT     0
#define BM_DRAM_CTL29_LOWPOWER_EXTERNAL_CNT     0xffff
#define BF_DRAM_CTL29_LOWPOWER_EXTERNAL_CNT(v)  (((v) << 0) & 0xffff)

/**
 * Register: HW_DRAM_CTL30
 * Address: 0x78
 * SCT: no
*/
#define HW_DRAM_CTL30                               (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x78))
#define BP_DRAM_CTL30_LOWPOWER_REFRESH_HOLD         16
#define BM_DRAM_CTL30_LOWPOWER_REFRESH_HOLD         0xffff0000
#define BF_DRAM_CTL30_LOWPOWER_REFRESH_HOLD(v)      (((v) << 16) & 0xffff0000)
#define BP_DRAM_CTL30_LOWPOWER_POWER_DOWN_CNT       0
#define BM_DRAM_CTL30_LOWPOWER_POWER_DOWN_CNT       0xffff
#define BF_DRAM_CTL30_LOWPOWER_POWER_DOWN_CNT(v)    (((v) << 0) & 0xffff)

/**
 * Register: HW_DRAM_CTL31
 * Address: 0x7c
 * SCT: no
*/
#define HW_DRAM_CTL31                               (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x7c))
#define BP_DRAM_CTL31_TDLL                          16
#define BM_DRAM_CTL31_TDLL                          0xffff0000
#define BF_DRAM_CTL31_TDLL(v)                       (((v) << 16) & 0xffff0000)
#define BP_DRAM_CTL31_LOWPOWER_SELF_REFRESH_CNT     0
#define BM_DRAM_CTL31_LOWPOWER_SELF_REFRESH_CNT     0xffff
#define BF_DRAM_CTL31_LOWPOWER_SELF_REFRESH_CNT(v)  (((v) << 0) & 0xffff)

/**
 * Register: HW_DRAM_CTL32
 * Address: 0x80
 * SCT: no
*/
#define HW_DRAM_CTL32               (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x80))
#define BP_DRAM_CTL32_TXSNR         16
#define BM_DRAM_CTL32_TXSNR         0xffff0000
#define BF_DRAM_CTL32_TXSNR(v)      (((v) << 16) & 0xffff0000)
#define BP_DRAM_CTL32_TRAS_MAX      0
#define BM_DRAM_CTL32_TRAS_MAX      0xffff
#define BF_DRAM_CTL32_TRAS_MAX(v)   (((v) << 0) & 0xffff)

/**
 * Register: HW_DRAM_CTL33
 * Address: 0x84
 * SCT: no
*/
#define HW_DRAM_CTL33               (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x84))
#define BP_DRAM_CTL33_VERSION       16
#define BM_DRAM_CTL33_VERSION       0xffff0000
#define BF_DRAM_CTL33_VERSION(v)    (((v) << 16) & 0xffff0000)
#define BP_DRAM_CTL33_TXSR          0
#define BM_DRAM_CTL33_TXSR          0xffff
#define BF_DRAM_CTL33_TXSR(v)       (((v) << 0) & 0xffff)

/**
 * Register: HW_DRAM_CTL34
 * Address: 0x88
 * SCT: no
*/
#define HW_DRAM_CTL34           (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x88))
#define BP_DRAM_CTL34_TINIT     0
#define BM_DRAM_CTL34_TINIT     0xffffff
#define BF_DRAM_CTL34_TINIT(v)  (((v) << 0) & 0xffffff)

/**
 * Register: HW_DRAM_CTL35
 * Address: 0x8c
 * SCT: no
*/
#define HW_DRAM_CTL35                       (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x8c))
#define BP_DRAM_CTL35_OUT_OF_RANGE_ADDR     0
#define BM_DRAM_CTL35_OUT_OF_RANGE_ADDR     0x7fffffff
#define BF_DRAM_CTL35_OUT_OF_RANGE_ADDR(v)  (((v) << 0) & 0x7fffffff)

/**
 * Register: HW_DRAM_CTL36
 * Address: 0x90
 * SCT: no
*/
#define HW_DRAM_CTL36                           (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x90))
#define BP_DRAM_CTL36_PWRUP_SREFRESH_EXIT       24
#define BM_DRAM_CTL36_PWRUP_SREFRESH_EXIT       0x1000000
#define BF_DRAM_CTL36_PWRUP_SREFRESH_EXIT(v)    (((v) << 24) & 0x1000000)
#define BP_DRAM_CTL36_ENABLE_QUICK_SREFRESH     16
#define BM_DRAM_CTL36_ENABLE_QUICK_SREFRESH     0x10000
#define BF_DRAM_CTL36_ENABLE_QUICK_SREFRESH(v)  (((v) << 16) & 0x10000)
#define BP_DRAM_CTL36_BUS_SHARE_ENABLE          8
#define BM_DRAM_CTL36_BUS_SHARE_ENABLE          0x100
#define BF_DRAM_CTL36_BUS_SHARE_ENABLE(v)       (((v) << 8) & 0x100)
#define BP_DRAM_CTL36_ACTIVE_AGING              0
#define BM_DRAM_CTL36_ACTIVE_AGING              0x1
#define BF_DRAM_CTL36_ACTIVE_AGING(v)           (((v) << 0) & 0x1)

/**
 * Register: HW_DRAM_CTL37
 * Address: 0x94
 * SCT: no
*/
#define HW_DRAM_CTL37                       (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x94))
#define BP_DRAM_CTL37_BUS_SHARE_TIMEOUT     8
#define BM_DRAM_CTL37_BUS_SHARE_TIMEOUT     0x3ff00
#define BF_DRAM_CTL37_BUS_SHARE_TIMEOUT(v)  (((v) << 8) & 0x3ff00)
#define BP_DRAM_CTL37_TREF_ENABLE           0
#define BM_DRAM_CTL37_TREF_ENABLE           0x1
#define BF_DRAM_CTL37_TREF_ENABLE(v)        (((v) << 0) & 0x1)

/**
 * Register: HW_DRAM_CTL38
 * Address: 0x98
 * SCT: no
*/
#define HW_DRAM_CTL38                   (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x98))
#define BP_DRAM_CTL38_EMRS2_DATA_0      16
#define BM_DRAM_CTL38_EMRS2_DATA_0      0x1fff0000
#define BF_DRAM_CTL38_EMRS2_DATA_0(v)   (((v) << 16) & 0x1fff0000)
#define BP_DRAM_CTL38_EMRS1_DATA        0
#define BM_DRAM_CTL38_EMRS1_DATA        0x1fff
#define BF_DRAM_CTL38_EMRS1_DATA(v)     (((v) << 0) & 0x1fff)

/**
 * Register: HW_DRAM_CTL39
 * Address: 0x9c
 * SCT: no
*/
#define HW_DRAM_CTL39                   (*(volatile unsigned long *)(REGS_DRAM_BASE + 0x9c))
#define BP_DRAM_CTL39_EMRS2_DATA_2      16
#define BM_DRAM_CTL39_EMRS2_DATA_2      0x1fff0000
#define BF_DRAM_CTL39_EMRS2_DATA_2(v)   (((v) << 16) & 0x1fff0000)
#define BP_DRAM_CTL39_EMRS2_DATA_1      0
#define BM_DRAM_CTL39_EMRS2_DATA_1      0x1fff
#define BF_DRAM_CTL39_EMRS2_DATA_1(v)   (((v) << 0) & 0x1fff)

/**
 * Register: HW_DRAM_CTL40
 * Address: 0xa0
 * SCT: no
*/
#define HW_DRAM_CTL40                   (*(volatile unsigned long *)(REGS_DRAM_BASE + 0xa0))
#define BP_DRAM_CTL40_TPDEX             16
#define BM_DRAM_CTL40_TPDEX             0xffff0000
#define BF_DRAM_CTL40_TPDEX(v)          (((v) << 16) & 0xffff0000)
#define BP_DRAM_CTL40_EMRS2_DATA_3      0
#define BM_DRAM_CTL40_EMRS2_DATA_3      0x1fff
#define BF_DRAM_CTL40_EMRS2_DATA_3(v)   (((v) << 0) & 0x1fff)

#endif /* __HEADERGEN__STMP3700__DRAM__H__ */
