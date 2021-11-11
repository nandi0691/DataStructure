#include "ArrClass.h"
#include "StringOp.h"

void StrOperations()
{
	MyStr obj("I am a good programmer");
	cout<<obj.StrLength()<<endl;
	cout<<obj.RevString()<<endl;
}


void Array()
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
}

void MergeSortedArray(int arr1[],int arr2[])
{
	if(!arr1 || !arr2)
	{
		cout<<"the array is empty"<<endl;	
		return;
	}
	cout<<sizeof(arr1)<<endl;
	int n1 = sizeof(arr1)/sizeof(arr1[0]);
	int n2 = sizeof(arr2)/sizeof(int);
	cout<<"size is "<<n1<<"\t"<<n2<<endl;
	int arr[n1+n2];
	for(int i =0;i<n1;i++)
		arr[i]=arr1[2];

	for(int i=0;i<n2;i++)
		arr[n1+i]=arr2[i];

	for(int i =0;i<(n1+n2);i++)
		cout<<arr[i]<<endl;
}
int main()
{
	StrOperations();
	//Array();
	int arr[5]={1,2,3,4,5};
	int arr2[6]={1,2};
	//MergeSortedArray(arr,arr2);
	return 0;
}
