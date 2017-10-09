ASM = as
ASMOPTS = 
OBJS = allocvecpooled.o freevecpooled.o clonemem.o clonemempooled.o utf8size.o
SRCS = allocvecpooled.s freevecpooled.s clonemem.s clonemempooled.s utf8size.s

OUTPUT = libvstring.a

lib: $(OBJS)
	mkdir -p ../../lib
	ar r ../../lib/$(OUTPUT) $(OBJS)

doc: $(SRCS)
	Join $(SRCS) AS doc.tmp
	Robodoc doc.tmp libvstring.doc SORT ASCII
	Robodoc doc.tmp libvstring.guide SORT GUIDE TOC
	rm doc.tmp

%.o:%.s
	$(ASM) $(ASMOPTS) -o $@ $<

clean:
	rm *.o -f
  
