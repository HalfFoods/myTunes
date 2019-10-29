all: main.o linkedlist.o
	gcc -o program main.o linkedlist.o

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c

main.o: main.c linkedlist.h
	gcc -c main.c

run:
	./program

clean:
	rm *.o
	rm program
