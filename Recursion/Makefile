TARGET: exe
exe: Appl.o HeadRecursion.o TailRecursion.o
	g++ Appl.o HeadRecursion.o TailRecursion.o -o exe
Appl.o: Appl.cpp
	g++ -c Appl.cpp -o Appl.o
HeadRecursion.o: HeadRecursion.cpp
	g++ -c HeadRecursion.cpp -o HeadRecursion.o
TailRecursion.o: TailRecursion.cpp
	g++ -c TailRecursion.cpp -o TailRecursion.o
clean: 
	rm -rf Appl.o HeadRecursion.o exe TailRecursion.o
