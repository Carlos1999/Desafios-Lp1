CC = g++
CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)
SRC = ./src
INC = ./include
BIN = ./bin
OBJ = ./build

PROG = $(BIN)/teste
OBJS = $(OBJ)/palindroma.o $(OBJ)/main.o 

all:mkdirs $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/palindroma.o: $(INC)/pilha.h $(INC)/palindroma.h   $(SRC)/palindroma.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/palindroma.cpp -o $(OBJ)/palindroma.o

$(OBJ)/main.o: $(INC)/pilha.h $(INC)/palindroma.h   $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

mkdirs: 
	mkdir -p $(BIN)
	mkdir -p $(OBJ)

run:
	$(BIN)/teste

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*
	