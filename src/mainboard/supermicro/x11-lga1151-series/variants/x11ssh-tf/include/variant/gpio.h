/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef _GPIO_X11SSH_TF_H
#define _GPIO_X11SSH_TF_H

#include <soc/gpe.h>
#include <soc/gpio.h>

static const struct pad_config gpio_table[] = {
	/* GPIO Group GPP_A */
	PAD_CFG_NF(GPP_A0, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A1, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A2, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A3, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A4, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A5, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A6, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A7, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A8, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A9, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A10, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A11, NONE, DEEP, NF1),
	PAD_CFG_GPO(GPP_A12, 1, PLTRST),
	PAD_CFG_NF(GPP_A13, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A14, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A15, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A16, NONE, DEEP, NF1),
	PAD_NC(GPP_A17, NONE),
	PAD_CFG_GPI_INT(GPP_A18, NONE, PLTRST, OFF),
	/* GPP_A19 - RESERVED */
	PAD_NC(GPP_A20, NONE),
	PAD_NC(GPP_A21, NONE),
	PAD_NC(GPP_A22, NONE),
	PAD_NC(GPP_A23, NONE),
	PAD_CFG_GPO(GPP_B0, 1, DEEP),
	PAD_CFG_GPO(GPP_B1, 1, DEEP),
	PAD_NC(GPP_B2, NONE),
	PAD_NC(GPP_B3, NONE),
	PAD_NC(GPP_B4, NONE),
	PAD_NC(GPP_B5, NONE),
	PAD_NC(GPP_B6, NONE),
	PAD_NC(GPP_B7, NONE),
	PAD_NC(GPP_B8, NONE),
	PAD_NC(GPP_B9, NONE),
	PAD_NC(GPP_B10, NONE),
	PAD_CFG_GPO(GPP_B11, 0, DEEP),
	PAD_CFG_NF(GPP_B12, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_B13, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_B14, NONE, PLTRST, NF1),
	PAD_NC(GPP_B15, NONE),
	PAD_NC(GPP_B16, NONE),
	PAD_NC(GPP_B17, NONE),
	PAD_NC(GPP_B18, NONE),
	PAD_NC(GPP_B19, NONE),
	PAD_CFG_GPO(GPP_B20, 1, PLTRST),
	PAD_NC(GPP_B21, NONE),
	PAD_NC(GPP_B22, NONE),
	PAD_CFG_NF(GPP_B23, NONE, DEEP, NF2),

	/* GPIO Group GPP_C */
	/* GPP_C0 - RESERVED */
	/* GPP_C1 - RESERVED */
	PAD_NC(GPP_C2, NONE),
	/* GPP_C3 - RESERVED */
	/* GPP_C4 - RESERVED */
	PAD_CFG_GPO(GPP_C5, 1, DEEP),
	/* GPP_C6 - RESERVED */
	/* GPP_C7 - RESERVED */
	PAD_CFG_GPI_INT(GPP_C8, NONE, PLTRST, OFF),
	PAD_CFG_GPI_INT(GPP_C9, NONE, PLTRST, OFF),
	PAD_CFG_GPI_INT(GPP_C10, NONE, PLTRST, OFF),
	PAD_NC(GPP_C11, NONE),
	PAD_NC(GPP_C12, NONE),
	PAD_NC(GPP_C13, NONE),
	PAD_NC(GPP_C14, NONE),
	PAD_NC(GPP_C15, NONE),
	PAD_NC(GPP_C16, NONE),
	PAD_NC(GPP_C17, NONE),
	PAD_NC(GPP_C18, NONE),
	PAD_NC(GPP_C19, NONE),
	PAD_NC(GPP_C20, NONE),
	PAD_NC(GPP_C21, NONE),
	PAD_CFG_GPI_SMI(GPP_C22, UP_20K, DEEP, EDGE_SINGLE, NONE),
	PAD_NC(GPP_C23, NONE),

	/* GPIO Group GPP_D */
	PAD_NC(GPP_D0, NONE),
	PAD_CFG_GPO(GPP_D1, 1, DEEP),
	PAD_CFG_GPI_NMI(GPP_D2, UP_20K, DEEP, EDGE_SINGLE, NONE),
	PAD_NC(GPP_D3, NONE),
	PAD_CFG_GPO(GPP_D4, 0, PLTRST),
	PAD_NC(GPP_D5, NONE),
	PAD_NC(GPP_D6, NONE),
	PAD_NC(GPP_D7, NONE),
	PAD_NC(GPP_D8, NONE),
	PAD_NC(GPP_D9, NONE),
	PAD_NC(GPP_D10, NONE),
	PAD_NC(GPP_D11, NONE),
	PAD_NC(GPP_D12, NONE),
	PAD_NC(GPP_D13, NONE),
	PAD_NC(GPP_D14, NONE),
	PAD_NC(GPP_D15, NONE),
	PAD_NC(GPP_D16, NONE),
	PAD_NC(GPP_D17, NONE),
	PAD_CFG_GPO(GPP_D18, 1, PLTRST),
	PAD_CFG_GPO(GPP_D19, 1, PLTRST),
	PAD_NC(GPP_D20, NONE),
	PAD_CFG_GPO(GPP_D21, 0, DEEP),
	PAD_CFG_GPI_INT(GPP_D22, NONE, RSMRST, OFF),
	PAD_NC(GPP_D23, NONE),

	/* GPIO Group GPP_E */
	PAD_CFG_NF(GPP_E0, NONE, DEEP, NF1),
	PAD_NC(GPP_E1, NONE),
	PAD_NC(GPP_E2, NONE),
	PAD_NC(GPP_E3, NONE),
	PAD_NC(GPP_E4, NONE),
	PAD_NC(GPP_E5, NONE),
	PAD_CFG_GPI_NMI(GPP_E6, UP_20K, PLTRST, EDGE_SINGLE, NONE),
	PAD_NC(GPP_E7, NONE),
	PAD_CFG_NF(GPP_E8, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_E9, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_E10, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_E11, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_E12, NONE, DEEP, NF1),

	/* GPIO Group GPP_F */
	PAD_NC(GPP_F0, NONE),
	PAD_NC(GPP_F1, NONE),
	PAD_NC(GPP_F2, NONE),
	PAD_NC(GPP_F3, NONE),
	PAD_NC(GPP_F4, NONE),
	PAD_CFG_GPI_APIC_HIGH(GPP_F5, NONE, PLTRST),
	PAD_CFG_GPO(GPP_F6, 1, PLTRST),
	PAD_CFG_GPO(GPP_F7, 1, PLTRST),
	PAD_CFG_GPO(GPP_F8, 1, PLTRST),
	PAD_CFG_GPI_INT(GPP_F9, NONE, PLTRST, OFF),
	PAD_CFG_NF(GPP_F10, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_F11, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_F12, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_F13, NONE, DEEP, NF1),
	PAD_NC(GPP_F14, NONE),
	PAD_CFG_NF(GPP_F15, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_F16, NONE, DEEP, NF1),
	PAD_NC(GPP_F17, NONE),
	PAD_NC(GPP_F18, NONE),
	PAD_NC(GPP_F19, NONE),
	PAD_NC(GPP_F20, NONE),
	PAD_NC(GPP_F21, NONE),
	PAD_NC(GPP_F22, NONE),
	PAD_CFG_GPO(GPP_F23, 0, RSMRST),
	PAD_CFG_GPI_INT(GPP_G0, NONE, DEEP, OFF),
	PAD_CFG_GPI_INT(GPP_G1, NONE, DEEP, OFF),
	PAD_CFG_GPI_INT(GPP_G2, NONE, DEEP, OFF),
	PAD_CFG_GPI_INT(GPP_G3, NONE, DEEP, OFF),
	PAD_NC(GPP_G4, NONE),
	PAD_NC(GPP_G5, NONE),
	PAD_NC(GPP_G6, NONE),
	PAD_NC(GPP_G7, NONE),
	PAD_NC(GPP_G8, NONE),
	PAD_NC(GPP_G9, NONE),
	PAD_NC(GPP_G10, NONE),
	PAD_NC(GPP_G11, NONE),
	PAD_CFG_GPI_INT(GPP_G12, NONE, PLTRST, OFF),
	PAD_CFG_GPI_INT(GPP_G13, NONE, PLTRST, OFF),
	PAD_CFG_GPI_INT(GPP_G14, NONE, PLTRST, OFF),
	PAD_CFG_GPI_INT(GPP_G15, NONE, PLTRST, OFF),
	PAD_CFG_GPI_INT(GPP_G16, NONE, PLTRST, OFF),
	PAD_NC(GPP_G17, NONE),
	PAD_CFG_NF(GPP_G18, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_G19, NONE, DEEP, NF1),
	PAD_NC(GPP_G20, NONE),
	PAD_NC(GPP_G21, NONE),
	PAD_NC(GPP_G22, NONE),
	PAD_NC(GPP_G23, NONE),
	PAD_CFG_GPO(GPP_H0, 1, DEEP),
	PAD_CFG_GPI_INT(GPP_H1, NONE, PLTRST, OFF),
	PAD_CFG_GPO(GPP_H2, 1, DEEP),
	PAD_CFG_NF(GPP_H3, NONE, DEEP, NF1),
	PAD_CFG_GPI_INT(GPP_H4, NONE, PLTRST, OFF),
	PAD_CFG_GPO(GPP_H5, 1, PLTRST),
	PAD_CFG_GPO(GPP_H6, 1, PLTRST),
	PAD_CFG_GPO(GPP_H7, 1, PLTRST),
	PAD_CFG_GPO(GPP_H8, 1, PLTRST),
	PAD_CFG_GPO(GPP_H9, 1, PLTRST),
	PAD_CFG_NF(GPP_H10, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_H11, NONE, DEEP, NF1),
	PAD_NC(GPP_H12, NONE),
	PAD_CFG_NF(GPP_H13, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_H14, NONE, DEEP, NF1),
	PAD_NC(GPP_H15, NONE),
	PAD_CFG_NF(GPP_H16, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_H17, NONE, DEEP, NF1),
	PAD_NC(GPP_H18, NONE),
	PAD_CFG_GPO(GPP_H19, 1, PLTRST),
	PAD_CFG_GPO(GPP_H20, 1, PLTRST),
	PAD_CFG_GPO(GPP_H21, 1, PLTRST),
	PAD_CFG_GPO(GPP_H22, 1, PLTRST),
	PAD_CFG_GPO(GPP_H23, 1, PLTRST),

	/* GPIO Group GPD */
	PAD_NC(GPD0, NONE),
	PAD_NC(GPD1, NONE),
	PAD_CFG_NF(GPD2, NONE, PWROK, NF1),
	PAD_CFG_NF(GPD3, NONE, PWROK, NF1),
	PAD_CFG_NF(GPD4, NONE, PWROK, NF1),
	PAD_CFG_NF(GPD5, NONE, PWROK, NF1),
	PAD_CFG_NF(GPD6, NONE, PWROK, NF1),
	PAD_NC(GPD7, NONE),
	PAD_CFG_NF(GPD8, NONE, PWROK, NF1),
	PAD_NC(GPD9, NONE),
	PAD_NC(GPD10, NONE),
	PAD_NC(GPD11, NONE),

	/* GPIO Group GPP_I */
	PAD_CFG_NF(GPP_I0, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_I1, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_I2, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_I3, NONE, PLTRST, NF1),
	PAD_NC(GPP_I4, NONE),
	PAD_CFG_NF(GPP_I5, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_I6, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_I7, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_I8, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_I9, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_I10, NONE, DEEP, NF1),
};

static const struct pad_config early_gpio_table[] = {
	/* Early LPC configuration in romstage */
	PAD_CFG_NF(GPP_A1, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A2, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A3, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A4, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A5, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A6, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A8, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A9, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_A10, NONE, DEEP, NF1),
};

#endif /* _GPIO_X11SSH_TF_H */
