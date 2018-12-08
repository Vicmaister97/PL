.SUFFIXES:

prueba: main.o y.tab.o
	gcc -o prueba main.o y.tab.o
y.tab.o: y.tab.c
	gcc -c y.tab.c
main.o: main.c
	gcc -c main.c
y.tab.c: semantica.y lex.yy.c
	bison -v -o y.tab.c semantica.y
lex.yy.c: tokens.l
	lex -l tokens.l
clean:
	rm -f prueba main.o y.tab.o y.tab.c lex.yy.c
all:
	make clean
	make prueba
