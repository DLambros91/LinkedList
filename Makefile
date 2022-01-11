CC=g++

CFLAGS=-g -Wall -Wpedantic -Werror

main: main.o
	${CC} ${CFLAGS} -o main main.o

main.o: main.cc linkedlist.hpp
	${CC} ${CFLAGS} -c main.cc

clean:
	${RM} *.o main