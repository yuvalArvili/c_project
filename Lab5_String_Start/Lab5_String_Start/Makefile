CC=gcc
OBJS= stringFunc.o questions.o main.o
EXEC=exe5
DEBUG= -g 	
CFLAGS= -Wall -Werror $(DEBUG)

$(EXEC) : $(OBJS)
	$(CC) $(OBJS) -o $@
 
stringFunc.o: stringFunc.c stringFunc.h 
functions.o: questions.c questions.h stringFunc.h 
main.o: main.c questions.h stringFunc.h 

clean:
	rm -f $(OBJS) $(EXEC)
