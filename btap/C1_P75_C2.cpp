#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	int x,y,so;
	float e =2.71828;
	cout<<"Chon so: ";cin>>so;
	if(so<1||so<=3)
	{
		switch(so)
		{
		case 1:
			cout<<"x= ";cin>>x;
			cout<<"y= ";cin>>y;
			cout<<"Ham 1= "<<(x+y)/(pow(x,2)+pow(y,2)+1);
			break;
		case 2:
			cout<<"x= ";cin>>x;
			cout<<"y= ";cin>>y;
			cout<<"Ham 2= "<<pow(e,x)+5*y;
			break;
		case 3:
			cout<<"x= ";cin>>x;
			cout<<"y= ";cin>>y;
			cout<<"Ham 3= "<<(1+pow(x,2))*y;
			break;
		}
	}
	else cout<<"So ban chon khong phu hop!";
	return 0;
}
			
	
