/* mpfr_sinh -- hyperbolic sine

Copyright (C) 2001 Free Software Foundation.

This file is part of the MPFR Library.

The MPFR Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The MPFR Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the MPFR Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
MA 02111-1307, USA. */

#include <stdio.h>
#include <math.h>
#include "gmp.h"
#include "gmp-impl.h"
#include "mpfr.h"
#include "mpfr-impl.h"

 /* The computation of cosh is done by

    cosh= 1/2[e^(x)-e^(-x)]
 */

int
#if __STDC__
mpfr_sinh (mpfr_ptr y, mpfr_srcptr xt , mp_rnd_t rnd_mode) 
#else
mpfr_sinh (y, xt, rnd_mode)
     mpfr_ptr y;
     mpfr_srcptr xt;
     mp_rnd_t rnd_mode;
#endif
{
    /****** Declaration ******/
    mpfr_t x;
    mp_prec_t Nxt = MPFR_PREC(xt);
    int flag_neg=0, inexact =0;

    if (MPFR_IS_NAN(xt))
      {
        MPFR_SET_NAN(y); 
        return 1;
      }
    MPFR_CLEAR_NAN(y);

    if (MPFR_IS_INF(xt))
      { 
        MPFR_SET_INF(y);
        MPFR_SET_SAME_SIGN(y,xt);
        return 0;
      }

    MPFR_CLEAR_INF(y);
  
    if(!MPFR_NOTZERO(xt))
      {
        MPFR_SET_ZERO(y);   /* sinh(0) = 0 */
        MPFR_SET_SAME_SIGN(y,xt);
        return(0);
      }

    mpfr_init2(x,Nxt);
    mpfr_set(x,xt,GMP_RNDN);

    if(MPFR_SIGN(x)<0)
      {
        MPFR_CHANGE_SIGN(x);
        flag_neg=1;
      }

    /* General case */
    {
    /* Declaration of the intermediary variable */
      mpfr_t t, te,ti;       
      int d;

      /* Declaration of the size variable */
      mp_prec_t Nx = Nxt;   /* Precision of input variable */
      mp_prec_t Ny = MPFR_PREC(y);   /* Precision of input variable */

      mp_prec_t Nt;   /* Precision of the intermediary variable */
      long int err;  /* Precision of error */
      
      /* compute the precision of intermediary variable */
      Nt=MAX(Nx,Ny);
      /* the optimal number of bits : see algorithms.ps */
      Nt = Nt+_mpfr_ceil_log2(5)+_mpfr_ceil_log2(Nt);

      /* initialise of intermediary	variable */
      mpfr_init(t);             
      mpfr_init(te);             
      mpfr_init(ti);                    


      /* First computation of cosh */
      do {

	/* reactualisation of the precision */

	mpfr_set_prec(t,Nt);             
	mpfr_set_prec(te,Nt);             
	mpfr_set_prec(ti,Nt);             

	/* compute sinh */
	mpfr_exp(te,x,GMP_RNDD);         /* exp(x) */
	mpfr_ui_div(ti,1,te,GMP_RNDU);   /* 1/exp(x) */
	mpfr_sub(t,te,ti,GMP_RNDN);      /* exp(x) - 1/exp(x)*/
	mpfr_div_2exp(t,t,1,GMP_RNDN);   /* 1/2(exp(x) - 1/exp(x))*/

        /* calculation of the error*/
        d = MPFR_EXP(te)-MPFR_EXP(t)+2;
	
	/* estimation of the error */
        err = Nt-(_mpfr_ceil_log2(1+pow(2,d)));

	/* actualisation of the precision */
        Nt += 10; 

      } while ((err < 0) || !mpfr_can_round(t,err,GMP_RNDN,rnd_mode,Ny));

      if (flag_neg==1)
          MPFR_CHANGE_SIGN(t);

      inexact = mpfr_set(y,t,rnd_mode);
      mpfr_clear(t);
      mpfr_clear(ti);
      mpfr_clear(te);
    }
    mpfr_clear(x);
    return inexact;

}
