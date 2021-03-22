CC=gcc


all: lib
	gcc -I. -L. main.c -o main -llst -Wl,--rpath=.


lib: list.o
	$(CC) -shared -o liblst.so list.o

list.o:
	$(CC) -fpic -I. list.c -c

clean:
	rm main *.o *.so

