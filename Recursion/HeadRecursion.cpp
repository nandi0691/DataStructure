#include "HeadRecursion.h"
/*
 * In this case we will call function at the beginning
 * Func(args...)
 * {
 * Func(args...);
 * ....
 * ....
 * }
 * Below is the program for printing n numbers
 * */

void HeadRec(int n)
{
	if(n>0)
	{
		HeadRec(n-1);
		cout<<"Value is "<<n<<endl;
	}
}

void HeadRecursion()
{
	HeadRec(6);
	return;
}
