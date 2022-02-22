#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	float a;
	do
	{
		cout<<"Diem = "; cin>>a;
	} while (a<0||a>10);
	if (a<4.5) cout<<"Diem F";
	    else if (a<5.5) cout<<"Diem D";
	        else if (a<7) cout<<"Diem C";
	            else if (a<8.5) cout<<"Diem B";
	                else cout<<"Diem A";
	return 0;
}
	
	    
