#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap so phan tu cua day = ";
	cin>>n;
	float a[n];
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]"<<"= ";
		cin>>a[i];
	}
	 for(int i = 0; i < n; i++)
    {
        cout<<a[i] << "\t";
    }
    cout << endl;
    for(int i=n-1; i>=0; i--)
    {
    	cout << (int)a[i] << "\t" ;
	}
    return 0;
}

