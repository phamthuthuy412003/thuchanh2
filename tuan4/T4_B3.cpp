#include<iostream>
using namespace std;
int main()
{
	int n,a[50],tg;
	cout << "n: ";
	cin >> n;
	for(int i=0; i<n; i++)
	{
	cout<<"a["<<i<<"]"<<"= ";
	cin>>a[i];
	}
	for(int i=0; i<n-1 ; i++)
		{
		    if( a[i] == a[i+1] )
				{
					for(int j=i+1; j<n-1; j++)
						{
							a[j]=a[j+1];
						}
						n--;
						i--;
				}
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
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	return 0;
}	
