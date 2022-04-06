#include<bits/stdc++.h>
using namespace std;
struct SV
{
	string ten;
	float diemhoa;
	float diemtoan;
	float diemly;
	SV(string _ten, float _diemhoa, float _diemtoan, float _diemly)
	{
		ten=_ten;
		diemhoa=_diemhoa;
		diemtoan=_diemtoan;
		diemly=_diemly;
	}
	SV(){
	}
};
int main()
{
	SV A;
	cin>>A.ten>>A.diemhoa>>A.diemtoan>>A.diemly;
	cout << "ten :" << A.ten << ", diem hoa:" << A.diemhoa << ", diem toan:" << A.diemtoan
	<< ", diem ly:" <<A.diemly << endl;
	cout <<"\nDiem TB cac mon la: " << (A.diemhoa+A.diemtoan+A.diemly)/3<<endl;
	
	return 0;
}

