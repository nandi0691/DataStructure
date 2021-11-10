EXE=exe
TARGET: $(EXE)
CC=g++
RM=rm
exe: ArrClass.o
	$(CC) ArrClass.o -o $(EXE)

ArrClass.o: ArrClass.cpp
	$(CC) -c ArrClass.cpp -o ArrClass.o

clean:
	$(RM) ArrClass.o $(EXE)

