CC=g++

CFLAGS=-g -Wall -Wpedantic -Werror

main: main.o

main.o: main.cpp linkedlist.hpp
	${CC} ${CFLAGS} -o main.o

clean:
	${RM} *.o main