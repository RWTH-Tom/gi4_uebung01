CC = gcc
CFLAGS = -std=c99 -m32

.PHONY: all default clean

default: myecho

all: myecho myenv isset myexec

myecho: myecho.c

myenv: myenv.c

isset: isset.c

myexec: myexec.c

clean:
	rm -f myecho
	rm -f isset
	rm -f myenv
	rm -f myexec
