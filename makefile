CC = gcc
CFLAGS = -Wall -g
.PHONY: all clean insertion_sort

all: mains

clean:
	rm -f *.o *.so *.a insertion_sort mains

mains: main.o insertion_sort
	$(CC) $(CFLAGS) main.o insertion_sort.o -o mains -lm

main.o: main.c insert_sort.h
	$(CC) $(CFLAGS) -c $< -o main.o

insertion_sort: insertion_sort.o

insertion_sort.o: insertion_sort.c insert_sort.h
	$(CC) $(CFLAGS) -c $<
