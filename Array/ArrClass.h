/* This is a array class implementation
 * The operations performed by this class are:
 * push
 * pop
 * find
 * replace
 */

#ifndef _ARR_CLASS_H
#define _ARR_CLASS_H
#include <iostream>
using namespace::std;
class ArrClass{

	public:
		/*ArrClass()
		{
			cout<<"Inside constructor for ArrClass"<<endl;
			length = 0;
			arr = new int[10];
		}*/

		ArrClass(int arrSize)
		{
			cout<<"inside parametrised constructor for ArrClass"<<endl;
			length = arrSize;
			last_index = 0;
			arr = new int[arrSize];
		}

		unsigned int length;
		unsigned int last_index;
		int *arr;

		void push(int data)
		{
			if(this->last_index == this->length)
			{
				cout<<"no more push possible "<<data<<endl;
				return;
			}
			this->arr[this->last_index] = data;
			this->last_index++;
		}

		void pop()
		{
			if(this->last_index == 0)
			{
				cout<<"no more pop possible"<<endl;
				return;
			}
			this->last_index--;
			cout<<"popped "<<this->arr[this->last_index]<<endl;
			this->arr[this->last_index] = 0;

		}

		bool find(int val)
		{
			for(int i =0;i<this->length;i++)
			{
				if(this->arr[i] == val)
				return true;	
			}
			return false;
		}

		void replace(int val, int newVal)
		{
			for(int i =0;i<this->length;i++)
			{
				if(this->arr[i] == val)
					this->arr[i] = newVal;
			}
		}

		void print()
		{
			cout<<"the elements are\n";
			for(int i = 0;i<this->length;i++)
			{
				cout<<this->arr[i]<<endl;
			}
		}
};
#endif
