/*
 * Copyright (c) 2003, 2007-11 Matteo Frigo
 * Copyright (c) 2003, 2007-11 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Sun Nov 25 07:41:33 EST 2012 */

#include "codelet-rdft.h"

#ifdef HAVE_FMA

/* Generated by: ../../../genfft/gen_r2cb.native -fma -reorder-insns -schedule-for-pipeline -compact -variables 4 -pipeline-latency 4 -sign 1 -n 7 -name r2cbIII_7 -dft-III -include r2cbIII.h */

/*
 * This function contains 24 FP additions, 22 FP multiplications,
 * (or, 2 additions, 0 multiplications, 22 fused multiply/add),
 * 31 stack variables, 7 constants, and 14 memory accesses
 */
#include "r2cbIII.h"

static void r2cbIII_7(R *R0, R *R1, R *Cr, R *Ci, stride rs, stride csr, stride csi, INT v, INT ivs, INT ovs)
{
     DK(KP1_949855824, +1.949855824363647214036263365987862434465571601);
     DK(KP1_801937735, +1.801937735804838252472204639014890102331838324);
     DK(KP2_000000000, +2.000000000000000000000000000000000000000000000);
     DK(KP692021471, +0.692021471630095869627814897002069140197260599);
     DK(KP801937735, +0.801937735804838252472204639014890102331838324);
     DK(KP356895867, +0.356895867892209443894399510021300583399127187);
     DK(KP554958132, +0.554958132087371191422194871006410481067288862);
     {
	  INT i;
	  for (i = v; i > 0; i = i - 1, R0 = R0 + ovs, R1 = R1 + ovs, Cr = Cr + ivs, Ci = Ci + ivs, MAKE_VOLATILE_STRIDE(28, rs), MAKE_VOLATILE_STRIDE(28, csr), MAKE_VOLATILE_STRIDE(28, csi)) {
	       E Tn, Td, Tg, Ti, Tl, T8;
	       {
		    E T1, T9, Tb, Ta, T2, T4, Th, Tm, Tc, T3, Te;
		    T1 = Cr[WS(csr, 3)];
		    T9 = Ci[WS(csi, 1)];
		    Tb = Ci[0];
		    Ta = Ci[WS(csi, 2)];
		    T2 = Cr[WS(csr, 2)];
		    T4 = Cr[0];
		    Th = FMA(KP554958132, T9, Tb);
		    Tm = FNMS(KP554958132, Ta, T9);
		    Tc = FMA(KP554958132, Tb, Ta);
		    T3 = Cr[WS(csr, 1)];
		    Te = FNMS(KP356895867, T2, T4);
		    Tn = FNMS(KP801937735, Tm, Tb);
		    {
			 E Tf, Tk, T7, T5, Tj, T6;
			 Td = FMA(KP801937735, Tc, T9);
			 T5 = T2 + T3 + T4;
			 Tj = FNMS(KP356895867, T4, T3);
			 T6 = FNMS(KP356895867, T3, T2);
			 Tf = FNMS(KP692021471, Te, T3);
			 R0[0] = FMA(KP2_000000000, T5, T1);
			 Tk = FNMS(KP692021471, Tj, T2);
			 T7 = FNMS(KP692021471, T6, T4);
			 Tg = FNMS(KP1_801937735, Tf, T1);
			 Ti = FNMS(KP801937735, Th, Ta);
			 Tl = FNMS(KP1_801937735, Tk, T1);
			 T8 = FNMS(KP1_801937735, T7, T1);
		    }
	       }
	       R1[WS(rs, 2)] = FMS(KP1_949855824, Ti, Tg);
	       R0[WS(rs, 1)] = FMA(KP1_949855824, Ti, Tg);
	       R0[WS(rs, 2)] = FNMS(KP1_949855824, Tn, Tl);
	       R1[WS(rs, 1)] = -(FMA(KP1_949855824, Tn, Tl));
	       R0[WS(rs, 3)] = FNMS(KP1_949855824, Td, T8);
	       R1[0] = -(FMA(KP1_949855824, Td, T8));
	  }
     }
}

static const kr2c_desc desc = { 7, "r2cbIII_7", {2, 0, 22, 0}, &GENUS };

void X(codelet_r2cbIII_7) (planner *p) {
     X(kr2c_register) (p, r2cbIII_7, &desc);
}

#else				/* HAVE_FMA */

/* Generated by: ../../../genfft/gen_r2cb.native -compact -variables 4 -pipeline-latency 4 -sign 1 -n 7 -name r2cbIII_7 -dft-III -include r2cbIII.h */

/*
 * This function contains 24 FP additions, 19 FP multiplications,
 * (or, 9 additions, 4 multiplications, 15 fused multiply/add),
 * 21 stack variables, 7 constants, and 14 memory accesses
 */
#include "r2cbIII.h"

static void r2cbIII_7(R *R0, R *R1, R *Cr, R *Ci, stride rs, stride csr, stride csi, INT v, INT ivs, INT ovs)
{
     DK(KP2_000000000, +2.000000000000000000000000000000000000000000000);
     DK(KP1_246979603, +1.246979603717467061050009768008479621264549462);
     DK(KP1_801937735, +1.801937735804838252472204639014890102331838324);
     DK(KP445041867, +0.445041867912628808577805128993589518932711138);
     DK(KP867767478, +0.867767478235116240951536665696717509219981456);
     DK(KP1_949855824, +1.949855824363647214036263365987862434465571601);
     DK(KP1_563662964, +1.563662964936059617416889053348115500464669037);
     {
	  INT i;
	  for (i = v; i > 0; i = i - 1, R0 = R0 + ovs, R1 = R1 + ovs, Cr = Cr + ivs, Ci = Ci + ivs, MAKE_VOLATILE_STRIDE(28, rs), MAKE_VOLATILE_STRIDE(28, csr), MAKE_VOLATILE_STRIDE(28, csi)) {
	       E T9, Td, Tb, T1, T4, T2, T3, T5, Tc, Ta, T6, T8, T7;
	       T6 = Ci[WS(csi, 2)];
	       T8 = Ci[0];
	       T7 = Ci[WS(csi, 1)];
	       T9 = FMA(KP1_563662964, T6, KP1_949855824 * T7) + (KP867767478 * T8);
	       Td = FNMS(KP1_949855824, T8, KP1_563662964 * T7) - (KP867767478 * T6);
	       Tb = FNMS(KP1_563662964, T8, KP1_949855824 * T6) - (KP867767478 * T7);
	       T1 = Cr[WS(csr, 3)];
	       T4 = Cr[0];
	       T2 = Cr[WS(csr, 2)];
	       T3 = Cr[WS(csr, 1)];
	       T5 = FMA(KP445041867, T3, KP1_801937735 * T4) + FNMA(KP1_246979603, T2, T1);
	       Tc = FMA(KP1_801937735, T2, KP445041867 * T4) + FNMA(KP1_246979603, T3, T1);
	       Ta = FMA(KP1_246979603, T4, T1) + FNMA(KP1_801937735, T3, KP445041867 * T2);
	       R1[0] = T5 - T9;
	       R0[WS(rs, 3)] = -(T5 + T9);
	       R0[WS(rs, 2)] = Td - Tc;
	       R1[WS(rs, 1)] = Tc + Td;
	       R1[WS(rs, 2)] = Tb - Ta;
	       R0[WS(rs, 1)] = Ta + Tb;
	       R0[0] = FMA(KP2_000000000, T2 + T3 + T4, T1);
	  }
     }
}

static const kr2c_desc desc = { 7, "r2cbIII_7", {9, 4, 15, 0}, &GENUS };

void X(codelet_r2cbIII_7) (planner *p) {
     X(kr2c_register) (p, r2cbIII_7, &desc);
}

#endif				/* HAVE_FMA */