/*
 * Gearsystem - Sega Master System / Game Gear Emulator
 * Copyright (C) 2013  Ignacio Sanchez

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/ 
 * 
 */

#ifndef OPCODEFDCB_NAMES_H
#define	OPCODEFDCB_NAMES_H

#ifdef DISASM_GEARSYSTEM

static const char* kOPCodeFDCBNames[256] = {
    "RLC (IY+d),B (UNDOCUMENTED)",
    "RLC (IY+d),C (UNDOCUMENTED)",
    "RLC (IY+d),D (UNDOCUMENTED)",
    "RLC (IY+d),E (UNDOCUMENTED)",
    "RLC (IY+d),H (UNDOCUMENTED)",
    "RLC (IY+d),L (UNDOCUMENTED)",
    "RLC (IY+d)",
    "RLC (IY+d),A (UNDOCUMENTED)",
    "RRC (IY+d),B (UNDOCUMENTED)",
    "RRC (IY+d),C (UNDOCUMENTED)",
    "RRC (IY+d),D (UNDOCUMENTED)",
    "RRC (IY+d),E (UNDOCUMENTED)",
    "RRC (IY+d),H (UNDOCUMENTED)",
    "RRC (IY+d),L (UNDOCUMENTED)",
    "RRC (IY+d)",
    "RRC (IY+d),A (UNDOCUMENTED)",

    "RL (IY+d),B (UNDOCUMENTED)",
    "RL (IY+d),C (UNDOCUMENTED)",
    "RL (IY+d),D (UNDOCUMENTED)",
    "RL (IY+d),E (UNDOCUMENTED)",
    "RL (IY+d),H (UNDOCUMENTED)",
    "RL (IY+d),L (UNDOCUMENTED)",
    "RL (IY+d)",
    "RL (IY+d),A (UNDOCUMENTED)",
    "RR (IY+d),B (UNDOCUMENTED)",
    "RR (IY+d),C (UNDOCUMENTED)",
    "RR (IY+d),D (UNDOCUMENTED)",
    "RR (IY+d),E (UNDOCUMENTED)",
    "RR (IY+d),H (UNDOCUMENTED)",
    "RR (IY+d),L (UNDOCUMENTED)",
    "RR (IY+d)",
    "RR (IY+d),A (UNDOCUMENTED)",

    "SLA (IY+d),B (UNDOCUMENTED)",
    "SLA (IY+d),C (UNDOCUMENTED)",
    "SLA (IY+d),D (UNDOCUMENTED)",
    "SLA (IY+d),E (UNDOCUMENTED)",
    "SLA (IY+d),H (UNDOCUMENTED)",
    "SLA (IY+d),L (UNDOCUMENTED)",
    "SLA (IY+d)",
    "SLA (IY+d),A (UNDOCUMENTED)",
    "SRA (IY+d),B (UNDOCUMENTED)",
    "SRA (IY+d),C (UNDOCUMENTED)",
    "SRA (IY+d),D (UNDOCUMENTED)",
    "SRA (IY+d),E (UNDOCUMENTED)",
    "SRA (IY+d),H (UNDOCUMENTED)",
    "SRA (IY+d),L (UNDOCUMENTED)",
    "SRA (IY+d)",
    "SRA (IY+d),A (UNDOCUMENTED)",

    "SLL (IY+d),B (UNDOCUMENTED)",
    "SLL (IY+d),C (UNDOCUMENTED)",
    "SLL (IY+d),D (UNDOCUMENTED)",
    "SLL (IY+d),E (UNDOCUMENTED)",
    "SLL (IY+d),H (UNDOCUMENTED)",
    "SLL (IY+d),L (UNDOCUMENTED)",
    "SLL (IY+d) (UNDOCUMENTED)",
    "SLL (IY+d),A (UNDOCUMENTED)",
    "SRL (IY+d),B (UNDOCUMENTED)",
    "SRL (IY+d),C (UNDOCUMENTED)",
    "SRL (IY+d),D (UNDOCUMENTED)",
    "SRL (IY+d),E (UNDOCUMENTED)",
    "SRL (IY+d),H (UNDOCUMENTED)",
    "SRL (IY+d),L (UNDOCUMENTED)",
    "SRL (IY+d)",
    "SRL (IY+d),A (UNDOCUMENTED)",

    "BIT 0,(IY+d) (UNDOCUMENTED)",
    "BIT 0,(IY+d) (UNDOCUMENTED)",
    "BIT 0,(IY+d) (UNDOCUMENTED)",
    "BIT 0,(IY+d) (UNDOCUMENTED)",
    "BIT 0,(IY+d) (UNDOCUMENTED)",
    "BIT 0,(IY+d) (UNDOCUMENTED)",
    "BIT 0,(IY+d)",
    "BIT 0,(IY+d) (UNDOCUMENTED)",
    "BIT 1,(IY+d) (UNDOCUMENTED)",
    "BIT 1,(IY+d) (UNDOCUMENTED)",
    "BIT 1,(IY+d) (UNDOCUMENTED)",
    "BIT 1,(IY+d) (UNDOCUMENTED)",
    "BIT 1,(IY+d) (UNDOCUMENTED)",
    "BIT 1,(IY+d) (UNDOCUMENTED)",
    "BIT 1,(IY+d)",
    "BIT 1,(IY+d) (UNDOCUMENTED)",

    "BIT 2,(IY+d) (UNDOCUMENTED)",
    "BIT 2,(IY+d) (UNDOCUMENTED)",
    "BIT 2,(IY+d) (UNDOCUMENTED)",
    "BIT 2,(IY+d) (UNDOCUMENTED)",
    "BIT 2,(IY+d) (UNDOCUMENTED)",
    "BIT 2,(IY+d) (UNDOCUMENTED)",
    "BIT 2,(IY+d)",
    "BIT 2,(IY+d) (UNDOCUMENTED)",
    "BIT 3,(IY+d) (UNDOCUMENTED)",
    "BIT 3,(IY+d) (UNDOCUMENTED)",
    "BIT 3,(IY+d) (UNDOCUMENTED)",
    "BIT 3,(IY+d) (UNDOCUMENTED)",
    "BIT 3,(IY+d) (UNDOCUMENTED)",
    "BIT 3,(IY+d) (UNDOCUMENTED)",
    "BIT 3,(IY+d)",
    "BIT 3,(IY+d) (UNDOCUMENTED)",

    "BIT 4,(IY+d) (UNDOCUMENTED)",
    "BIT 4,(IY+d) (UNDOCUMENTED)",
    "BIT 4,(IY+d) (UNDOCUMENTED)",
    "BIT 4,(IY+d) (UNDOCUMENTED)",
    "BIT 4,(IY+d) (UNDOCUMENTED)",
    "BIT 4,(IY+d) (UNDOCUMENTED)",
    "BIT 4,(IY+d)",
    "BIT 4,(IY+d) (UNDOCUMENTED)",
    "BIT 5,(IY+d) (UNDOCUMENTED)",
    "BIT 5,(IY+d) (UNDOCUMENTED)",
    "BIT 5,(IY+d) (UNDOCUMENTED)",
    "BIT 5,(IY+d) (UNDOCUMENTED)",
    "BIT 5,(IY+d) (UNDOCUMENTED)",
    "BIT 5,(IY+d) (UNDOCUMENTED)",
    "BIT 5,(IY+d)",
    "BIT 5,(IY+d) (UNDOCUMENTED)",

    "BIT 6,(IY+d) (UNDOCUMENTED)",
    "BIT 6,(IY+d) (UNDOCUMENTED)",
    "BIT 6,(IY+d) (UNDOCUMENTED)",
    "BIT 6,(IY+d) (UNDOCUMENTED)",
    "BIT 6,(IY+d) (UNDOCUMENTED)",
    "BIT 6,(IY+d) (UNDOCUMENTED)",
    "BIT 6,(IY+d)",
    "BIT 6,(IY+d) (UNDOCUMENTED)",
    "BIT 7,(IY+d) (UNDOCUMENTED)",
    "BIT 7,(IY+d) (UNDOCUMENTED)",
    "BIT 7,(IY+d) (UNDOCUMENTED)",
    "BIT 7,(IY+d) (UNDOCUMENTED)",
    "BIT 7,(IY+d) (UNDOCUMENTED)",
    "BIT 7,(IY+d) (UNDOCUMENTED)",
    "BIT 7,(IY+d)",
    "BIT 7,(IY+d) (UNDOCUMENTED)",

    "RES 0,(IY+d),B (UNDOCUMENTED)",
    "RES 0,(IY+d),C (UNDOCUMENTED)",
    "RES 0,(IY+d),D (UNDOCUMENTED)",
    "RES 0,(IY+d),E (UNDOCUMENTED)",
    "RES 0,(IY+d),H (UNDOCUMENTED)",
    "RES 0,(IY+d),L (UNDOCUMENTED)",
    "RES 0,(IY+d)",
    "RES 0,(IY+d),A (UNDOCUMENTED)",
    "RES 1,(IY+d),B (UNDOCUMENTED)",
    "RES 1,(IY+d),C (UNDOCUMENTED)",
    "RES 1,(IY+d),D (UNDOCUMENTED)",
    "RES 1,(IY+d),E (UNDOCUMENTED)",
    "RES 1,(IY+d),H (UNDOCUMENTED)",
    "RES 1,(IY+d),L (UNDOCUMENTED)",
    "RES 1,(IY+d)",
    "RES 1,(IY+d),A (UNDOCUMENTED)",

    "RES 2,(IY+d),B (UNDOCUMENTED)",
    "RES 2,(IY+d),C (UNDOCUMENTED)",
    "RES 2,(IY+d),D (UNDOCUMENTED)",
    "RES 2,(IY+d),E (UNDOCUMENTED)",
    "RES 2,(IY+d),H (UNDOCUMENTED)",
    "RES 2,(IY+d),L (UNDOCUMENTED)",
    "RES 2,(IY+d)",
    "RES 2,(IY+d),A (UNDOCUMENTED)",
    "RES 3,(IY+d),B (UNDOCUMENTED)",
    "RES 3,(IY+d),C (UNDOCUMENTED)",
    "RES 3,(IY+d),D (UNDOCUMENTED)",
    "RES 3,(IY+d),E (UNDOCUMENTED)",
    "RES 3,(IY+d),H (UNDOCUMENTED)",
    "RES 3,(IY+d),L (UNDOCUMENTED)",
    "RES 3,(IY+d)",
    "RES 3,(IY+d),A (UNDOCUMENTED)",

    "RES 4,(IY+d),B (UNDOCUMENTED)",
    "RES 4,(IY+d),C (UNDOCUMENTED)",
    "RES 4,(IY+d),D (UNDOCUMENTED)",
    "RES 4,(IY+d),E (UNDOCUMENTED)",
    "RES 4,(IY+d),H (UNDOCUMENTED)",
    "RES 4,(IY+d),L (UNDOCUMENTED)",
    "RES 4,(IY+d)",
    "RES 4,(IY+d),A (UNDOCUMENTED)",
    "RES 5,(IY+d),B (UNDOCUMENTED)",
    "RES 5,(IY+d),C (UNDOCUMENTED)",
    "RES 5,(IY+d),D (UNDOCUMENTED)",
    "RES 5,(IY+d),E (UNDOCUMENTED)",
    "RES 5,(IY+d),H (UNDOCUMENTED)",
    "RES 5,(IY+d),L (UNDOCUMENTED)",
    "RES 5,(IY+d)",
    "RES 5,(IY+d),A (UNDOCUMENTED)",

    "RES 6,(IY+d),B (UNDOCUMENTED)",
    "RES 6,(IY+d),C (UNDOCUMENTED)",
    "RES 6,(IY+d),D (UNDOCUMENTED)",
    "RES 6,(IY+d),E (UNDOCUMENTED)",
    "RES 6,(IY+d),H (UNDOCUMENTED)",
    "RES 6,(IY+d),L (UNDOCUMENTED)",
    "RES 6,(IY+d)",
    "RES 6,(IY+d),A (UNDOCUMENTED)",
    "RES 7,(IY+d),B (UNDOCUMENTED)",
    "RES 7,(IY+d),C (UNDOCUMENTED)",
    "RES 7,(IY+d),D (UNDOCUMENTED)",
    "RES 7,(IY+d),E (UNDOCUMENTED)",
    "RES 7,(IY+d),H (UNDOCUMENTED)",
    "RES 7,(IY+d),L (UNDOCUMENTED)",
    "RES 7,(IY+d)",
    "RES 7,(IY+d),A (UNDOCUMENTED)",

    "SET 0,(IY+d),B (UNDOCUMENTED)",
    "SET 0,(IY+d),C (UNDOCUMENTED)",
    "SET 0,(IY+d),D (UNDOCUMENTED)",
    "SET 0,(IY+d),E (UNDOCUMENTED)",
    "SET 0,(IY+d),H (UNDOCUMENTED)",
    "SET 0,(IY+d),L (UNDOCUMENTED)",
    "SET 0,(IY+d)",
    "SET 0,(IY+d),A (UNDOCUMENTED)",
    "SET 1,(IY+d),B (UNDOCUMENTED)",
    "SET 1,(IY+d),C (UNDOCUMENTED)",
    "SET 1,(IY+d),D (UNDOCUMENTED)",
    "SET 1,(IY+d),E (UNDOCUMENTED)",
    "SET 1,(IY+d),H (UNDOCUMENTED)",
    "SET 1,(IY+d),L (UNDOCUMENTED)",
    "SET 1,(IY+d)",
    "SET 1,(IY+d),A (UNDOCUMENTED)",

    "SET 2,(IY+d),B (UNDOCUMENTED)",
    "SET 2,(IY+d),C (UNDOCUMENTED)",
    "SET 2,(IY+d),D (UNDOCUMENTED)",
    "SET 2,(IY+d),E (UNDOCUMENTED)",
    "SET 2,(IY+d),H (UNDOCUMENTED)",
    "SET 2,(IY+d),L (UNDOCUMENTED)",
    "SET 2,(IY+d)",
    "SET 2,(IY+d),A (UNDOCUMENTED)",
    "SET 3,(IY+d),B (UNDOCUMENTED)",
    "SET 3,(IY+d),C (UNDOCUMENTED)",
    "SET 3,(IY+d),D (UNDOCUMENTED)",
    "SET 3,(IY+d),E (UNDOCUMENTED)",
    "SET 3,(IY+d),H (UNDOCUMENTED)",
    "SET 3,(IY+d),L (UNDOCUMENTED)",
    "SET 3,(IY+d)",
    "SET 3,(IY+d),A (UNDOCUMENTED)",

    "SET 4,(IY+d),B (UNDOCUMENTED)",
    "SET 4,(IY+d),C (UNDOCUMENTED)",
    "SET 4,(IY+d),D (UNDOCUMENTED)",
    "SET 4,(IY+d),E (UNDOCUMENTED)",
    "SET 4,(IY+d),H (UNDOCUMENTED)",
    "SET 4,(IY+d),L (UNDOCUMENTED)",
    "SET 4,(IY+d)",
    "SET 4,(IY+d),A (UNDOCUMENTED)",
    "SET 5,(IY+d),B (UNDOCUMENTED)",
    "SET 5,(IY+d),C (UNDOCUMENTED)",
    "SET 5,(IY+d),D (UNDOCUMENTED)",
    "SET 5,(IY+d),E (UNDOCUMENTED)",
    "SET 5,(IY+d),H (UNDOCUMENTED)",
    "SET 5,(IY+d),L (UNDOCUMENTED)",
    "SET 5,(IY+d)",
    "SET 5,(IY+d),A (UNDOCUMENTED)",

    "SET 6,(IY+d),B (UNDOCUMENTED)",
    "SET 6,(IY+d),C (UNDOCUMENTED)",
    "SET 6,(IY+d),D (UNDOCUMENTED)",
    "SET 6,(IY+d),E (UNDOCUMENTED)",
    "SET 6,(IY+d),H (UNDOCUMENTED)",
    "SET 6,(IY+d),L (UNDOCUMENTED)",
    "SET 6,(IY+d)",
    "SET 6,(IY+d),A (UNDOCUMENTED)",
    "SET 7,(IY+d),B (UNDOCUMENTED)",
    "SET 7,(IY+d),C (UNDOCUMENTED)",
    "SET 7,(IY+d),D (UNDOCUMENTED)",
    "SET 7,(IY+d),E (UNDOCUMENTED)",
    "SET 7,(IY+d),H (UNDOCUMENTED)",
    "SET 7,(IY+d),L (UNDOCUMENTED)",
    "SET 7,(IY+d)",
    "SET 7,(IY+d),A (UNDOCUMENTED)"
};

#endif

#endif	/* OPCODEFDCB_NAMES_H */

