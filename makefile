ifeq ($(DEBUG), true)
	CC = gcc -g
else
	CC = gcc
endif

all: main.o linkedlist.o library.o
	$(CC) -o program main.o linkedlist.o library.o

main.o: main.c linkedlist.h library.h
	$(CC) -c main.c

linkedlist.o: linkedlist.c linkedlist.h
	$(CC) -c linkedlist.c

library.o: library.c library.h
	$(CC) -c library.c

leakcheck:
	valgrind --leak-check=yes ./program

run:
	./program

clean:
	rm *.o
	rm program
