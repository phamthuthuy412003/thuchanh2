#include<bits/stdc++.h>
using namespace std;
int computeGcd(int a, int b)
{
	while (a != b)
	{
		if(a>b)
			a=a-b;
		else 
			b=b-a;
	}
	return a;
}
int main()
{
	int a, b;
	char c;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >>b;
	cout << "UCLN la: "<< computeGcd(a,b) <<endl;
}
