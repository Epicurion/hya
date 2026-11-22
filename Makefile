CC = gcc
CFLAGS = -Wall -Wextra -Iincludes -lm

PROGRAMMES = andor

all: $(PROGRAMMES)

andor: src/andor.c src/actFun.c
	$(CC) $(CFLAGS) -o bin/$@ src/andor.c src/actFun.c

