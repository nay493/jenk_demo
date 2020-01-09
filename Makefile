SRC = ~/jenk_demo/main
CC = gcc
objects = add.o

all : $(objects)
	$(CC) -o calc $(objects)

add.o : ~/jenk_demo/adder/adder.c
	$(CC) $(CFLAGS) $(SRC)/main.c $(LDFLAGS) -o $@
