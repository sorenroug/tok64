.SUFFIXES: .prg .txt .bas

tok64: tok64.c
tok64.c: basename.h getline.h getprog.h rtc.h

.prg.bas:
	./tok64 --lowcase --upper --totxt $<

.bas.prg:
	./tok64 --toprg $<
