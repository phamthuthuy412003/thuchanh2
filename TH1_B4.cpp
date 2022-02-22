#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	int n;
	float x, A;
	cout<<"Nhap n: "<<endl;cin>>n;
	cout<<"Nhap x: "<<endl;cin>>x;
	A=pow(3,n)+5*abs(x)+log(3*x);
	cout<<"3^x+5*abs(x)+ln(3*x)="<<A<<endl;
	return 0;
}
	
