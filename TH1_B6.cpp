#include<cmath>
#include<iostream>
#define PI 3.1416
using namespace std;
int main()
{
	float a,b,C,S;//C la goc xen giua
	cout<<"Nhap a= ";cin>>a;
	cout<<"Nhap b= ";cin>>b;
	cout<<"Nhap C= ";cin>>C;
	S=(1.0/2)*a*b*sin(PI*C/180);
	cout<<"Dien tich tam giac= "<<S<<endl;
	return 0;
}
