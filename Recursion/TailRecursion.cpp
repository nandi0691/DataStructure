#include "TailRecursion.h"
/*
 * In this case we will call function at the beginning
 * Func(args...)
 * {
 * ....
 * ....
 * Func(args...);
 * }
 * Below is the program for printing n natural numbers
 * */

void TailRec(int n)
{
	if(n>0)
	{
		cout<<"Value is "<<n<<endl;
		TailRec(n-1);
	}
}

void TailRecursion()
{
	TailRec(6);
	return;
}
