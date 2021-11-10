#include "ArrClass.h"

int main()
{
	ArrClass array(1);
	array.push(10);
	array.print();

	ArrClass array2(15);
	array2.push(21);
	array2.push(22);
	array2.push(23);
	array2.print();
	
	cout<<"array2.find(22) "<<array2.find(22)<<endl;
	array2.replace(22,32);
	cout<<"array2.find(23) "<<array2.find(23)<<endl;
	array2.print();
	array2.pop();
	array2.pop();
	array2.pop();

	for(int i =0;i<15;i++)
	{
		array2.push(10+i);
	}

	for(int i=0;i<20;i++)
		array2.pop();
	return 0;
}
