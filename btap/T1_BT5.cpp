#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float C, F;
	cout<<"C = ";cin>>C;
	F=(C*1.8)+32;
	cout<<"F = "<<F<<fixed<<setprecision(2)<<endl;
	return 0;
}
