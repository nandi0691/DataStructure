/*String related opertions will be performed by this class
 * 1-String Reverse
 * */
#ifndef _STR_OP_
#define _STR_OP_
#include <iostream>

using namespace::std;

class MyStr{
	public:
		MyStr(string s)
		{
			this->s = s;
		}
	private:
		string s;
	public:
		string RevString();
		unsigned int StrLength();
		string RevStr(const char * str);
		string GetString()
		{
			return s;
		}
};
#endif

