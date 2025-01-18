CC = gcc
CFLAGS = -Iinclude

program: src/main.c src/LongOpt.c
	$(CC) $(CFLAGS) src/main.c src/LongOpt.c -o qset