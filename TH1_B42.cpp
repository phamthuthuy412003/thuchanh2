#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	float S,p,a,b,c;
	cout<<"a = ";cin>>a;
	cout<<"b = ";cin>>b;
	cout<<"c = ";cin>>c;
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"Dien tich tam giac= "<<S<<endl;
	return 0;
}
