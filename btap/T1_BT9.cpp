#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, c, p;
	cout<<"a = ";cin>>a;
	cout<<"b = ";cin>>b;
	cout<<"c = ";cin>>c;
	if(a+b>c&&b+c>a&&a+c>b)
	{
		
		p=(a+b+c)/2;
		cout<<"Dien tich tam giac= "<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
		return 0;
	}
	else cout<<"invalid"<<endl;
	return 0;
}
		
