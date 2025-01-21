CC = gcc
CFLAGS = -Iinclude

program: src/main.c
	$(CC) $(CFLAGS) src/main.c -o qset -Wall -Werror