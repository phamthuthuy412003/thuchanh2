#include<bits/stdc++.h>
using namespace std;
int main()
{
	float a,b,c,p,S;
	cout << "Canh a: ";
	cin >> a;
	cout << "Canh b: ";
	cin >> b;
	cout << "Canh c: ";
	cin >> c;
	if(a+b>c && a+c>b && b+c>a)
	{
		p=(a+b+c)/2;
		S=sqrt(p*(p-a)*(p-b)*(p-c));
		cout << "Dien tich tam giac: " << S <<endl;
	}
	else cout << "invalidinvalid";
	return 0;
	
}
