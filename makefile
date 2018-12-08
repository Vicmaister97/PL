semantica: main.o y.tab.o semant.o
	gcc -o -c semantica main.o y.tab.o semant.o

y.tab.o: y.tab.c
	gcc -c y.tab.c

main.o: main.c
	gcc -c main.c

semant.o: semant.c
	gcc -c semant.c

y.tab.c: semant.y lex.yy.c
	bison -v -o y.tab.c semant.y

lex.yy.c: tokens.l
	lex -l tokens.l


all:
	make semantica

clean:
	rm -rf semantica y.tab.c y.tab.o lex.yy.c semant.o main.o 
