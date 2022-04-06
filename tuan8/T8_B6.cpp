/*#include<iostream>
using namespace std;

int main(){
	int a[100],n,d;
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"Nhap d: ";
	cin>>d;
	cout<<"Mang: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl<<"Mang sau khi thay doi: ";
	for(int i=n;i>d;i--){
		a[i]=a[i+1];
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}*/
#include <iostream>
using namespace std;
void nhap(int a[], int n){
	for (int i=0; i<n; i++){
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}
void xuat (int a[], int n){
	for (int i=0; i<n; i++)
		cout << " " << a[i];
	cout << endl;
}
void dich (int a[], int n, int d){
	int b[n];
	for (int i=0; i<d; i++)
		b[i] = a[n-d+i];
	for (int i=d; i<n; i++)
		b[i] = a[i-d];
	cout << "\nSau khi bi dich chuyen la:";
	xuat (b,n);
}
int main(){
	int n;
	do{
		cout << "Nhap n: "; cin >> n;
	}
	while (n <= 0);
	int a[n];
	nhap (a,n);
	cout << "Ham sau khi nhap la: ";
	xuat (a,n);
	int d;
	cout << "Nhap so gia tri can dich:"; cin >> d;
	dich(a,n,d);
}


