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
#ifndef __HEADERGEN__STMP3700__EMI__H__
#define __HEADERGEN__STMP3700__EMI__H__

#define REGS_EMI_BASE (0x80020000)

#define REGS_EMI_VERSION "3.2.0"

/**
 * Register: HW_EMI_CTRL
 * Address: 0
 * SCT: yes
*/
#define HW_EMI_CTRL                     (*(volatile unsigned long *)(REGS_EMI_BASE + 0x0 + 0x0))
#define HW_EMI_CTRL_SET                 (*(volatile unsigned long *)(REGS_EMI_BASE + 0x0 + 0x4))
#define HW_EMI_CTRL_CLR                 (*(volatile unsigned long *)(REGS_EMI_BASE + 0x0 + 0x8))
#define HW_EMI_CTRL_TOG                 (*(volatile unsigned long *)(REGS_EMI_BASE + 0x0 + 0xc))
#define BP_EMI_CTRL_SFTRST              31
#define BM_EMI_CTRL_SFTRST              0x80000000
#define BF_EMI_CTRL_SFTRST(v)           (((v) << 31) & 0x80000000)
#define BP_EMI_CTRL_CLKGATE             30
#define BM_EMI_CTRL_CLKGATE             0x40000000
#define BF_EMI_CTRL_CLKGATE(v)          (((v) << 30) & 0x40000000)
#define BP_EMI_CTRL_MEM_WIDTH           6
#define BM_EMI_CTRL_MEM_WIDTH           0x40
#define BF_EMI_CTRL_MEM_WIDTH(v)        (((v) << 6) & 0x40)
#define BP_EMI_CTRL_WRITE_PROTECT       5
#define BM_EMI_CTRL_WRITE_PROTECT       0x20
#define BF_EMI_CTRL_WRITE_PROTECT(v)    (((v) << 5) & 0x20)
#define BP_EMI_CTRL_RESET_OUT           4
#define BM_EMI_CTRL_RESET_OUT           0x10
#define BF_EMI_CTRL_RESET_OUT(v)        (((v) << 4) & 0x10)
#define BP_EMI_CTRL_CE_SELECT           0
#define BM_EMI_CTRL_CE_SELECT           0xf
#define BV_EMI_CTRL_CE_SELECT__NONE     0x0
#define BV_EMI_CTRL_CE_SELECT__CE0      0x1
#define BV_EMI_CTRL_CE_SELECT__CE1      0x2
#define BV_EMI_CTRL_CE_SELECT__CE2      0x4
#define BV_EMI_CTRL_CE_SELECT__CE3      0x8
#define BF_EMI_CTRL_CE_SELECT(v)        (((v) << 0) & 0xf)
#define BF_EMI_CTRL_CE_SELECT_V(v)      ((BV_EMI_CTRL_CE_SELECT__##v << 0) & 0xf)

/**
 * Register: HW_EMI_STAT
 * Address: 0x10
 * SCT: no
*/
#define HW_EMI_STAT                         (*(volatile unsigned long *)(REGS_EMI_BASE + 0x10))
#define BP_EMI_STAT_DRAM_PRESENT            31
#define BM_EMI_STAT_DRAM_PRESENT            0x80000000
#define BF_EMI_STAT_DRAM_PRESENT(v)         (((v) << 31) & 0x80000000)
#define BP_EMI_STAT_NOR_PRESENT             30
#define BM_EMI_STAT_NOR_PRESENT             0x40000000
#define BF_EMI_STAT_NOR_PRESENT(v)          (((v) << 30) & 0x40000000)
#define BP_EMI_STAT_LARGE_DRAM_ENABLED      29
#define BM_EMI_STAT_LARGE_DRAM_ENABLED      0x20000000
#define BF_EMI_STAT_LARGE_DRAM_ENABLED(v)   (((v) << 29) & 0x20000000)
#define BP_EMI_STAT_DRAM_HALTED             1
#define BM_EMI_STAT_DRAM_HALTED             0x2
#define BV_EMI_STAT_DRAM_HALTED__NOT_HALTED 0x0
#define BV_EMI_STAT_DRAM_HALTED__HALTED     0x1
#define BF_EMI_STAT_DRAM_HALTED(v)          (((v) << 1) & 0x2)
#define BF_EMI_STAT_DRAM_HALTED_V(v)        ((BV_EMI_STAT_DRAM_HALTED__##v << 1) & 0x2)
#define BP_EMI_STAT_NOR_BUSY                0
#define BM_EMI_STAT_NOR_BUSY                0x1
#define BV_EMI_STAT_NOR_BUSY__NOT_BUSY      0x0
#define BV_EMI_STAT_NOR_BUSY__BUSY          0x1
#define BF_EMI_STAT_NOR_BUSY(v)             (((v) << 0) & 0x1)
#define BF_EMI_STAT_NOR_BUSY_V(v)           ((BV_EMI_STAT_NOR_BUSY__##v << 0) & 0x1)

/**
 * Register: HW_EMI_TIME
 * Address: 0x20
 * SCT: yes
*/
#define HW_EMI_TIME         (*(volatile unsigned long *)(REGS_EMI_BASE + 0x20 + 0x0))
#define HW_EMI_TIME_SET     (*(volatile unsigned long *)(REGS_EMI_BASE + 0x20 + 0x4))
#define HW_EMI_TIME_CLR     (*(volatile unsigned long *)(REGS_EMI_BASE + 0x20 + 0x8))
#define HW_EMI_TIME_TOG     (*(volatile unsigned long *)(REGS_EMI_BASE + 0x20 + 0xc))
#define BP_EMI_TIME_THZ     24
#define BM_EMI_TIME_THZ     0xf000000
#define BF_EMI_TIME_THZ(v)  (((v) << 24) & 0xf000000)
#define BP_EMI_TIME_TDH     16
#define BM_EMI_TIME_TDH     0xf0000
#define BF_EMI_TIME_TDH(v)  (((v) << 16) & 0xf0000)
#define BP_EMI_TIME_TDS     8
#define BM_EMI_TIME_TDS     0x1f00
#define BF_EMI_TIME_TDS(v)  (((v) << 8) & 0x1f00)
#define BP_EMI_TIME_TAS     0
#define BM_EMI_TIME_TAS     0xf
#define BF_EMI_TIME_TAS(v)  (((v) << 0) & 0xf)

/**
 * Register: HW_EMI_DDR_TEST_MODE_CSR
 * Address: 0x30
 * SCT: yes
*/
#define HW_EMI_DDR_TEST_MODE_CSR            (*(volatile unsigned long *)(REGS_EMI_BASE + 0x30 + 0x0))
#define HW_EMI_DDR_TEST_MODE_CSR_SET        (*(volatile unsigned long *)(REGS_EMI_BASE + 0x30 + 0x4))
#define HW_EMI_DDR_TEST_MODE_CSR_CLR        (*(volatile unsigned long *)(REGS_EMI_BASE + 0x30 + 0x8))
#define HW_EMI_DDR_TEST_MODE_CSR_TOG        (*(volatile unsigned long *)(REGS_EMI_BASE + 0x30 + 0xc))
#define BP_EMI_DDR_TEST_MODE_CSR_DONE       1
#define BM_EMI_DDR_TEST_MODE_CSR_DONE       0x2
#define BF_EMI_DDR_TEST_MODE_CSR_DONE(v)    (((v) << 1) & 0x2)
#define BP_EMI_DDR_TEST_MODE_CSR_START      0
#define BM_EMI_DDR_TEST_MODE_CSR_START      0x1
#define BF_EMI_DDR_TEST_MODE_CSR_START(v)   (((v) << 0) & 0x1)

/**
 * Register: HW_EMI_DEBUG
 * Address: 0x80
 * SCT: no
*/
#define HW_EMI_DEBUG                (*(volatile unsigned long *)(REGS_EMI_BASE + 0x80))
#define BP_EMI_DEBUG_NOR_STATE      0
#define BM_EMI_DEBUG_NOR_STATE      0xf
#define BF_EMI_DEBUG_NOR_STATE(v)   (((v) << 0) & 0xf)

/**
 * Register: HW_EMI_DDR_TEST_MODE_STATUS0
 * Address: 0x90
 * SCT: no
*/
#define HW_EMI_DDR_TEST_MODE_STATUS0            (*(volatile unsigned long *)(REGS_EMI_BASE + 0x90))
#define BP_EMI_DDR_TEST_MODE_STATUS0_ADDR0      0
#define BM_EMI_DDR_TEST_MODE_STATUS0_ADDR0      0x1fff
#define BF_EMI_DDR_TEST_MODE_STATUS0_ADDR0(v)   (((v) << 0) & 0x1fff)

/**
 * Register: HW_EMI_DDR_TEST_MODE_STATUS1
 * Address: 0xa0
 * SCT: no
*/
#define HW_EMI_DDR_TEST_MODE_STATUS1            (*(volatile unsigned long *)(REGS_EMI_BASE + 0xa0))
#define BP_EMI_DDR_TEST_MODE_STATUS1_ADDR1      0
#define BM_EMI_DDR_TEST_MODE_STATUS1_ADDR1      0x1fff
#define BF_EMI_DDR_TEST_MODE_STATUS1_ADDR1(v)   (((v) << 0) & 0x1fff)

/**
 * Register: HW_EMI_DDR_TEST_MODE_STATUS2
 * Address: 0xb0
 * SCT: no
*/
#define HW_EMI_DDR_TEST_MODE_STATUS2            (*(volatile unsigned long *)(REGS_EMI_BASE + 0xb0))
#define BP_EMI_DDR_TEST_MODE_STATUS2_DATA0      0
#define BM_EMI_DDR_TEST_MODE_STATUS2_DATA0      0xffffffff
#define BF_EMI_DDR_TEST_MODE_STATUS2_DATA0(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_EMI_DDR_TEST_MODE_STATUS3
 * Address: 0xc0
 * SCT: no
*/
#define HW_EMI_DDR_TEST_MODE_STATUS3            (*(volatile unsigned long *)(REGS_EMI_BASE + 0xc0))
#define BP_EMI_DDR_TEST_MODE_STATUS3_DATA1      0
#define BM_EMI_DDR_TEST_MODE_STATUS3_DATA1      0xffffffff
#define BF_EMI_DDR_TEST_MODE_STATUS3_DATA1(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_EMI_VERSION
 * Address: 0xf0
 * SCT: no
*/
#define HW_EMI_VERSION          (*(volatile unsigned long *)(REGS_EMI_BASE + 0xf0))
#define BP_EMI_VERSION_MAJOR    24
#define BM_EMI_VERSION_MAJOR    0xff000000
#define BF_EMI_VERSION_MAJOR(v) (((v) << 24) & 0xff000000)
#define BP_EMI_VERSION_MINOR    16
#define BM_EMI_VERSION_MINOR    0xff0000
#define BF_EMI_VERSION_MINOR(v) (((v) << 16) & 0xff0000)
#define BP_EMI_VERSION_STEP     0
#define BM_EMI_VERSION_STEP     0xffff
#define BF_EMI_VERSION_STEP(v)  (((v) << 0) & 0xffff)

#endif /* __HEADERGEN__STMP3700__EMI__H__ */
