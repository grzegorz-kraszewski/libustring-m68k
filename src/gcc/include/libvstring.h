/* VString library header file for GCC */

#include <exec/types.h>

/* memory blocks */

APTR AllocVecPooled(__reg("a0") APTR pool, __reg("d0") ULONG size);
APTR CloneMem(__reg("a0") const APTR src, __reg("d0") ULONG size);
APTR CloneMemPooled(__reg("a0") APTR pool, __reg("a1") const APTR src, __reg("d0") ULONG size);
void FreeVecPooled(__reg("a0") APTR pool, __reg("a1") APTR block);

/* string copying */

UBYTE* StrCopy(__reg("a0") const UBYTE *s, __reg("a1") UBYTE *d);
UWORD* StrCopyW(__reg("a0") const UWORD *s, __reg("a1") UWORD *d);
ULONG* StrCopyL(__reg("a0") const ULONG *s, __reg("a1") ULONG *d);
#define StrCopyU(s) StrCopy(s)

/* string cloning */

UBYTE* StrClone(__reg("a0") const UBYTE *s);
UWORD* StrCloneW(__reg("a0") const UWORD *s);
ULONG* StrCloneL(__reg("a0") const ULONG *s);
#define StrCloneU(s) StrClone(s)
UBYTE* StrClonePooled(__reg("a0") APTR pool, __reg("a1") const UBYTE *s);
UWORD* StrClonePooledW(__reg("a0") APTR pool, __reg("a1") const UWORD *s);
ULONG* StrClonePooledL(__reg("a0") APTR pool, __reg("a1") const ULONG *s);
#define StrClonePooledU(p,s) StrClonePooled(p,s)

/* string size */

ULONG StrSize(__reg("a0") const UBYTE *s);
ULONG StrSizeW(__reg("a0") const UWORD *s);
ULONG StrSizeL(__reg("a0") const ULONG *s);
#define StrSizeU(s) StrSize(s)

/* UTF-8 support */

ULONG Utf8Size(__reg("d0") ULONG cp);
