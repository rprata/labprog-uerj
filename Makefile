CC=gcc
CFLAGS=-Wall
INCLUDES= -I./
SOURCE=main.c labprog.c
BIN=main

all:
	$(CC) $(CFLAGS) -o $(BIN) $(INCLUDES) $(SOURCE)

clean:
	rm $(BIN)