#include <iostream>  // Include the iostream header for input/output
#include <string>    // Include the string header to use std::string
#include <cctype>    // Include cctype for toupper and isspace functions

using namespace std;
string convertString(string str) 

{
  bool capital = true;
  for(int i = 0;i<str.length();i++)
  {
	  if(isspace(str[i]))
	  {
		  capital = true;
	  }
	  else if(capital)
	  {
		  str[i]=std::toupper(str[i]);
		  capital = false;
	  }
  }
  return str;
}
int main()
{
	string str = "hello world , nice to have you";
	str = convertString(str);
	cout<<"Capitalized string :"<<str<<endl;
	return 0;
}
