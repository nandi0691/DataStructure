TARGET: exe
exe: Appl.o HeadRecursion.o
	g++ Appl.o HeadRecursion.o -o exe
Appl.o: Appl.cpp
	g++ -c Appl.cpp -o Appl.o
HeadRecursion.o: HeadRecursion.cpp
	g++ -c HeadRecursion.cpp -o HeadRecursion.o
clean: 
	rm -rf Appl.o HeadRecursion.o exe
