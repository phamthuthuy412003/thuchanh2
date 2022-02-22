//Giai phuong trinh bac 2
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	float a, b, c, delta, x1, x2;
	cout<<"Nhap a = ";cin>>a;
	cout<<"Nhap b = ";cin>>b;
	cout<<"Nhap c = ";cin>>c;
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			    cout<<"Phuong trinh co vo so nghiem!"<<endl;
			else cout<<"Phuong trinh vo nghiem!"<<endl;
		}
		else
		{
			cout<<"Phuong trinh co mot nghiem duy nhat: "<<-c/b<<endl;
		}
	}
	else
	{
		delta=b*b-4*a*c;
	    if(delta>0)
	    {
	    	cout<<"Phuong trinh co 2 nghiem: "<<endl;
	    	x1=(-b+sqrt(delta))/(2*a);
	    	x2=(-b-sqrt(delta))/(2*a);
	    	cout<<"Nghiem thu nhat: "<<x1<<endl;
	    	cout<<"Nghiem thu hai: "<<x2<<endl;
	    }
	    else
	    {	
	   	    if(delta==0)
	   	        cout<<"Phuong trinh có 2 nghiem kep: x1 = x2 = "<<-b/(2*a)<<endl;
	   	    else
	   	        cout<<"Phuong trinh vo nghiem!"<<endl;
	   	}
	}
    return 0;
}
	    
