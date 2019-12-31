// sum of all elements in an array
#include<iostream>
using namespace std;
main()
{
	int num[100],i,n,c=0,a;
	cout<<"enter the number of elements :";
	cin>>n;
	for(i=0;i<n;i++)
	cin>>num[i];
	for(i=0;i<n;i++)
	{
	a=c+num[i];
	c=a;
}
cout<<"the sum of all the elements in an array is "<<a;
}
