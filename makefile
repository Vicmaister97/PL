

semantica: semant.o main.o y.tab.o
	gcc -o semantica semant.o main.o y.tab.o

main.o: main.c
	gcc -o -c main.c

y.tab.o: y.tab.c
	gcc -o -c y.tab.c

y.tab.c: semant.y lex.yy.c
	bison -v -d -o semant.y

lex.yy.c: tokens.l
	lex -o tokens.l

semant.o: semant.c
	gcc -o -c semant.c

all:
	make semantica

clean:
	rm -rf semantica y.tab.c lex.yy.c semant.o
