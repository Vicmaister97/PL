semantica: main.o y.tab.o semant.c
	gcc -o semantica main.o y.tab.o semant.c

y.tab.o: y.tab.c
	gcc -c y.tab.c

main.o: main.c
	gcc -c main.c

y.tab.c: semant.y lex.yy.c
	bison -v -o y.tab.c semant.y

lex.yy.c: tokens.l
	lex -l tokens.l

all:
	make semantica

clean:
	rm -rf *.o semantica y.tab.c y.tab.o lex.yy.c
