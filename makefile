all: incerteza

incerteza: incerteza.o main.o
	gcc -o incerteza incerteza.o main.o

incerteza.o: incerteza.c
	gcc -o incerteza.o -c incerteza.c

main.o: main.c incerteza.h
	gcc -o main.o -c main.c

run:
	./incerteza