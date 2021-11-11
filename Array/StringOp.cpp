#include "StringOp.h"

/*
 * Purpose: to reverse a string
 * Ex: "I am a good programmer" will become "remmargorp doog a ma I"
 * */

unsigned int MyStr::StrLength()
{
        int i=0;
        while(s[i] != '\0')
        {
                i++;
        }
	return i;

}
string MyStr::RevString()
{
	string temp = GetString();
	string s = GetString();
	unsigned int len = StrLength();

	cout<<"length of the string is "<<len<<endl;
	int i = 0;
	for(i=0;i<len/2;i++)
	{
		temp[i] = s[len-i-1];	
		temp[len-i-1] = s[i];
	}

	//return temp;
	//Another approach is to use recursion
	return RevStr(s.c_str());
}

string MyStr::RevStr(const char * str)
{
	static int index  = 0;
	static char rev[100];

	if(*str)
	{
		RevStr(str+1);
		rev[index++]=*str;
	}
	return rev;
}
