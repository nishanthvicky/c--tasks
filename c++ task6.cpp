// sorting in an ascending order
#include<iostream>
using namespace std;
main()
{
	int a[100],i,j,n,temp;
	cout<<"enter the number of elements :";
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
	cout<<"elements in ascending order :";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\n";
	
}
