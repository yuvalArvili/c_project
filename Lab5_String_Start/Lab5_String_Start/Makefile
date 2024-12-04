CC=gcc
OBJS=arrays.o exe.o functions4.o main.o
EXEC=exe4
DEBUG= -g 	
CFLAGS= -Wall -Werror $(DEBUG)

$(EXEC) : $(OBJS)
	$(CC) $(OBJS) -o $@
 
arrays.o: arrays.c arrays.h
exe.o: exe.c exe.h functions4.h 
functions3.o: functions4.c function4.h
main.o: main.c exe.h

clean:
	rm -f $(OBJS) $(EXEC)
