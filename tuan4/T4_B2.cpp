#include<iostream>
using namespace std;
int main()
{
	int n,a[50],tg, i;
	cout << "so mon hoc: ";
	cin >> n;
	for(int i=0; i<n; i++)
	{
	cout<<"a["<<i<<"]"<<"= ";
	cin>>a[i];
	}
	for(int i=0; i<n-1 ; i++)
		for(int j=i+1; j<n; j++)
			{
				if(a[i] < a[j])
				{
					tg=a[i];
					a[i]=a[j];
					a[j]=tg;
				}
			}
	cout<<"Diem sap xep theo thu tu giam dan:";
	for(i=0; i<n; i++)
		cout<<a[i]<<" ";
	return 0;
}				
