#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout<<"Nhap a = ";cin>>a;
	cout<<"Nhap b = ";cin>>b;
	cout<<"Nhap c = ";cin>>c;
	cout<<"3 so tren la do dai cua 1 tam giac!"<<(a+b>c)&&(b+c>a)&&(a+c>b)<<endl;
	cout<<"Tam giac tren la ta giac deu!"<<a=b=c<<endl;
	return 0;
}
