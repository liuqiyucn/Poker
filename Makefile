CC=g++
CFLAGS=-I.

Driver: Card.o Player.o Table.o Main.o
	$(CC) -o Driver Card.o Player.o Table.o Main.o

.PHONY: clean

clean:
	rm -f *.o
	rm -f *.swp
	rm -f Driver
