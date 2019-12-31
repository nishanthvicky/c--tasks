// string to lowercase

#include<iostream>
#include<String>
using namespace std;
main()
{
	char str[20],i,a;
	cout<<"enter the string: ";
	cin>>str;
	cout<<"the string at lowercase is ";
	for(i=0;i<20;i++)
	{
		a=str[i]+32;
		cout<<a;
	}
	
}
