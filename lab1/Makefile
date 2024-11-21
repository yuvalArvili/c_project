prog1: lab1.o main.o
	gcc lab1.o main.o -o prog1
	
lab1.o: lab1.c lab1.h
	gcc -c lab1.c

lab1.o: main.c main.h
	gcc -c main.c
	
clean:
	rm -f * o prog1
	
