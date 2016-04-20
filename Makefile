CC = gcc
CFLAGS = -std=c99 -m32

.PHONY: all default clean

default: myecho

all: myecho myenv

myecho: myecho.c

myenv: myenv.c

clean:
	rm -f myecho
