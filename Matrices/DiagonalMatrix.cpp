#include <iostream>
#include "DiagonalMatrix.h"
/*
 * Compilation is done with below commands
 * g++ -c DiagonalMatrix.cpp -o matrix.o
 * g++ matrix.o -o exe
 * */
using  namespace std;
DiagonalMatrix::DiagonalMatrix()
{
	this->n = 4;
	matrix = new int[this->n];
}
DiagonalMatrix::DiagonalMatrix(int n)
{
	this->n = n;
	matrix = new int[n];
}
DiagonalMatrix::~DiagonalMatrix()
{
	delete []matrix;
	matrix = NULL;//This is part of cstddef library
}


void DiagonalMatrix::set(int index,int val)
{
	if(index >= n)
		return;
	matrix[index-1] = val;
}

int DiagonalMatrix::get(int index)
{
	if(index >= n)
		return 0;
	return matrix[index-1];
}

void DiagonalMatrix::print()
{
	for(int i=0;i<n;i++)
	{
		for(int j =0 ;j<n;j++)
		{
			if(i==j)
				cout<<get(i+1);
			else
				cout<<"0";

			cout<<"\t";
		}
		cout<<endl;
	}
}
int main()
{
	DiagonalMatrix m1(5);
	m1.set(1,45);
	m1.set(19,3);
	m1.print();
}
