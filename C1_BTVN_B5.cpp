#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, i;
	float sum;
	cout<<"n = ";cin>>n;
	for(i=1;i<=n;i++)
	    sum=sum+1.0/i;
	cout<<"Tong day so = "<<sum<<endl;
	return 0;
}
	
