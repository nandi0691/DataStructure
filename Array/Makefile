EXE=exe
TARGET: $(EXE)
CC=g++
RM=rm
exe: Appl.o StringOp.o
	$(CC) Appl.o StringOp.o -o $(EXE)

Appl.o: Appl.cpp
	$(CC) -c Appl.cpp -o Appl.o

StringOp.o: StringOp.cpp
	$(CC) -c StringOp.cpp -o StringOp.o

clean:
	$(RM) Appl.o StringOp.o $(EXE)

