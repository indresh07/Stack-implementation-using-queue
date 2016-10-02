all: que_func.o main.o
	gcc -w -o que que_func.o main.o -Wno-deprecated

main.o: main.c
	gcc -c main.c -Wno-deprecated

que_func.o: que_library.h que_func.c
	gcc -c que_func.c -Wno-deprecated
clean:
	rm *.o
