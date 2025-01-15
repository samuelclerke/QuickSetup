CC = gcc
CFLAGS = -Iinclude

all: program

program: src/main.c
	$(CC) $(CFLAGS) src/main.c src/LongOpt.c -o qset