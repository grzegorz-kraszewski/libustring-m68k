/* VString library header file for GCC */

#include <exec/types.h>

APTR AllocVecPooled(__reg("a0") APTR pool, __reg("d0") ULONG size);
APTR CloneMem(__reg("a0") const APTR src, __reg("d0") ULONG size);
APTR CloneMemPooled(__reg("a0") APTR pool, __reg("a1") const APTR src, __reg("d0") ULONG size);
void FreeVecPooled(__reg("a0") APTR pool, __reg("a1") APTR block);
UBYTE* StrCopy(__reg("a0") const UBYTE *s, __reg("a1") UBYTE *d);
UWORD* StrCopyW(__reg("a0") const UWORD *s, __reg("a1") UWORD *d);
ULONG* StrCopyL(__reg("a0") const ULONG *s, __reg("a1") ULONG *d);
ULONG Utf8Size(__reg("d0") ULONG cp);
