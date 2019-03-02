# Makefile

#target: dependency1 dependency2
#	action1
#	action2

# COMPILER
CC = gcc

# COMPILER OPTIONS
# -g for debug
# -O2 for optimise 
# -Wall additional messages
OPTIONS = -O2 -g -Wall

# Directory for sources
SRC :=
SRC += ./src/main.c
SRC += ./src/operations/sum.c
SRC += ./src/operations/subt.c

# Directory for header files
INCLUDES = -I ./inc

# Directory for binary
BIN = ./bin/calculator

# To declare all, clean are not files
.PHONY: all clean
 
all: ${OBJS}
	@echo "Building.."
	${CC} ${OPTIONS} ${SRC} ${INCLUDES} -o ${BIN}

clean:
	@echo "Cleaning up.."
	-rm ${BIN}