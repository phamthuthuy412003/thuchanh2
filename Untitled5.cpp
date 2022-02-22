#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	float x;
	cout<<"x = ";cin>>x;
	if(x>0&&x!=2)
	    cout<<"f(x)= "<<((pow(x,2)+2*sqrt(x))/(x-1))<<endl;
	else cout<<"0"<<endl;
	return 0;
}
