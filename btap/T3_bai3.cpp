#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long n, i=0, sum=0;
	cout<<"n = ";
	cin>>n;
	while(i<=n)
	{
	    sum=sum+i;
	    i++;
	}
	cout<<"Tong= "<<sum<<endl;
	return 0;
}
