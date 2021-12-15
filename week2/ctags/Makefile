all: simpleshell

simpleshell: simple-shell2.o getinput.o sig.o
	gcc -Wall -o simpleshell simple-shell2.o getinput.o sig.o

simple-shell2.o: getinput.h sig.h 
	gcc -c -Wall simple-shell2.c 

getinput.o: getinput.c
	gcc -c -Wall getinput.c

sig.o: sig.c
	gcc -c -Wall sig.c

clean:
	rm getinput.o
	rm sig.o  
	rm simple-shell2.o
