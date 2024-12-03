CC=gcc
OBJS=arrays.o exe.o lab2.o prog.o
EXEC=exe2
DEBUG= -g 	
CFLAGS= -Wall -Werror $(DEBUG)

$(EXEC) : $(OBJS)
	$(CC) $(OBJS) -o $@
 
arrays.o: arrays.c arrays.h
exe.o: exe.c exe.h lab2.h arrays.h
lab2.o: lab2.c lab2.h
prog.o: prog.c exe.h

clean:
	rm -f $(OBJS) $(EXEC)
