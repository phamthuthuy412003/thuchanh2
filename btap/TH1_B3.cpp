#include<cmath>
#include<iostream>
#define PI 3.1416
using namespace std;
int main()
{
	int r;
	float S, C;
	cout<<"Nhap r: ";cin>>r;
	S=PI*pow(r,2);
	C=2*PI*r;
	cout<<"PI*r^2= "<<S<<endl;
	cout<<"2*PI*r= "<<C<<endl;
	return 0;
}
