.SUFFIXES: .prg .txt .bas

tok64: tok64.c
tok64.c: basename.h getline.h getprog.h rtc.h

.prg.txt:
	./tok64 /upper /totxt $<

.bas.prg:
	./tok64 /toprg $<
