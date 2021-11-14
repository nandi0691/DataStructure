#include "HeadRecursion.h"

void HeadRec(int n)
{
	if(n<0)
		return;
	cout<<"Value is "<<n<<endl;
	HeadRec(n-1);
}
void HeadRecursion()
{
	HeadRec(6);
	return;
}
