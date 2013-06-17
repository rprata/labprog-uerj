CC=gcc
CFLAGS=-Wall -std=gnu99
INCLUDES= -I.
BIN=labprog-teste
OBJS=labprog.o main.o

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $< $(INCLUDES)

labprog-teste: $(OBJS)
	$(CC) $(CFLAGS) -o $(BIN) $(INCLUDES) $(OBJS)

clean:
	rm $(BIN) $(OBJS)
