# libvstring
Static library for dynamic memory and string manipulation for AmigaOS/M68k
## Function Naming Conventions
String functions use suffixes for text encoding used:
- *W* - 16-bit Unicode
- *L* - 32-bit Unicode
- *U* - UTF-8

No suffix means functions for 8-bit encodings (codepages). Sometimes such functions also work for UTF-8 (for example `StrSize()`), then a macro with *U* suffix is provided, to make the function set orthogonal.
## Functions Overview
### Memory Blocks
- `AllocVecPooled()` - pooled allocation with size remembering
- `FreeVecPooled()` - freeing memory allocated with the above
- `CloneMem()` - a copy of memory block in newly allocated memory
- `CloneMemPooled()` - the same as above but into memory pool
### String Sizing
- `StrSize[UWL]()` - string size in bytes including zero terminator
### String Copying and Cloning
- `StrCopy[UWL]()` - plain copy, may be used for concatenation
- `StrClone[UWL]()` - a copy in newly allocated memory
- `StrClonePooled[UWL]()` - a copy in memory allocated from a pool
- `StrJoin[UWL]()` - joins multiple strings into newly allocated memory
- `StrJoinPooled[UWL]()` - joins multiple strings into memory allocated from a pool
### UTF-8 Specific
- `Utf8Size()` - byte size of UTF-8 encoded character
## Parameters Passing
To speed up the code, parameters are passed in CPU registers (*An* for pointers, *Dn* for other data).
## Documentation
Each function is documented in its source file, in standard Amiga AutoDoc format. The makefile provides `doc` target, which generates AmigaGuide and plaintext autodoc file using *RoboDoc* tool, available on Aminet.
## Compiler Support
GCC at the moment. VBCC is planned as well. Of course these functions may be used in assembler programs by just including their source, or linking.
## Dependencies
*libvstring* does not depend on any library other than system ones (*exec.library* at the moment). It does not depend on the standard C library and may be used in programs compiled with *-nostdlib* option.
