CC=gcc
CFLAGS=-Wall -std=gnu99
INCLUDES= -I./
SOURCE=main.c labprog.c
BIN=main

all:
	$(CC) $(CFLAGS) -o $(BIN) $(INCLUDES) $(SOURCE)

clean:
	rm $(BIN)