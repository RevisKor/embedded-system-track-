all: main

main:	main.o tools.o
		gcc main.o tools.o -o main

main.o:	main.c tools/tools.h
		gcc -g -c main.c -o main.o

tools.o:	tools/tools.c tools/tools.h
		gcc -g -c tools/tools.c -o tools.o

rebuild:	
		make clean
		make

clean:
		rm -f main *.o 
run:
		./main

