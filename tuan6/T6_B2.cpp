#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int number)
{
	if (number <= 1)
	{
		cout << "false";
	}
	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number%i == 0)
		{
			cout <<"false";
		}
	}
	//cout << "true";
	return true;
	cout << "true";
	
}
int main()
{
	int n;
	cout << "N = ";
	cin >> n;
	isPrime(n);
	return 0;
}
