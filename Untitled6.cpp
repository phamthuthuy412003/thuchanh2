#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	 float sl, gia;
	cout<<"So luong = "; cin>>sl;
	cout<<"Don gia = "; cin>>gia;
	if (sl<0||gia<0) cout<<"So lieu khong hop le";
	else if (sl<=4) cout<<"Tong tien = "<<sl*gia;
	     else if (sl<10) cout<<"Tong tien = "<<sl*gia-15.0/100*(sl*gia);
	          else cout<<"Tong tien = "<<sl*gia-30.0/100*(sl*gia);
	return 0;
}


