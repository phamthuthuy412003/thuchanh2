#include<iostream>
#include<cmath>
using namespace std;
bool ktscp(int n)
{
	int num=sqrt(n);
	if(num*num ==n)
	    return true;
	return false;
}
int main()
{
	int lowerBound, upperBound;
	cin>>lowerBound>>upperBound;
	for(int i=lowerBound;i<=upperBound;i++)
	{
		if(ktscp(i)==true){
			cout<<i<<" ";
		}
	}
	return 0;
}
    
