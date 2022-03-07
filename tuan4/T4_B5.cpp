#include<iostream>
using namespace std;
void nhap(int a[], int n)
{
    cout << "Nhap n: ";
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cout <<"a["<<i<<"]"<<"=";
		cin >>a[i];
	}
}
void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout << " "<<a[i];
}
void check(int a[], int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=a[n-1-i])
			dem++;
	}
	if(dem=0)
		cout<<"Symmetric array."<<endl;
	else cout << "Asymmetric array." <<endl;
}
int main()
{
	int a[100], n;
	nhap(a,n);
	cout<<"Ket qua";
	check(a,n);
	return 0;	
}

