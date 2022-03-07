#include<iostream>
using namespace std;
int main()
{
	int n, a[50], b[50];
	int check=0;
	cout << "Mang 1: ";
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]"<<"= ";
		cin>>a[i];
	}
	cout << "Mang 2: ";
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cout<<"b["<<i<<"]"<<"= ";
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==b[i]) 
			check=1;	
		else
		{ check =0; break;}
	}
	if(check==1)
		cout <<"YES";
	else
		cout <<"NO";
	
	return 0;
}
	
