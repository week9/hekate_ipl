/*
 * Copyright (c) 2020 CTCaer
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _MAX77812_H_
#define _MAX77812_H_

#define MAX77812_PHASE31_CPU_I2C_ADDR  0x31 // High power GPU. 2 Outputs: 3-phase M1 + 1-phase M4.
#define MAX77812_PHASE211_CPU_I2C_ADDR 0x33 // Low  power GPU. 3 Outputs: 2-phase M1 + 1-phase M3 + 1-phase M4.

#define MAX77812_REG_RSET			0x00
#define MAX77812_REG_INT_SRC		0x01
#define MAX77812_REG_INT_SRC_M		0x02
#define MAX77812_REG_TOPSYS_INT		0x03
#define MAX77812_REG_TOPSYS_INT_M	0x04
#define MAX77812_REG_TOPSYS_STAT	0x05
#define MAX77812_REG_EN_CTRL		0x06
#define  MAX77812_EN_CTRL_ENABLE      1
#define  MAX77812_EN_CTRL_EN_M1_SHIFT 0
#define  MAX77812_EN_CTRL_EN_M1_MASK  (1 << MAX77812_EN_CTRL_EN_M1_SHIFT)
#define  MAX77812_EN_CTRL_EN_M2_SHIFT 2
#define  MAX77812_EN_CTRL_EN_M2_MASK  (1 << MAX77812_EN_CTRL_EN_M2_SHIFT)
#define  MAX77812_EN_CTRL_EN_M3_SHIFT 4
#define  MAX77812_EN_CTRL_EN_M3_MASK  (1 << MAX77812_EN_CTRL_EN_M3_SHIFT)
#define  MAX77812_EN_CTRL_EN_M4_SHIFT 6
#define  MAX77812_EN_CTRL_EN_M4_MASK  (1 << MAX77812_EN_CTRL_EN_M4_SHIFT)
#define MAX77812_REG_STUP_DLY2		0x07
#define MAX77812_REG_STUP_DLY3		0x08
#define MAX77812_REG_STUP_DLY4		0x09
#define MAX77812_REG_SHDN_DLY1		0x0A
#define MAX77812_REG_SHDN_DLY2		0x0B
#define MAX77812_REG_SHDN_DLY3		0x0C
#define MAX77812_REG_SHDN_DLY4		0x0D
#define MAX77812_REG_WDTRSTB_DEB	0x0E
#define MAX77812_REG_GPI_FUNC		0x0F
#define MAX77812_REG_GPI_DEB1		0x10
#define MAX77812_REG_GPI_DEB2		0x11
#define MAX77812_REG_GPI_PD_CTRL	0x12
#define MAX77812_REG_PROT_CFG		0x13
#define MAX77812_REG_VERSION		0x14
#define MAX77812_REG_I2C_CFG		0x15
#define MAX77812_REG_BUCK_INT		0x20
#define MAX77812_REG_BUCK_INT_M		0x21
#define MAX77812_REG_BUCK_STAT		0x22
#define MAX77812_REG_M1_VOUT		0x23 // GPU.
#define MAX77812_REG_M2_VOUT		0x24
#define MAX77812_REG_M3_VOUT		0x25 // DRAM on PHASE211.
#define MAX77812_REG_M4_VOUT		0x26 // CPU.
#define MAX77812_REG_M1_VOUT_D		0x27
#define MAX77812_REG_M2_VOUT_D		0x28
#define MAX77812_REG_M3_VOUT_D		0x29
#define MAX77812_REG_M4_VOUT_D		0x2A
#define MAX77812_REG_M1_VOUT_S		0x2B
#define MAX77812_REG_M2_VOUT_S		0x2C
#define MAX77812_REG_M3_VOUT_S		0x2D
#define MAX77812_REG_M4_VOUT_S		0x2E
#define MAX77812_REG_M1_CFG			0x2F // HOS: M1_ILIM - 7.2A/4.8A.
#define MAX77812_REG_M2_CFG			0x30 // HOS: M2_ILIM - 7.2A/4.8A.
#define MAX77812_REG_M3_CFG			0x31 // HOS: M3_ILIM - 7.2A/4.8A.
#define MAX77812_REG_M4_CFG			0x32 // HOS: M4_ILIM - 7.2A/4.8A.
#define MAX77812_REG_GLB_CFG1		0x33 // HOS: B_SD_SR/B_SS_SR - 5mV/�s.
#define MAX77812_REG_GLB_CFG2		0x34 // HOS: B_RD_SR/B_RU_SR - 5mV/�s
#define MAX77812_REG_GLB_CFG3		0x35

/*! Protected area and settings only for MAX77812_ES2_VERSION */
#define MAX77812_REG_GLB_CFG4		0x36
#define MAX77812_REG_GLB_CFG5		0x37 // HOS: 0x3E. Unmasked write.
#define MAX77812_REG_GLB_CFG6		0x38 // HOS: 0x90. Unmasked write.
#define MAX77812_REG_GLB_CFG7		0x39
#define MAX77812_REG_GLB_CFG8		0x3A // HOS: 0x3A. Unmasked write.

#define MAX77812_REG_PROT_ACCESS	0xFD // 0x00: Lock, 0x5A: Unlock.
#define MAX77812_REG_MAX			0xFD

#define MAX77812_REG_EN_CTRL_MASK(n)		BIT(n)
#define MAX77812_START_SLEW_RATE_MASK		0x07
#define MAX77812_SHDN_SLEW_RATE_MASK		0x70
#define MAX77812_RAMPUP_SLEW_RATE_MASK		0x07
#define MAX77812_RAMPDOWN_SLEW_RATE_MASK	0x70
#define MAX77812_SLEW_RATE_SHIFT			4

#define MAX77812_OP_ACTIVE_DISCHARGE_MASK	BIT(7)
#define MAX77812_PEAK_CURRENT_LMT_MASK		0x70
#define MAX77812_SWITCH_FREQ_MASK			0x0C
#define MAX77812_FORCED_PWM_MASK			BIT(1)
#define MAX77812_SLEW_RATE_CNTRL_MASK		BIT(0)
#define MAX77812_START_SHD_DELAY_MASK		0x1F
#define MAX77812_VERSION_MASK				0x07
#define MAX77812_ES2_VERSION				0x04
#define MAX77812_QS_VERSION					0x05

#define MAX77812_BUCK_VOLT_MASK				0xFF

#endif
