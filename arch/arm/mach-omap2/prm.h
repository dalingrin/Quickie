#ifndef __ARCH_ARM_MACH_OMAP2_PRM_H
#define __ARCH_ARM_MACH_OMAP2_PRM_H

/*
 * OMAP2/3 Power/Reset Management (PRM) register definitions
 *
 * Copyright (C) 2007-2008 Texas Instruments, Inc.
 * Copyright (C) 2007-2008 Nokia Corporation
 *
 * Written by Paul Walmsley
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include "prcm-common.h"

#define OMAP2420_PRM_REGADDR(module, reg)				\
			IO_ADDRESS(OMAP2420_PRM_BASE + (module) + (reg))
#define OMAP2430_PRM_REGADDR(module, reg)				\
			IO_ADDRESS(OMAP2430_PRM_BASE + (module) + (reg))
#define OMAP34XX_PRM_REGADDR(module, reg)				\
			IO_ADDRESS(OMAP3430_PRM_BASE + (module) + (reg))

/*
 * Architecture-specific global PRM registers
 * Use prm_{read,write}_mod_reg() with these registers.
 *
 * With a few exceptions, these are the register names beginning with
 * PRCM_* on 24xx, and PRM_* on 34xx.  (The exceptions are the
 * IRQSTATUS and IRQENABLE bits.)
 *
 */

/* Common registers for 24xx and 34xx in OCP_MOD */
#define OMAP2_PRM_IRQSTATUS_MPU_OFFSET		0x0018
#define OMAP2_PRM_IRQENABLE_MPU_OFFSET		0x001c

/* 24xx register offsets in OCP_MOD */
#define OMAP24XX_PRM_REVISION_OFFSET		0x0000
#define OMAP24XX_PRM_SYSCONFIG_OFFSET		0x0010

/* 34xx register offsets in OCP_MOD */
#define OMAP3430_PRM_REVISION_OFFSET		0x0004
#define OMAP3430_PRM_SYSCONFIG_OFFSET		0x0014

/* 24xx register offsets in OMAP24XX_GR_MOD (Same as OCP_MOD for 24xx) */
#define OMAP24XX_PRCM_VOLTCTRL_OFFSET		0x0050
#define OMAP24XX_PRCM_VOLTST_OFFSET		0x0054
#define OMAP24XX_PRCM_CLKSRC_CTRL_OFFSET	0x0060
#define OMAP24XX_PRCM_CLKOUT_CTRL_OFFSET	0x0070
#define OMAP24XX_PRCM_CLKEMUL_CTRL_OFFSET	0x0078
#define OMAP24XX_PRCM_CLKCFG_CTRL_OFFSET	0x0080
#define OMAP24XX_PRCM_CLKCFG_STATUS_OFFSET	0x0084
#define OMAP24XX_PRCM_VOLTSETUP_OFFSET		0x0090
#define OMAP24XX_PRCM_CLKSSETUP_OFFSET		0x0094
#define OMAP24XX_PRCM_POLCTRL_OFFSET		0x0098

/* 34xx register offsets in GR_MOD */
#define OMAP3_PRM_VC_SMPS_SA_OFFSET		0x0020
#define OMAP3_PRM_VC_SMPS_VOL_RA_OFFSET		0x0024
#define OMAP3_PRM_VC_SMPS_CMD_RA_OFFSET		0x0028
#define OMAP3_PRM_VC_CMD_VAL_0_OFFSET		0x002c
#define OMAP3_PRM_VC_CMD_VAL_1_OFFSET		0x0030
#define OMAP3_PRM_VC_CH_CONF_OFFSET		0x0034
#define OMAP3_PRM_VC_I2C_CFG_OFFSET		0x0038
#define OMAP3_PRM_VC_BYPASS_VAL_OFFSET		0x003c
#define OMAP3_PRM_RSTCTRL_OFFSET		0x0050
#define OMAP3_PRM_RSTTIME_OFFSET		0x0054
#define OMAP3_PRM_RSTST_OFFSET			0x0058
#define OMAP3_PRM_VOLTCTRL_OFFSET		0x0060
#define OMAP3_PRM_SRAM_PCHARGE_OFFSET		0x0064
#define OMAP3_PRM_CLKSRC_CTRL_OFFSET		0x0070
#define OMAP3_PRM_VOLTSETUP1_OFFSET		0x0090
#define OMAP3_PRM_VOLTOFFSET_OFFSET		0x0094
#define OMAP3_PRM_CLKSETUP_OFFSET		0x0098
#define OMAP3_PRM_POLCTRL_OFFSET		0x009c
#define OMAP3_PRM_VOLTSETUP2_OFFSET		0x00a0
#define OMAP3_PRM_VP1_CONFIG_OFFSET		0x00b0
#define OMAP3_PRM_VP1_VSTEPMIN_OFFSET		0x00b4
#define OMAP3_PRM_VP1_VSTEPMAX_OFFSET		0x00b8
#define OMAP3_PRM_VP1_VLIMITTO_OFFSET		0x00bc
#define OMAP3_PRM_VP1_VOLTAGE_OFFSET		0x00c0
#define OMAP3_PRM_VP1_STATUS_OFFSET		0x00c4
#define OMAP3_PRM_VP2_CONFIG_OFFSET		0x00d0
#define OMAP3_PRM_VP2_VSTEPMIN_OFFSET		0x00d4
#define OMAP3_PRM_VP2_VSTEPMAX_OFFSET		0x00d8
#define OMAP3_PRM_VP2_VLIMITTO_OFFSET		0x00dc
#define OMAP3_PRM_VP2_VOLTAGE_OFFSET		0x00e0
#define OMAP3_PRM_VP2_STATUS_OFFSET		0x00e4

/* 36xx register offsets in GR_MOD */
#define OMAP3_PRM_LDO_ABB_SETUP_OFFSET		0X00f0
#define OMAP3_PRM_LDO_ABB_CTRL_OFFSET		0x00f4

/* 34xx register offsets in CCR_MOD */
#define OMAP3_PRM_CLKSEL_OFFSET			0x0040
#define OMAP3_PRM_CLKOUT_CTRL_OFFSET		0x0070

/*
 * Module specific PRM registers from PRM_BASE + domain offset
 *
 * Use prm_{read,write}_mod_reg() with these registers.
 *
 * With a few exceptions, these are the register names beginning with
 * {PM,RM}_* on both architectures.  (The exceptions are the IRQSTATUS
 * and IRQENABLE bits.)
 *
 */

/* Registers appearing on both 24xx and 34xx */

#define RM_RSTCTRL					0x0050
#define RM_RSTTIME					0x0054
#define RM_RSTST					0x0058

#define PM_WKEN						0x00a0
#define PM_WKEN1					PM_WKEN
#define PM_WKST						0x00b0
#define PM_WKST1					PM_WKST
#define PM_WKDEP					0x00c8
#define PM_EVGENCTRL					0x00d4
#define PM_EVGENONTIM					0x00d8
#define PM_EVGENOFFTIM					0x00dc
#define PM_PWSTCTRL					0x00e0
#define PM_PWSTST					0x00e4
#define PM_PREPWSTST					0x00e8

/* Omap2 specific registers */
#define OMAP24XX_PM_WKEN2				0x00a4
#define OMAP24XX_PM_WKST2				0x00b4

#define OMAP24XX_PRCM_IRQSTATUS_DSP			0x00f0	/* IVA mod */
#define OMAP24XX_PRCM_IRQENABLE_DSP			0x00f4	/* IVA mod */
#define OMAP24XX_PRCM_IRQSTATUS_IVA			0x00f8
#define OMAP24XX_PRCM_IRQENABLE_IVA			0x00fc

/* Omap3 specific registers */
#define OMAP3430ES2_PM_WKEN3				0x00f0
#define OMAP3430ES2_PM_WKST3				0x00b8

#define OMAP3430_PM_MPUGRPSEL				0x00a4
#define OMAP3430_PM_MPUGRPSEL1				OMAP3430_PM_MPUGRPSEL
#define OMAP3430ES2_PM_MPUGRPSEL3			0x00f8

#define OMAP3430_PM_IVAGRPSEL				0x00a8
#define OMAP3430_PM_IVAGRPSEL1				OMAP3430_PM_IVAGRPSEL
#define OMAP3430ES2_PM_IVAGRPSEL3			0x00f4

#define OMAP3430_PM_PREPWSTST				0x00e8

#define OMAP3430_PRM_IRQSTATUS_IVA2			0x00f8
#define OMAP3430_PRM_IRQENABLE_IVA2			0x00fc

#ifndef __ASSEMBLER__

/* Power/reset management domain register get/set */
extern u32 prm_read_mod_reg(s16 module, u16 idx);
extern void prm_write_mod_reg(u32 val, s16 module, u16 idx);
extern u32 prm_rmw_mod_reg_bits(u32 mask, u32 bits, s16 module, s16 idx);

/* Read-modify-write bits in a PRM register (by domain) */
static inline u32 prm_set_mod_reg_bits(u32 bits, s16 module, s16 idx)
{
	return prm_rmw_mod_reg_bits(bits, bits, module, idx);
}

static inline u32 prm_clear_mod_reg_bits(u32 bits, s16 module, s16 idx)
{
	return prm_rmw_mod_reg_bits(bits, 0x0, module, idx);
}

#endif

/*
 * Bits common to specific registers
 *
 * The 3430 register and bit names are generally used,
 * since they tend to make more sense
 */

/* PM_EVGENONTIM_MPU */
/* Named PM_EVEGENONTIM_MPU on the 24XX */
#define OMAP_ONTIMEVAL_SHIFT				0
#define OMAP_ONTIMEVAL_MASK				(0xffffffff << 0)

/* PM_EVGENOFFTIM_MPU */
/* Named PM_EVEGENOFFTIM_MPU on the 24XX */
#define OMAP_OFFTIMEVAL_SHIFT				0
#define OMAP_OFFTIMEVAL_MASK				(0xffffffff << 0)

/* PRM_CLKSETUP and PRCM_VOLTSETUP */
/* Named PRCM_CLKSSETUP on the 24XX */
#define OMAP_SETUP_TIME_SHIFT				0
#define OMAP_SETUP_TIME_MASK				(0xffff << 0)

/* PRM_CLKSRC_CTRL */
/* Named PRCM_CLKSRC_CTRL on the 24XX */
#define OMAP_SYSCLKDIV_SHIFT				6
#define OMAP_SYSCLKDIV_MASK				(0x3 << 6)
#define OMAP_AUTOEXTCLKMODE_SHIFT			3
#define OMAP_AUTOEXTCLKMODE_MASK			(0x3 << 3)
#define OMAP_SYSCLKSEL_SHIFT				0
#define OMAP_SYSCLKSEL_MASK				(0x3 << 0)

/* PM_EVGENCTRL_MPU */
#define OMAP_OFFLOADMODE_SHIFT				3
#define OMAP_OFFLOADMODE_MASK				(0x3 << 3)
#define OMAP_ONLOADMODE_SHIFT				1
#define OMAP_ONLOADMODE_MASK				(0x3 << 1)
#define OMAP_ENABLE					(1 << 0)

/* PRM_RSTTIME */
/* Named RM_RSTTIME_WKUP on the 24xx */
#define OMAP_RSTTIME2_SHIFT				8
#define OMAP_RSTTIME2_MASK				(0x1f << 8)
#define OMAP_RSTTIME1_SHIFT				0
#define OMAP_RSTTIME1_MASK				(0xff << 0)

/* PRM_RSTCTRL */
/* Named RM_RSTCTRL_WKUP on the 24xx */
/* 2420 calls RST_DPLL3 'RST_DPLL' */
#define OMAP_RST_DPLL3					(1 << 2)
#define OMAP_RST_GS					(1 << 1)


/*
 * Bits common to module-shared registers
 *
 * Not all registers of a particular type support all of these bits -
 * check TRM if you are unsure
 */

/*
 * 24XX: PM_PWSTST_CORE, PM_PWSTST_GFX, PM_PWSTST_MPU, PM_PWSTST_DSP
 *
 * 2430: PM_PWSTST_MDM
 *
 * 3430: PM_PWSTST_IVA2, PM_PWSTST_MPU, PM_PWSTST_CORE, PM_PWSTST_GFX,
 *	 PM_PWSTST_DSS, PM_PWSTST_CAM, PM_PWSTST_PER, PM_PWSTST_EMU,
 *	 PM_PWSTST_NEON
 */
#define OMAP_INTRANSITION				(1 << 20)


/*
 * 24XX: PM_PWSTST_GFX, PM_PWSTST_DSP
 *
 * 2430: PM_PWSTST_MDM
 *
 * 3430: PM_PWSTST_IVA2, PM_PWSTST_MPU, PM_PWSTST_CORE, PM_PWSTST_GFX,
 *	 PM_PWSTST_DSS, PM_PWSTST_CAM, PM_PWSTST_PER, PM_PWSTST_EMU,
 *	 PM_PWSTST_NEON
 */
#define OMAP_POWERSTATEST_SHIFT				0
#define OMAP_POWERSTATEST_MASK				(0x3 << 0)

/*
 * 24XX: RM_RSTST_MPU and RM_RSTST_DSP - on 24XX, 'COREDOMAINWKUP_RST' is
 *	 called 'COREWKUP_RST'
 *
 * 3430: RM_RSTST_IVA2, RM_RSTST_MPU, RM_RSTST_GFX, RM_RSTST_DSS,
 *	 RM_RSTST_CAM, RM_RSTST_PER, RM_RSTST_NEON
 */
#define OMAP_COREDOMAINWKUP_RST				(1 << 3)

/*
 * 24XX: RM_RSTST_MPU, RM_RSTST_GFX, RM_RSTST_DSP
 *
 * 2430: RM_RSTST_MDM
 *
 * 3430: RM_RSTST_CORE, RM_RSTST_EMU
 */
#define OMAP_DOMAINWKUP_RST				(1 << 2)

/*
 * 24XX: RM_RSTST_MPU, RM_RSTST_WKUP, RM_RSTST_DSP
 *	 On 24XX, 'GLOBALWARM_RST' is called 'GLOBALWMPU_RST'.
 *
 * 2430: RM_RSTST_MDM
 *
 * 3430: RM_RSTST_CORE, RM_RSTST_EMU
 */
#define OMAP_GLOBALWARM_RST				(1 << 1)
#define OMAP_GLOBALCOLD_RST				(1 << 0)

/*
 * 24XX: PM_WKDEP_GFX, PM_WKDEP_MPU, PM_WKDEP_CORE, PM_WKDEP_DSP
 *	 2420 TRM sometimes uses "EN_WAKEUP" instead of "EN_WKUP"
 *
 * 2430: PM_WKDEP_MDM
 *
 * 3430: PM_WKDEP_IVA2, PM_WKDEP_GFX, PM_WKDEP_DSS, PM_WKDEP_CAM,
 *	 PM_WKDEP_PER
 */
#define OMAP_EN_WKUP_SHIFT				4
#define OMAP_EN_WKUP_MASK				(1 << 4)

/*
 * 24XX: PM_PWSTCTRL_MPU, PM_PWSTCTRL_CORE, PM_PWSTCTRL_GFX,
 *	 PM_PWSTCTRL_DSP
 *
 * 2430: PM_PWSTCTRL_MDM
 *
 * 3430: PM_PWSTCTRL_IVA2, PM_PWSTCTRL_CORE, PM_PWSTCTRL_GFX,
 *	 PM_PWSTCTRL_DSS, PM_PWSTCTRL_CAM, PM_PWSTCTRL_PER,
 *	 PM_PWSTCTRL_NEON
 */
#define OMAP_LOGICRETSTATE				(1 << 2)

/*
 * 24XX: PM_PWSTCTRL_MPU, PM_PWSTCTRL_CORE, PM_PWSTCTRL_GFX,
 *       PM_PWSTCTRL_DSP, PM_PWSTST_MPU
 *
 * 2430: PM_PWSTCTRL_MDM shared bits
 *
 * 3430: PM_PWSTCTRL_IVA2, PM_PWSTCTRL_MPU, PM_PWSTCTRL_CORE,
 *	 PM_PWSTCTRL_GFX, PM_PWSTCTRL_DSS, PM_PWSTCTRL_CAM, PM_PWSTCTRL_PER,
 *	 PM_PWSTCTRL_NEON shared bits
 */
#define OMAP_POWERSTATE_SHIFT				0
#define OMAP_POWERSTATE_MASK				(0x3 << 0)


#endif