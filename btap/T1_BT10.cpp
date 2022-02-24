#include<iostream>
using namespace std;
int main()
{
	float day,y0,x,year,month,m0,dayofweek, mod ;
	cout<<"day = ";cin>>day;
	y0=year-(14-month)/12;
	x=y0+y0/4-y0/100+y0/400;
	m0=month+12*((14-month)/12)-2;
	dayofweek=((day+x+31*m0)/12) mod 7;
	cout<<"Sun";
	
	
	
