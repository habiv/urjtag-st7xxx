/*
 * $Id$
 *
 * StrongARM SA-1110 OS Timer Registers
 * Copyright (C) 2002 ETC s.r.o.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * Written by Marcel Telka <marcel@telka.sk>, 2002.
 *
 * Documentation:
 * [1] Intel Corporation, "Intel StrongARM SA-1110 Microprocessor
 *     Developer's Manual", October 2001, Order Number: 278240-004
 * [2] Intel Corporation, "Intel StrongARM SA-1110 Microprocessor
 *     Specification Update", December 2001, Order Number: 278259-023
 *
 */

#ifndef	SA11X0_OST_H
#define	SA11X0_OST_H

#ifndef uint32_t
typedef	unsigned int	uint32_t;
#endif

/* OS Timer Registers */

#define	OST_BASE	0x90000000

typedef volatile struct OST_registers {
	uint32_t osmr[4];
	uint32_t oscr;
	uint32_t ossr;
	uint32_t ower;
	uint32_t oier;
} OST_registers;

#ifndef OST_pointer
#define	OST_pointer	((OST_registers*) OST_BASE)
#endif

#define	OSMR(i)		OST_pointer->osmr[i]
#define	OSCR		OST_pointer->oscr
#define	OSSR		OST_pointer->ossr
#define	OWER		OST_pointer->ower
#define	OIER		OST_pointer->oier

#endif	/* SA11X0_OST_H */