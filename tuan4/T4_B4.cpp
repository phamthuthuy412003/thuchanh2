#include<iostream>
using namespace std;
int main()
{
	int n,a[50],tg, i, k, x;
	cout << "n= ";
	cin >> n;
	for(int i=0; i<n; i++)
	{
	cout<<"a["<<i<<"]"<<"= ";
	cin>>a[i];
	}
	for(int i=0; i<n-1 ; i++)
		for(int j=i+1; j<n; j++)
			{
				if(a[i] > a[j])
				{
					tg=a[i];
					a[i]=a[j];
					a[j]=tg;
				}
			}
	cout<<"sap xep theo thu tu tang dan:";
	for(i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<"\nVi tri can chen: ";
	cin>>k;
	for(int i=n; i>k; i++ )
	{
		a[i] = a[i-1];
	}
	a[k]=x;
	n++;
	cout<<"Mang sau khi chen la: ";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	return 0;
}	
