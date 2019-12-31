//to check if the given year is leap year or not

#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"enter the year:"<<"\n";
	cin>>a;
	if(a%4==0)
	cout<<a<<" is a leap year";
	else
	cout<<a<<" not a leap year";
}
