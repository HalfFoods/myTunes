ifeq ($(DEBUG), true)
	CC = gcc -g
else
	CC = gcc
endif

all: main.o linkedlist.o
	$(CC) -o program main.o linkedlist.o

linkedlist.o: linkedlist.c linkedlist.h
	$(CC) -c linkedlist.c

main.o: main.c linkedlist.h
	$(CC) -c main.c

run:
	./program

clean:
	rm *.o
	rm program
