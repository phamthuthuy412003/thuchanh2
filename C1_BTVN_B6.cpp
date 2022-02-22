#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, i;
	float sum;
	cout<<"n = ";cin>>n;
	for(i=0;i<n;i++)
	    sum=sum+((1.0/(2*i-1))-(1.0/2*i));
	cout<<"Tong day so = "<<sum<<endl;
	return 0;
}
