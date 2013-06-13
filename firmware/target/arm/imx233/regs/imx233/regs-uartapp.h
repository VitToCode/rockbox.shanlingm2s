/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 2.1.7
 * XML versions: imx233:3.2.0
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
#ifndef __HEADERGEN__IMX233__UARTAPP__H__
#define __HEADERGEN__IMX233__UARTAPP__H__

#define REGS_UARTAPP_BASE(i) ((i) == 1 ? 0x8006c000 : 0x8006e000)

#define REGS_UARTAPP_VERSION "3.2.0"

/**
 * Register: HW_UARTAPP_CTRL0
 * Address: 0
 * SCT: yes
*/
#define HW_UARTAPP_CTRL0(d)             (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x0 + 0x0))
#define HW_UARTAPP_CTRL0_SET(d)         (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x0 + 0x4))
#define HW_UARTAPP_CTRL0_CLR(d)         (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x0 + 0x8))
#define HW_UARTAPP_CTRL0_TOG(d)         (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x0 + 0xc))
#define BP_UARTAPP_CTRL0_SFTRST         31
#define BM_UARTAPP_CTRL0_SFTRST         0x80000000
#define BF_UARTAPP_CTRL0_SFTRST(v)      (((v) << 31) & 0x80000000)
#define BP_UARTAPP_CTRL0_CLKGATE        30
#define BM_UARTAPP_CTRL0_CLKGATE        0x40000000
#define BF_UARTAPP_CTRL0_CLKGATE(v)     (((v) << 30) & 0x40000000)
#define BP_UARTAPP_CTRL0_RUN            29
#define BM_UARTAPP_CTRL0_RUN            0x20000000
#define BF_UARTAPP_CTRL0_RUN(v)         (((v) << 29) & 0x20000000)
#define BP_UARTAPP_CTRL0_RX_SOURCE      28
#define BM_UARTAPP_CTRL0_RX_SOURCE      0x10000000
#define BF_UARTAPP_CTRL0_RX_SOURCE(v)   (((v) << 28) & 0x10000000)
#define BP_UARTAPP_CTRL0_RXTO_ENABLE    27
#define BM_UARTAPP_CTRL0_RXTO_ENABLE    0x8000000
#define BF_UARTAPP_CTRL0_RXTO_ENABLE(v) (((v) << 27) & 0x8000000)
#define BP_UARTAPP_CTRL0_RXTIMEOUT      16
#define BM_UARTAPP_CTRL0_RXTIMEOUT      0x7ff0000
#define BF_UARTAPP_CTRL0_RXTIMEOUT(v)   (((v) << 16) & 0x7ff0000)
#define BP_UARTAPP_CTRL0_XFER_COUNT     0
#define BM_UARTAPP_CTRL0_XFER_COUNT     0xffff
#define BF_UARTAPP_CTRL0_XFER_COUNT(v)  (((v) << 0) & 0xffff)

/**
 * Register: HW_UARTAPP_CTRL1
 * Address: 0x10
 * SCT: yes
*/
#define HW_UARTAPP_CTRL1(d)             (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x10 + 0x0))
#define HW_UARTAPP_CTRL1_SET(d)         (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x10 + 0x4))
#define HW_UARTAPP_CTRL1_CLR(d)         (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x10 + 0x8))
#define HW_UARTAPP_CTRL1_TOG(d)         (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x10 + 0xc))
#define BP_UARTAPP_CTRL1_RSVD2          29
#define BM_UARTAPP_CTRL1_RSVD2          0xe0000000
#define BF_UARTAPP_CTRL1_RSVD2(v)       (((v) << 29) & 0xe0000000)
#define BP_UARTAPP_CTRL1_RUN            28
#define BM_UARTAPP_CTRL1_RUN            0x10000000
#define BF_UARTAPP_CTRL1_RUN(v)         (((v) << 28) & 0x10000000)
#define BP_UARTAPP_CTRL1_RSVD1          16
#define BM_UARTAPP_CTRL1_RSVD1          0xfff0000
#define BF_UARTAPP_CTRL1_RSVD1(v)       (((v) << 16) & 0xfff0000)
#define BP_UARTAPP_CTRL1_XFER_COUNT     0
#define BM_UARTAPP_CTRL1_XFER_COUNT     0xffff
#define BF_UARTAPP_CTRL1_XFER_COUNT(v)  (((v) << 0) & 0xffff)

/**
 * Register: HW_UARTAPP_CTRL2
 * Address: 0x20
 * SCT: yes
*/
#define HW_UARTAPP_CTRL2(d)                         (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x20 + 0x0))
#define HW_UARTAPP_CTRL2_SET(d)                     (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x20 + 0x4))
#define HW_UARTAPP_CTRL2_CLR(d)                     (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x20 + 0x8))
#define HW_UARTAPP_CTRL2_TOG(d)                     (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x20 + 0xc))
#define BP_UARTAPP_CTRL2_INVERT_RTS                 31
#define BM_UARTAPP_CTRL2_INVERT_RTS                 0x80000000
#define BF_UARTAPP_CTRL2_INVERT_RTS(v)              (((v) << 31) & 0x80000000)
#define BP_UARTAPP_CTRL2_INVERT_CTS                 30
#define BM_UARTAPP_CTRL2_INVERT_CTS                 0x40000000
#define BF_UARTAPP_CTRL2_INVERT_CTS(v)              (((v) << 30) & 0x40000000)
#define BP_UARTAPP_CTRL2_INVERT_TX                  29
#define BM_UARTAPP_CTRL2_INVERT_TX                  0x20000000
#define BF_UARTAPP_CTRL2_INVERT_TX(v)               (((v) << 29) & 0x20000000)
#define BP_UARTAPP_CTRL2_INVERT_RX                  28
#define BM_UARTAPP_CTRL2_INVERT_RX                  0x10000000
#define BF_UARTAPP_CTRL2_INVERT_RX(v)               (((v) << 28) & 0x10000000)
#define BP_UARTAPP_CTRL2_RTS_SEMAPHORE              27
#define BM_UARTAPP_CTRL2_RTS_SEMAPHORE              0x8000000
#define BF_UARTAPP_CTRL2_RTS_SEMAPHORE(v)           (((v) << 27) & 0x8000000)
#define BP_UARTAPP_CTRL2_DMAONERR                   26
#define BM_UARTAPP_CTRL2_DMAONERR                   0x4000000
#define BF_UARTAPP_CTRL2_DMAONERR(v)                (((v) << 26) & 0x4000000)
#define BP_UARTAPP_CTRL2_TXDMAE                     25
#define BM_UARTAPP_CTRL2_TXDMAE                     0x2000000
#define BF_UARTAPP_CTRL2_TXDMAE(v)                  (((v) << 25) & 0x2000000)
#define BP_UARTAPP_CTRL2_RXDMAE                     24
#define BM_UARTAPP_CTRL2_RXDMAE                     0x1000000
#define BF_UARTAPP_CTRL2_RXDMAE(v)                  (((v) << 24) & 0x1000000)
#define BP_UARTAPP_CTRL2_RSVD2                      23
#define BM_UARTAPP_CTRL2_RSVD2                      0x800000
#define BF_UARTAPP_CTRL2_RSVD2(v)                   (((v) << 23) & 0x800000)
#define BP_UARTAPP_CTRL2_RXIFLSEL                   20
#define BM_UARTAPP_CTRL2_RXIFLSEL                   0x700000
#define BV_UARTAPP_CTRL2_RXIFLSEL__NOT_EMPTY        0x0
#define BV_UARTAPP_CTRL2_RXIFLSEL__ONE_QUARTER      0x1
#define BV_UARTAPP_CTRL2_RXIFLSEL__ONE_HALF         0x2
#define BV_UARTAPP_CTRL2_RXIFLSEL__THREE_QUARTERS   0x3
#define BV_UARTAPP_CTRL2_RXIFLSEL__SEVEN_EIGHTHS    0x4
#define BV_UARTAPP_CTRL2_RXIFLSEL__INVALID5         0x5
#define BV_UARTAPP_CTRL2_RXIFLSEL__INVALID6         0x6
#define BV_UARTAPP_CTRL2_RXIFLSEL__INVALID7         0x7
#define BF_UARTAPP_CTRL2_RXIFLSEL(v)                (((v) << 20) & 0x700000)
#define BF_UARTAPP_CTRL2_RXIFLSEL_V(v)              ((BV_UARTAPP_CTRL2_RXIFLSEL__##v << 20) & 0x700000)
#define BP_UARTAPP_CTRL2_RSVD3                      19
#define BM_UARTAPP_CTRL2_RSVD3                      0x80000
#define BF_UARTAPP_CTRL2_RSVD3(v)                   (((v) << 19) & 0x80000)
#define BP_UARTAPP_CTRL2_TXIFLSEL                   16
#define BM_UARTAPP_CTRL2_TXIFLSEL                   0x70000
#define BV_UARTAPP_CTRL2_TXIFLSEL__EMPTY            0x0
#define BV_UARTAPP_CTRL2_TXIFLSEL__ONE_QUARTER      0x1
#define BV_UARTAPP_CTRL2_TXIFLSEL__ONE_HALF         0x2
#define BV_UARTAPP_CTRL2_TXIFLSEL__THREE_QUARTERS   0x3
#define BV_UARTAPP_CTRL2_TXIFLSEL__SEVEN_EIGHTHS    0x4
#define BV_UARTAPP_CTRL2_TXIFLSEL__INVALID5         0x5
#define BV_UARTAPP_CTRL2_TXIFLSEL__INVALID6         0x6
#define BV_UARTAPP_CTRL2_TXIFLSEL__INVALID7         0x7
#define BF_UARTAPP_CTRL2_TXIFLSEL(v)                (((v) << 16) & 0x70000)
#define BF_UARTAPP_CTRL2_TXIFLSEL_V(v)              ((BV_UARTAPP_CTRL2_TXIFLSEL__##v << 16) & 0x70000)
#define BP_UARTAPP_CTRL2_CTSEN                      15
#define BM_UARTAPP_CTRL2_CTSEN                      0x8000
#define BF_UARTAPP_CTRL2_CTSEN(v)                   (((v) << 15) & 0x8000)
#define BP_UARTAPP_CTRL2_RTSEN                      14
#define BM_UARTAPP_CTRL2_RTSEN                      0x4000
#define BF_UARTAPP_CTRL2_RTSEN(v)                   (((v) << 14) & 0x4000)
#define BP_UARTAPP_CTRL2_OUT2                       13
#define BM_UARTAPP_CTRL2_OUT2                       0x2000
#define BF_UARTAPP_CTRL2_OUT2(v)                    (((v) << 13) & 0x2000)
#define BP_UARTAPP_CTRL2_OUT1                       12
#define BM_UARTAPP_CTRL2_OUT1                       0x1000
#define BF_UARTAPP_CTRL2_OUT1(v)                    (((v) << 12) & 0x1000)
#define BP_UARTAPP_CTRL2_RTS                        11
#define BM_UARTAPP_CTRL2_RTS                        0x800
#define BF_UARTAPP_CTRL2_RTS(v)                     (((v) << 11) & 0x800)
#define BP_UARTAPP_CTRL2_DTR                        10
#define BM_UARTAPP_CTRL2_DTR                        0x400
#define BF_UARTAPP_CTRL2_DTR(v)                     (((v) << 10) & 0x400)
#define BP_UARTAPP_CTRL2_RXE                        9
#define BM_UARTAPP_CTRL2_RXE                        0x200
#define BF_UARTAPP_CTRL2_RXE(v)                     (((v) << 9) & 0x200)
#define BP_UARTAPP_CTRL2_TXE                        8
#define BM_UARTAPP_CTRL2_TXE                        0x100
#define BF_UARTAPP_CTRL2_TXE(v)                     (((v) << 8) & 0x100)
#define BP_UARTAPP_CTRL2_LBE                        7
#define BM_UARTAPP_CTRL2_LBE                        0x80
#define BF_UARTAPP_CTRL2_LBE(v)                     (((v) << 7) & 0x80)
#define BP_UARTAPP_CTRL2_USE_LCR2                   6
#define BM_UARTAPP_CTRL2_USE_LCR2                   0x40
#define BF_UARTAPP_CTRL2_USE_LCR2(v)                (((v) << 6) & 0x40)
#define BP_UARTAPP_CTRL2_RSVD4                      3
#define BM_UARTAPP_CTRL2_RSVD4                      0x38
#define BF_UARTAPP_CTRL2_RSVD4(v)                   (((v) << 3) & 0x38)
#define BP_UARTAPP_CTRL2_SIRLP                      2
#define BM_UARTAPP_CTRL2_SIRLP                      0x4
#define BF_UARTAPP_CTRL2_SIRLP(v)                   (((v) << 2) & 0x4)
#define BP_UARTAPP_CTRL2_SIREN                      1
#define BM_UARTAPP_CTRL2_SIREN                      0x2
#define BF_UARTAPP_CTRL2_SIREN(v)                   (((v) << 1) & 0x2)
#define BP_UARTAPP_CTRL2_UARTEN                     0
#define BM_UARTAPP_CTRL2_UARTEN                     0x1
#define BF_UARTAPP_CTRL2_UARTEN(v)                  (((v) << 0) & 0x1)

/**
 * Register: HW_UARTAPP_LINECTRL
 * Address: 0x30
 * SCT: yes
*/
#define HW_UARTAPP_LINECTRL(d)              (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x30 + 0x0))
#define HW_UARTAPP_LINECTRL_SET(d)          (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x30 + 0x4))
#define HW_UARTAPP_LINECTRL_CLR(d)          (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x30 + 0x8))
#define HW_UARTAPP_LINECTRL_TOG(d)          (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x30 + 0xc))
#define BP_UARTAPP_LINECTRL_BAUD_DIVINT     16
#define BM_UARTAPP_LINECTRL_BAUD_DIVINT     0xffff0000
#define BF_UARTAPP_LINECTRL_BAUD_DIVINT(v)  (((v) << 16) & 0xffff0000)
#define BP_UARTAPP_LINECTRL_RSVD            14
#define BM_UARTAPP_LINECTRL_RSVD            0xc000
#define BF_UARTAPP_LINECTRL_RSVD(v)         (((v) << 14) & 0xc000)
#define BP_UARTAPP_LINECTRL_BAUD_DIVFRAC    8
#define BM_UARTAPP_LINECTRL_BAUD_DIVFRAC    0x3f00
#define BF_UARTAPP_LINECTRL_BAUD_DIVFRAC(v) (((v) << 8) & 0x3f00)
#define BP_UARTAPP_LINECTRL_SPS             7
#define BM_UARTAPP_LINECTRL_SPS             0x80
#define BF_UARTAPP_LINECTRL_SPS(v)          (((v) << 7) & 0x80)
#define BP_UARTAPP_LINECTRL_WLEN            5
#define BM_UARTAPP_LINECTRL_WLEN            0x60
#define BF_UARTAPP_LINECTRL_WLEN(v)         (((v) << 5) & 0x60)
#define BP_UARTAPP_LINECTRL_FEN             4
#define BM_UARTAPP_LINECTRL_FEN             0x10
#define BF_UARTAPP_LINECTRL_FEN(v)          (((v) << 4) & 0x10)
#define BP_UARTAPP_LINECTRL_STP2            3
#define BM_UARTAPP_LINECTRL_STP2            0x8
#define BF_UARTAPP_LINECTRL_STP2(v)         (((v) << 3) & 0x8)
#define BP_UARTAPP_LINECTRL_EPS             2
#define BM_UARTAPP_LINECTRL_EPS             0x4
#define BF_UARTAPP_LINECTRL_EPS(v)          (((v) << 2) & 0x4)
#define BP_UARTAPP_LINECTRL_PEN             1
#define BM_UARTAPP_LINECTRL_PEN             0x2
#define BF_UARTAPP_LINECTRL_PEN(v)          (((v) << 1) & 0x2)
#define BP_UARTAPP_LINECTRL_BRK             0
#define BM_UARTAPP_LINECTRL_BRK             0x1
#define BF_UARTAPP_LINECTRL_BRK(v)          (((v) << 0) & 0x1)

/**
 * Register: HW_UARTAPP_LINECTRL2
 * Address: 0x40
 * SCT: yes
*/
#define HW_UARTAPP_LINECTRL2(d)                 (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x40 + 0x0))
#define HW_UARTAPP_LINECTRL2_SET(d)             (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x40 + 0x4))
#define HW_UARTAPP_LINECTRL2_CLR(d)             (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x40 + 0x8))
#define HW_UARTAPP_LINECTRL2_TOG(d)             (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x40 + 0xc))
#define BP_UARTAPP_LINECTRL2_BAUD_DIVINT        16
#define BM_UARTAPP_LINECTRL2_BAUD_DIVINT        0xffff0000
#define BF_UARTAPP_LINECTRL2_BAUD_DIVINT(v)     (((v) << 16) & 0xffff0000)
#define BP_UARTAPP_LINECTRL2_RSVD               14
#define BM_UARTAPP_LINECTRL2_RSVD               0xc000
#define BF_UARTAPP_LINECTRL2_RSVD(v)            (((v) << 14) & 0xc000)
#define BP_UARTAPP_LINECTRL2_BAUD_DIVFRAC       8
#define BM_UARTAPP_LINECTRL2_BAUD_DIVFRAC       0x3f00
#define BF_UARTAPP_LINECTRL2_BAUD_DIVFRAC(v)    (((v) << 8) & 0x3f00)
#define BP_UARTAPP_LINECTRL2_SPS                7
#define BM_UARTAPP_LINECTRL2_SPS                0x80
#define BF_UARTAPP_LINECTRL2_SPS(v)             (((v) << 7) & 0x80)
#define BP_UARTAPP_LINECTRL2_WLEN               5
#define BM_UARTAPP_LINECTRL2_WLEN               0x60
#define BF_UARTAPP_LINECTRL2_WLEN(v)            (((v) << 5) & 0x60)
#define BP_UARTAPP_LINECTRL2_FEN                4
#define BM_UARTAPP_LINECTRL2_FEN                0x10
#define BF_UARTAPP_LINECTRL2_FEN(v)             (((v) << 4) & 0x10)
#define BP_UARTAPP_LINECTRL2_STP2               3
#define BM_UARTAPP_LINECTRL2_STP2               0x8
#define BF_UARTAPP_LINECTRL2_STP2(v)            (((v) << 3) & 0x8)
#define BP_UARTAPP_LINECTRL2_EPS                2
#define BM_UARTAPP_LINECTRL2_EPS                0x4
#define BF_UARTAPP_LINECTRL2_EPS(v)             (((v) << 2) & 0x4)
#define BP_UARTAPP_LINECTRL2_PEN                1
#define BM_UARTAPP_LINECTRL2_PEN                0x2
#define BF_UARTAPP_LINECTRL2_PEN(v)             (((v) << 1) & 0x2)
#define BP_UARTAPP_LINECTRL2_RSVD1              0
#define BM_UARTAPP_LINECTRL2_RSVD1              0x1
#define BF_UARTAPP_LINECTRL2_RSVD1(v)           (((v) << 0) & 0x1)

/**
 * Register: HW_UARTAPP_INTR
 * Address: 0x50
 * SCT: yes
*/
#define HW_UARTAPP_INTR(d)          (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x50 + 0x0))
#define HW_UARTAPP_INTR_SET(d)      (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x50 + 0x4))
#define HW_UARTAPP_INTR_CLR(d)      (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x50 + 0x8))
#define HW_UARTAPP_INTR_TOG(d)      (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x50 + 0xc))
#define BP_UARTAPP_INTR_RSVD1       27
#define BM_UARTAPP_INTR_RSVD1       0xf8000000
#define BF_UARTAPP_INTR_RSVD1(v)    (((v) << 27) & 0xf8000000)
#define BP_UARTAPP_INTR_OEIEN       26
#define BM_UARTAPP_INTR_OEIEN       0x4000000
#define BF_UARTAPP_INTR_OEIEN(v)    (((v) << 26) & 0x4000000)
#define BP_UARTAPP_INTR_BEIEN       25
#define BM_UARTAPP_INTR_BEIEN       0x2000000
#define BF_UARTAPP_INTR_BEIEN(v)    (((v) << 25) & 0x2000000)
#define BP_UARTAPP_INTR_PEIEN       24
#define BM_UARTAPP_INTR_PEIEN       0x1000000
#define BF_UARTAPP_INTR_PEIEN(v)    (((v) << 24) & 0x1000000)
#define BP_UARTAPP_INTR_FEIEN       23
#define BM_UARTAPP_INTR_FEIEN       0x800000
#define BF_UARTAPP_INTR_FEIEN(v)    (((v) << 23) & 0x800000)
#define BP_UARTAPP_INTR_RTIEN       22
#define BM_UARTAPP_INTR_RTIEN       0x400000
#define BF_UARTAPP_INTR_RTIEN(v)    (((v) << 22) & 0x400000)
#define BP_UARTAPP_INTR_TXIEN       21
#define BM_UARTAPP_INTR_TXIEN       0x200000
#define BF_UARTAPP_INTR_TXIEN(v)    (((v) << 21) & 0x200000)
#define BP_UARTAPP_INTR_RXIEN       20
#define BM_UARTAPP_INTR_RXIEN       0x100000
#define BF_UARTAPP_INTR_RXIEN(v)    (((v) << 20) & 0x100000)
#define BP_UARTAPP_INTR_DSRMIEN     19
#define BM_UARTAPP_INTR_DSRMIEN     0x80000
#define BF_UARTAPP_INTR_DSRMIEN(v)  (((v) << 19) & 0x80000)
#define BP_UARTAPP_INTR_DCDMIEN     18
#define BM_UARTAPP_INTR_DCDMIEN     0x40000
#define BF_UARTAPP_INTR_DCDMIEN(v)  (((v) << 18) & 0x40000)
#define BP_UARTAPP_INTR_CTSMIEN     17
#define BM_UARTAPP_INTR_CTSMIEN     0x20000
#define BF_UARTAPP_INTR_CTSMIEN(v)  (((v) << 17) & 0x20000)
#define BP_UARTAPP_INTR_RIMIEN      16
#define BM_UARTAPP_INTR_RIMIEN      0x10000
#define BF_UARTAPP_INTR_RIMIEN(v)   (((v) << 16) & 0x10000)
#define BP_UARTAPP_INTR_RSVD2       11
#define BM_UARTAPP_INTR_RSVD2       0xf800
#define BF_UARTAPP_INTR_RSVD2(v)    (((v) << 11) & 0xf800)
#define BP_UARTAPP_INTR_OEIS        10
#define BM_UARTAPP_INTR_OEIS        0x400
#define BF_UARTAPP_INTR_OEIS(v)     (((v) << 10) & 0x400)
#define BP_UARTAPP_INTR_BEIS        9
#define BM_UARTAPP_INTR_BEIS        0x200
#define BF_UARTAPP_INTR_BEIS(v)     (((v) << 9) & 0x200)
#define BP_UARTAPP_INTR_PEIS        8
#define BM_UARTAPP_INTR_PEIS        0x100
#define BF_UARTAPP_INTR_PEIS(v)     (((v) << 8) & 0x100)
#define BP_UARTAPP_INTR_FEIS        7
#define BM_UARTAPP_INTR_FEIS        0x80
#define BF_UARTAPP_INTR_FEIS(v)     (((v) << 7) & 0x80)
#define BP_UARTAPP_INTR_RTIS        6
#define BM_UARTAPP_INTR_RTIS        0x40
#define BF_UARTAPP_INTR_RTIS(v)     (((v) << 6) & 0x40)
#define BP_UARTAPP_INTR_TXIS        5
#define BM_UARTAPP_INTR_TXIS        0x20
#define BF_UARTAPP_INTR_TXIS(v)     (((v) << 5) & 0x20)
#define BP_UARTAPP_INTR_RXIS        4
#define BM_UARTAPP_INTR_RXIS        0x10
#define BF_UARTAPP_INTR_RXIS(v)     (((v) << 4) & 0x10)
#define BP_UARTAPP_INTR_DSRMIS      3
#define BM_UARTAPP_INTR_DSRMIS      0x8
#define BF_UARTAPP_INTR_DSRMIS(v)   (((v) << 3) & 0x8)
#define BP_UARTAPP_INTR_DCDMIS      2
#define BM_UARTAPP_INTR_DCDMIS      0x4
#define BF_UARTAPP_INTR_DCDMIS(v)   (((v) << 2) & 0x4)
#define BP_UARTAPP_INTR_CTSMIS      1
#define BM_UARTAPP_INTR_CTSMIS      0x2
#define BF_UARTAPP_INTR_CTSMIS(v)   (((v) << 1) & 0x2)
#define BP_UARTAPP_INTR_RIMIS       0
#define BM_UARTAPP_INTR_RIMIS       0x1
#define BF_UARTAPP_INTR_RIMIS(v)    (((v) << 0) & 0x1)

/**
 * Register: HW_UARTAPP_DATA
 * Address: 0x60
 * SCT: no
*/
#define HW_UARTAPP_DATA(d)      (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x60))
#define BP_UARTAPP_DATA_DATA    0
#define BM_UARTAPP_DATA_DATA    0xffffffff
#define BF_UARTAPP_DATA_DATA(v) (((v) << 0) & 0xffffffff)

/**
 * Register: HW_UARTAPP_STAT
 * Address: 0x70
 * SCT: no
*/
#define HW_UARTAPP_STAT(d)                      (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x70))
#define BP_UARTAPP_STAT_PRESENT                 31
#define BM_UARTAPP_STAT_PRESENT                 0x80000000
#define BV_UARTAPP_STAT_PRESENT__UNAVAILABLE    0x0
#define BV_UARTAPP_STAT_PRESENT__AVAILABLE      0x1
#define BF_UARTAPP_STAT_PRESENT(v)              (((v) << 31) & 0x80000000)
#define BF_UARTAPP_STAT_PRESENT_V(v)            ((BV_UARTAPP_STAT_PRESENT__##v << 31) & 0x80000000)
#define BP_UARTAPP_STAT_HISPEED                 30
#define BM_UARTAPP_STAT_HISPEED                 0x40000000
#define BV_UARTAPP_STAT_HISPEED__UNAVAILABLE    0x0
#define BV_UARTAPP_STAT_HISPEED__AVAILABLE      0x1
#define BF_UARTAPP_STAT_HISPEED(v)              (((v) << 30) & 0x40000000)
#define BF_UARTAPP_STAT_HISPEED_V(v)            ((BV_UARTAPP_STAT_HISPEED__##v << 30) & 0x40000000)
#define BP_UARTAPP_STAT_BUSY                    29
#define BM_UARTAPP_STAT_BUSY                    0x20000000
#define BF_UARTAPP_STAT_BUSY(v)                 (((v) << 29) & 0x20000000)
#define BP_UARTAPP_STAT_CTS                     28
#define BM_UARTAPP_STAT_CTS                     0x10000000
#define BF_UARTAPP_STAT_CTS(v)                  (((v) << 28) & 0x10000000)
#define BP_UARTAPP_STAT_TXFE                    27
#define BM_UARTAPP_STAT_TXFE                    0x8000000
#define BF_UARTAPP_STAT_TXFE(v)                 (((v) << 27) & 0x8000000)
#define BP_UARTAPP_STAT_RXFF                    26
#define BM_UARTAPP_STAT_RXFF                    0x4000000
#define BF_UARTAPP_STAT_RXFF(v)                 (((v) << 26) & 0x4000000)
#define BP_UARTAPP_STAT_TXFF                    25
#define BM_UARTAPP_STAT_TXFF                    0x2000000
#define BF_UARTAPP_STAT_TXFF(v)                 (((v) << 25) & 0x2000000)
#define BP_UARTAPP_STAT_RXFE                    24
#define BM_UARTAPP_STAT_RXFE                    0x1000000
#define BF_UARTAPP_STAT_RXFE(v)                 (((v) << 24) & 0x1000000)
#define BP_UARTAPP_STAT_RXBYTE_INVALID          20
#define BM_UARTAPP_STAT_RXBYTE_INVALID          0xf00000
#define BF_UARTAPP_STAT_RXBYTE_INVALID(v)       (((v) << 20) & 0xf00000)
#define BP_UARTAPP_STAT_OERR                    19
#define BM_UARTAPP_STAT_OERR                    0x80000
#define BF_UARTAPP_STAT_OERR(v)                 (((v) << 19) & 0x80000)
#define BP_UARTAPP_STAT_BERR                    18
#define BM_UARTAPP_STAT_BERR                    0x40000
#define BF_UARTAPP_STAT_BERR(v)                 (((v) << 18) & 0x40000)
#define BP_UARTAPP_STAT_PERR                    17
#define BM_UARTAPP_STAT_PERR                    0x20000
#define BF_UARTAPP_STAT_PERR(v)                 (((v) << 17) & 0x20000)
#define BP_UARTAPP_STAT_FERR                    16
#define BM_UARTAPP_STAT_FERR                    0x10000
#define BF_UARTAPP_STAT_FERR(v)                 (((v) << 16) & 0x10000)
#define BP_UARTAPP_STAT_RXCOUNT                 0
#define BM_UARTAPP_STAT_RXCOUNT                 0xffff
#define BF_UARTAPP_STAT_RXCOUNT(v)              (((v) << 0) & 0xffff)

/**
 * Register: HW_UARTAPP_DEBUG
 * Address: 0x80
 * SCT: no
*/
#define HW_UARTAPP_DEBUG(d)             (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x80))
#define BP_UARTAPP_DEBUG_RXIBAUD_DIV    16
#define BM_UARTAPP_DEBUG_RXIBAUD_DIV    0xffff0000
#define BF_UARTAPP_DEBUG_RXIBAUD_DIV(v) (((v) << 16) & 0xffff0000)
#define BP_UARTAPP_DEBUG_RXFBAUD_DIV    10
#define BM_UARTAPP_DEBUG_RXFBAUD_DIV    0xfc00
#define BF_UARTAPP_DEBUG_RXFBAUD_DIV(v) (((v) << 10) & 0xfc00)
#define BP_UARTAPP_DEBUG_RSVD1          6
#define BM_UARTAPP_DEBUG_RSVD1          0x3c0
#define BF_UARTAPP_DEBUG_RSVD1(v)       (((v) << 6) & 0x3c0)
#define BP_UARTAPP_DEBUG_TXDMARUN       5
#define BM_UARTAPP_DEBUG_TXDMARUN       0x20
#define BF_UARTAPP_DEBUG_TXDMARUN(v)    (((v) << 5) & 0x20)
#define BP_UARTAPP_DEBUG_RXDMARUN       4
#define BM_UARTAPP_DEBUG_RXDMARUN       0x10
#define BF_UARTAPP_DEBUG_RXDMARUN(v)    (((v) << 4) & 0x10)
#define BP_UARTAPP_DEBUG_TXCMDEND       3
#define BM_UARTAPP_DEBUG_TXCMDEND       0x8
#define BF_UARTAPP_DEBUG_TXCMDEND(v)    (((v) << 3) & 0x8)
#define BP_UARTAPP_DEBUG_RXCMDEND       2
#define BM_UARTAPP_DEBUG_RXCMDEND       0x4
#define BF_UARTAPP_DEBUG_RXCMDEND(v)    (((v) << 2) & 0x4)
#define BP_UARTAPP_DEBUG_TXDMARQ        1
#define BM_UARTAPP_DEBUG_TXDMARQ        0x2
#define BF_UARTAPP_DEBUG_TXDMARQ(v)     (((v) << 1) & 0x2)
#define BP_UARTAPP_DEBUG_RXDMARQ        0
#define BM_UARTAPP_DEBUG_RXDMARQ        0x1
#define BF_UARTAPP_DEBUG_RXDMARQ(v)     (((v) << 0) & 0x1)

/**
 * Register: HW_UARTAPP_VERSION
 * Address: 0x90
 * SCT: no
*/
#define HW_UARTAPP_VERSION(d)       (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0x90))
#define BP_UARTAPP_VERSION_MAJOR    24
#define BM_UARTAPP_VERSION_MAJOR    0xff000000
#define BF_UARTAPP_VERSION_MAJOR(v) (((v) << 24) & 0xff000000)
#define BP_UARTAPP_VERSION_MINOR    16
#define BM_UARTAPP_VERSION_MINOR    0xff0000
#define BF_UARTAPP_VERSION_MINOR(v) (((v) << 16) & 0xff0000)
#define BP_UARTAPP_VERSION_STEP     0
#define BM_UARTAPP_VERSION_STEP     0xffff
#define BF_UARTAPP_VERSION_STEP(v)  (((v) << 0) & 0xffff)

/**
 * Register: HW_UARTAPP_AUTOBAUD
 * Address: 0xa0
 * SCT: no
*/
#define HW_UARTAPP_AUTOBAUD(d)                      (*(volatile unsigned long *)(REGS_UARTAPP_BASE(d) + 0xa0))
#define BP_UARTAPP_AUTOBAUD_REFCHAR1                24
#define BM_UARTAPP_AUTOBAUD_REFCHAR1                0xff000000
#define BF_UARTAPP_AUTOBAUD_REFCHAR1(v)             (((v) << 24) & 0xff000000)
#define BP_UARTAPP_AUTOBAUD_REFCHAR0                16
#define BM_UARTAPP_AUTOBAUD_REFCHAR0                0xff0000
#define BF_UARTAPP_AUTOBAUD_REFCHAR0(v)             (((v) << 16) & 0xff0000)
#define BP_UARTAPP_AUTOBAUD_RSVD1                   5
#define BM_UARTAPP_AUTOBAUD_RSVD1                   0xffe0
#define BF_UARTAPP_AUTOBAUD_RSVD1(v)                (((v) << 5) & 0xffe0)
#define BP_UARTAPP_AUTOBAUD_UPDATE_TX               4
#define BM_UARTAPP_AUTOBAUD_UPDATE_TX               0x10
#define BF_UARTAPP_AUTOBAUD_UPDATE_TX(v)            (((v) << 4) & 0x10)
#define BP_UARTAPP_AUTOBAUD_TWO_REF_CHARS           3
#define BM_UARTAPP_AUTOBAUD_TWO_REF_CHARS           0x8
#define BF_UARTAPP_AUTOBAUD_TWO_REF_CHARS(v)        (((v) << 3) & 0x8)
#define BP_UARTAPP_AUTOBAUD_START_WITH_RUNBIT       2
#define BM_UARTAPP_AUTOBAUD_START_WITH_RUNBIT       0x4
#define BF_UARTAPP_AUTOBAUD_START_WITH_RUNBIT(v)    (((v) << 2) & 0x4)
#define BP_UARTAPP_AUTOBAUD_START_BAUD_DETECT       1
#define BM_UARTAPP_AUTOBAUD_START_BAUD_DETECT       0x2
#define BF_UARTAPP_AUTOBAUD_START_BAUD_DETECT(v)    (((v) << 1) & 0x2)
#define BP_UARTAPP_AUTOBAUD_BAUD_DETECT_ENABLE      0
#define BM_UARTAPP_AUTOBAUD_BAUD_DETECT_ENABLE      0x1
#define BF_UARTAPP_AUTOBAUD_BAUD_DETECT_ENABLE(v)   (((v) << 0) & 0x1)

#endif /* __HEADERGEN__IMX233__UARTAPP__H__ */
