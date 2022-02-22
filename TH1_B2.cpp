#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y;
	float F,G;
	cout <<"nhap x: ";cin>>x;
	cout <<"nhap y: ";cin>>y;
	F=pow(x,5)+5*pow(x,(5*1.0/3))-6;
	G=x*y-pow(x,2)+x*pow(y,2)-pow(y,3);
	cout <<"x^5+5*(x)^(5*1.0/3)-6= "<<F<<endl;
	cout <<"x*y-x^2+x*(y^2)-y^3= "<<G<<endl;
	return 0;
}
