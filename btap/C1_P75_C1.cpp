//Nhap vao thang dua ra so ngay cua thang do
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	int t, n;
	cout<<"Nhap thang: ";cin>>t;
	if(t>1||t<=12)
	{
	    switch(t)
	    case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
	    cout<<"Thang"<<t<<"la thang co 31 ngay";
		 break;
	    case 4:
		case 6:
		case 9:
		case 11:
	    cout<<"Thang"<<t<<"la thang co 30 ngay";
		break;
	    case 2:
	    	cout<<"Nhap nam: ";cin>>n;
	    	if((n%4 ==0 && n% 100 != 0) || (n %400 ==0))
	    	   cout<<"Thang"<<t<<"co 29 ngay";
	    	else cout<<"Thang"<<t<<"co 28 ngay";
		break;
 	}
    return 0;
}
	
