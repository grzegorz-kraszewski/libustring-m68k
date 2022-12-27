/* VString library header file for GCC */

#include <exec/types.h>

/* memory blocks */

APTR AllocVecPooled(APTR pool asm("a0"), ULONG size asm("d0"));
APTR CloneMem(const APTR src asm("a0"), ULONG size asm("d0"));
APTR CloneMemPooled(APTR pool asm("a0"), const APTR src asm("a1"), ULONG size asm("d0"));
void FreeVecPooled(APTR pool asm("a0"), APTR block asm("a1"));

/* string copying */

UBYTE* StrCopy(const UBYTE *s asm("a0"), UBYTE *d asm("a1"));
UWORD* StrCopyW(const UWORD *s asm("a0"), UWORD *d asm("a1"));
ULONG* StrCopyL(const ULONG *s asm("a0"), ULONG *d asm("a1"));
#define StrCopyU(s) StrCopy(s)

/* string cloning */

UBYTE* StrClone(const UBYTE *s asm("a0"));
UWORD* StrCloneW(const UWORD *s asm("a0"));
ULONG* StrCloneL(const ULONG *s asm("a0"));
#define StrCloneU(s) StrClone(s)
UBYTE* StrClonePooled(APTR pool asm("a0"), const UBYTE *s asm("a1"));
UWORD* StrClonePooledW(APTR pool asm("a0"), const UWORD *s asm("a1"));
ULONG* StrClonePooledL(APTR pool asm("a0"), const ULONG *s asm("a1"));
#define StrClonePooledU(p, s) StrClonePooled(p, s)

/* string size and character count */

ULONG StrSize(const UBYTE *s asm("a0"));
ULONG StrSizeW(const UWORD *s asm("a0"));
ULONG StrSizeL(const ULONG *s asm("a0"));
#define StrSizeU(s) StrSize(s)
LONG StrCount(const UBYTE *s asm("a0"));
/* LONG StrCountU(const UBYTE *s asm("a0")); not yet implemented */
LONG StrCountW(const UWORD *s asm("a0"));
LONG StrCountL(const ULONG *s asm("a0"));

/* UTF-8 support */

ULONG Utf8Size(ULONG cp asm("d0"));

/* error codes */

#define EUSTR_U16_LOW_SURROGATE_UNEXPECTED    -1
#define EUSTR_U16_LOW_SURROGATE_MISSING       -2
#define EUSTR_U32_OUT_OF_RANGE                -3