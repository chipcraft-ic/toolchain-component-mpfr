/* mpfr_add_si -- add a floating-point number with a machine integer
   mpfr_sub_si -- sub  a floating-point number with a machine integer
   mpfr_si_sub -- sub  a machine number with a floating-point number
   mpfr_mul_si -- multiply a floating-point number by a machine integer
   mpfr_div_si -- divide a floating-point number by a machine integer
   mpfr_si_div -- divide a machine number by a floating-point number

Copyright 2004 Free Software Foundation.

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

#include "mpfr-impl.h"

int
mpfr_add_si (mpfr_ptr y, mpfr_srcptr x, long int u, mp_rnd_t rnd_mode)
{
  if (u >= 0)
    return mpfr_add_ui (y, x, u, rnd_mode);
  else
    return mpfr_sub_ui (y, x, -u, rnd_mode);
}

int
mpfr_sub_si (mpfr_ptr y, mpfr_srcptr x, long int u, mp_rnd_t rnd_mode)
{
  if (u >= 0)
    return mpfr_sub_ui (y, x, u, rnd_mode);
  else
    return mpfr_add_ui (y, x, -u, rnd_mode);
}

int
mpfr_si_sub (mpfr_ptr y, long int u, mpfr_srcptr x, mp_rnd_t rnd_mode)
{
  if (u >= 0)
    return mpfr_ui_sub (y, u, x, rnd_mode);
  else
    {
    int res = -mpfr_add_ui (y, x, -u, rnd_mode);
    MPFR_CHANGE_SIGN (y);
    return res;
    }
}

int mpfr_mul_si (mpfr_ptr y, mpfr_srcptr x, long int u, mp_rnd_t rnd_mode)
{
  int res;

  if (u >= 0)
    res = mpfr_mul_ui (y, x, u, rnd_mode);
  else
    {
      res = -mpfr_mul_ui (y, x, -u, rnd_mode);
      MPFR_CHANGE_SIGN (y);
    }
  return res;
}

int mpfr_div_si (mpfr_ptr y, mpfr_srcptr x, long int u, mp_rnd_t rnd_mode)
{
  int res;

  if (u >= 0)
    res = mpfr_div_ui (y, x, u, rnd_mode);
  else
    {
      res = -mpfr_div_ui (y, x, -u, rnd_mode);
      MPFR_CHANGE_SIGN (y);
    }
  return res;
}

int mpfr_si_div (mpfr_ptr y, long int u, mpfr_srcptr x,mp_rnd_t rnd_mode)
{
  int res;

  if (u >= 0)
    res = mpfr_ui_div (y, u, x, rnd_mode);
  else
    {
      res = -mpfr_ui_div (y, -u, x, rnd_mode);
      MPFR_CHANGE_SIGN (y);
    }
  return res;
}
