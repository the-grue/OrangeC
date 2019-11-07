/* Software License Agreement
 *
 *     Copyright(C) 1994-2019 David Lindauer, (LADSoft)
 *
 *     This file is part of the Orange C Compiler package.
 *
 *     The Orange C Compiler package is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 *
 *     The Orange C Compiler package is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with Orange C.  If not, see <http://www.gnu.org/licenses/>.
 *
 *     contact information:
 *         email: TouchStone222@runbox.com <David Lindauer>
 *
 */

/*
 * C configuration when we are using ICODE code generator output
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "compiler.h"
#include "PreProcessor.h"
#include "Utils.h"

extern ARCH_ASM assemblerInterface[];
extern COMPILER_PARAMS cparams;
extern PreProcessor* preProcessor;
extern ARCH_ASM* chosenAssembler;
extern ARCH_DEBUG* chosenDebugger;

int needsAtomicLockFromType(TYPE* tp)
{
    ARCH_SIZING* p = chosenAssembler->arch->type_needsLock;
    switch (basetype(tp)->type)
    {
        case bt_char16_t:
            return 0;
        case bt_char32_t:
            return 0;
        case bt_bit:
        case bt_void:
            return 0;
        case bt_char:
        case bt_signed_char:
        case bt_unsigned_char:
            return p->a_char;
        case bt_bool:
            return p->a_bool;
        case bt_short:
        case bt_unsigned_short:
            return p->a_short;
        case bt_wchar_t:
            return p->a_wchar_t;
        case bt_long:
        case bt_unsigned_long:
            return p->a_long;
        case bt_long_long:
        case bt_unsigned_long_long:
            return p->a_longlong;
        case bt_int:
        case bt_unsigned:
        case bt_inative:
        case bt_unative:
            return p->a_int;
        case bt_enum:
            return p->a_enum;
        case bt_pointer:
            return p->a_addr;
        case bt_any:
            return p->a_addr;
        case bt_seg:
            return p->a_farseg;
        case bt_far:
            return p->a_farptr;
        case bt_memberptr:
            return p->a_memberptr;
        case bt_float:
        case bt_float_imaginary:
            return p->a_float;
        case bt_double:
        case bt_double_imaginary:
            return p->a_double;
        case bt_long_double:
        case bt_long_double_imaginary:
            return p->a_longdouble;
        case bt_float_complex:
            return 1;
        case bt_double_complex:
            return 1;
        case bt_long_double_complex:
            return 1;
        case bt_class:
        case bt_struct:
        case bt_union:
        default:
            return 1;
    }
}
static int basesize(ARCH_SIZING* p, TYPE* tp)
{
    tp = basetype(tp);
    switch (tp->type)
    {
        case bt_char16_t:
            return 2;
        case bt_char32_t:
            return 4;
        case bt_bit:
        case bt_void:
            return 0;
        case bt_char:
        case bt_unsigned_char:
        case bt_signed_char:
            return p->a_char;
        case bt_bool:
            return p->a_bool;
        case bt_short:
        case bt_unsigned_short:
            return p->a_short;
        case bt_wchar_t:
            return p->a_wchar_t;
        case bt_long:
        case bt_unsigned_long:
            return p->a_long;
        case bt_long_long:
        case bt_unsigned_long_long:
            return p->a_longlong;
        case bt_int:
        case bt_unsigned:
        case bt_inative:
        case bt_unative:
            return p->a_int;
        case bt_enum:
            return p->a_enum;
        case bt_pointer:
            if (tp->array && !tp->vla)
                return basesize(p, tp->btp);
            else
                return p->a_addr;
        case bt_any:
            return p->a_addr;
        case bt_seg:
            return p->a_farseg;
        case bt_far:
            return p->a_farptr;
        case bt_memberptr:
            return p->a_memberptr;
        case bt_float:
        case bt_float_imaginary:
            return p->a_float;
        case bt_double:
        case bt_double_imaginary:
            return p->a_double;
        case bt_long_double:
        case bt_long_double_imaginary:
            return p->a_longdouble;
        case bt_float_complex:
            return (p->a_float + p->a_fcomplexpad) * 2;
        case bt_double_complex:
            return (p->a_double + p->a_rcomplexpad) * 2;
        case bt_long_double_complex:
            return (p->a_longdouble + p->a_lrcomplexpad) * 2;
        case bt___string:
            return p->a_addr;
        case bt___object:
            return p->a_addr;
        case bt_class:
        case bt_struct:
        case bt_union:
            if (p->a_struct)
                return p->a_struct;
            else if (tp->alignment)
                return tp->alignment;
            else
                return tp->sp->attribs.inheritable.structAlign ? tp->sp->attribs.inheritable.structAlign : 1;
        default:
            /*            diag("basesize: unknown type");*/
            return 1;
    }
}
int getSize(enum e_bt type)
{
    TYPE tp;
    memset(&tp, 0, sizeof(tp));
    tp.type = type; /* other fields don't matter, we never call this for structured types*/
    return basesize(chosenAssembler->arch->type_sizes, &tp);
}
int getBaseAlign(enum e_bt type)
{
    TYPE tp;
    if (type == bt_auto)
        type = bt_struct;
    tp.type = type; /* other fields don't matter, we never call this for structured types*/
    tp.array = tp.vla = false;
    tp.rootType = &tp;
    return basesize(chosenAssembler->arch->type_align, &tp);
}
long getautoval(long val)
{
    if (chosenAssembler->arch->spgrowsup)
        return -val;
    else
        return val;
}
int funcvaluesize(int val)
{
    if (chosenAssembler->arch->param_offs)
        return (chosenAssembler->arch->param_offs(val));
    return 0;
}
int alignment(int sc, TYPE* tp)
{
    (void)sc;
    return basesize(chosenAssembler->arch->type_align, tp);
}
int getAlign(int sc, TYPE* tp)
{
    int align = basesize(chosenAssembler->arch->type_align, tp);
    if (sc != sc_auto)
    {
        int pack = preProcessor->GetPack();
        if (pack < align)
            align = pack;
    }
    if (chosenAssembler->arch->align)
        align = chosenAssembler->arch->align(align);
    if (isstructured(tp) && tp->sp->attribs.inheritable.structAlign > align)
        align = tp->sp->attribs.inheritable.structAlign;
    return align;
}
const char* getUsageText(void) { return chosenAssembler->usage_text; }
KEYWORD* GetProcKeywords(void) { return (KEYWORD*)chosenAssembler->keywords; }