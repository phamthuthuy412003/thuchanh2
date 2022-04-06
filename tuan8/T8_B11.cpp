#include<bits/stdc++.h>
using namespace std;
struct DS{
	string hoten;
	float heso;
	int phucap;
	DS(string _hoten, float _heso, int _phucap)
	{
		hoten=_hoten;
		heso=_heso;
		phucap=_phucap;
	}
	DS(){
	}
};
int main()
{
	DS A;
	cin >> A.hoten >>A.heso >> A.phucap;
	cout << "Ho ten: "<< A.hoten <<", he so: "<<A.heso <<", phu cap: "<<
	A.phucap;
	cout <<endl;
	DS arr[2];
	for(int i=0 ;i<2; i++)
	{
		cin >> arr[i].hoten >> arr[i].heso >> arr[i].phucap;
		cout << "Ho ten: "<< arr[i].hoten <<", he so: "<<arr[i].heso <<
		", phu cap: "<<arr[i].phucap <<endl;
	}
	float L;
	L=(A.heso*1490000)+A.phucap;
	int max=arr[i];
	for(int i=1; i<n;i++)
	{
		if(max<L)
			max=L;
	}
	cout << "Luong cao: "<<max<<endl
	return 0;
}
