//to find largest and smallest elements in an array

#include<iostream>
using namespace std;
main()
{
	int a[100],n,i,j,l,s;
	cout<<"enter the number of elements :";
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	l=s=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>l)
		{
		l=a[i];
}
}
for(i=1;i<n;i++)
{
	if(a[i]<s)
	{
		s=a[i];
	}
}
	cout<<l<<" is the largest number\n";	
	cout<<s<<" is the smallest number";	
}
