
semantic: main.o y.tab.o semant.o
	gcc -o prueba main.o y.tab.o semant.o

semant.o: semant.c
	gcc -c semant.c

y.tab.o: y.tab.c
	gcc -c y.tab.c

main.o: main.c
	gcc -c main.c

y.tab.c: semant.y lex.yy.c
	bison -v -o y.tab.c semant.y

lex.yy.c: tokens.l
	lex -o tokens.l

all:
	make semantica

clean:
	rm -rf semantica y.tab.c lex.yy.c semant.o
