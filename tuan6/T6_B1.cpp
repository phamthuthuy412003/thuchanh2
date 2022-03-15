#include<iostream>
using namespace std;
int maxThree(int a, int b, int c)
{
	int max=a;
	if(max<b)
	{
		max=b;
	}
	if(max<c)
	{
		max=c;
	}
	return max;
	
}
int main()
{
	int a, b, c, max;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	max=maxThree(a,b,c);
	cout << max <<endl;
	return 0;
}
