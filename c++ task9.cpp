// converting days into years,weeks and days.
#include<iostream>
using namespace std;
main()
{
	int day,year,a,week,days;
	cout<<"enter the number of days :";
	cin>>day;
	if(day%366==0)
	{
	cout<<"It is a leap year";
}
else
{
	year=day/365;
	a=day%365;
	week=a/7;
	days=a%7;
	cout<<"years: "<<year;
	cout<<"\nweek: "<<week;
	cout<<"\ndays: "<<days;
}
}
