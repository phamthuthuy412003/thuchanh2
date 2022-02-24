#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int x;
	float  e=2.71828;
	cout<<"x = ";cin>>x;
	if(x>0)
	    cout<<"f(x)= "<<((pow(e,x)-1)/(sqrt(x)+1))<<endl;
	else cout<<"Bieu thuc khong xac dinh!"<<endl;
	return 0;
}
