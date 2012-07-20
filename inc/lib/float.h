#ifndef SL_LIB_FLOAT_H
#define SL_LIB_FLOAT_H

#include "vm.h"

SLVAL
sl_make_float(sl_vm_t* vm, double n);

double
sl_get_float(sl_vm_t* vm, SLVAL f);

SLVAL
sl_float_add(sl_vm_t* vm, SLVAL self, SLVAL other);

SLVAL
sl_float_sub(sl_vm_t* vm, SLVAL self, SLVAL other);

SLVAL
sl_float_mul(sl_vm_t* vm, SLVAL self, SLVAL other);

SLVAL
sl_float_div(sl_vm_t* vm, SLVAL self, SLVAL other);

SLVAL
sl_float_mod(sl_vm_t* vm, SLVAL self, SLVAL other);

SLVAL
sl_float_eq(sl_vm_t* vm, SLVAL self, SLVAL other);

SLVAL
sl_float_lt(sl_vm_t* vm, SLVAL self, SLVAL other);

SLVAL
sl_float_gt(sl_vm_t* vm, SLVAL self, SLVAL other);

SLVAL
sl_float_lte(sl_vm_t* vm, SLVAL self, SLVAL other);

SLVAL
sl_float_gte(sl_vm_t* vm, SLVAL self, SLVAL other);

#endif
