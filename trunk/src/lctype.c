/*
** $Id: lctype.c,v 1.8 2009/11/19 19:06:52 roberto Exp $
** 'ctype' functions for Lua
** See Copyright Notice in lua.h
*/

#include <limits.h>

#include "lctype.h"

LUAI_DDEF const lu_byte luai_ctype_[UCHAR_MAX + 2] = {
  0x00,  /* EOZ */
  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
  0x00,  0x08,  0x08,  0x08,  0x08,  0x08,  0x00,  0x00,
  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
  0x0c,  0x04,  0x04,  0x04,  0x04,  0x04,  0x04,  0x04,
  0x04,  0x04,  0x04,  0x04,  0x04,  0x04,  0x04,  0x04,
  0x16,  0x16,  0x16,  0x16,  0x16,  0x16,  0x16,  0x16,
  0x16,  0x16,  0x04,  0x04,  0x04,  0x04,  0x04,  0x04,
  0x04,  0x35,  0x35,  0x35,  0x35,  0x35,  0x35,  0x25,
  0x25,  0x25,  0x25,  0x25,  0x25,  0x25,  0x25,  0x25,
  0x25,  0x25,  0x25,  0x25,  0x25,  0x25,  0x25,  0x25,
  0x25,  0x25,  0x25,  0x04,  0x04,  0x04,  0x04,  0x05,
  0x04,  0x15,  0x15,  0x15,  0x15,  0x15,  0x15,  0x05,
  0x05,  0x05,  0x05,  0x05,  0x05,  0x05,  0x05,  0x05,
  0x05,  0x05,  0x05,  0x05,  0x05,  0x05,  0x05,  0x05,
  0x05,  0x05,  0x05,  0x04,  0x04,  0x04,  0x04,  0x00,
  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,
  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,
  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,
  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,
  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,
  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,
  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,
  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,
  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,
  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,
  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,
  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,
  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,
  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,
  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,
  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x00,
};
