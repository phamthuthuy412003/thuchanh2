#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	float X, A0, A1, A2, A3, A4;
	cout<<"X = ";cin>>X;
	cout<<"A0 = ";cin>>A0;
	cout<<"A1 = ";cin>>A1;
	cout<<"A2 = ";cin>>A2;
	cout<<"A3 = ";cin>>A3;
	cout<<"A4 = ";cin>>A4;
	cout<<"f(x) = "<<A0+A1*X+A2*pow(X,2)+A3*pow(X,3)+A4*pow(X,4)<<endl;
	return 0;
}
