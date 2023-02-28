CXX=g++-8
CXXFLAGS= -Wall -Wextra -Werror -std=c++2a -pedantic

OBJS= main.o game.o player.o invalid-argument.o
BIN= main

all: ${BIN}

${BIN}: ${OBJS}

clean:
	${RM} ${OBJS} ${BIN}

.PHONY: clean all
