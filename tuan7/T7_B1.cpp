#include<bits/stdc++.h>
using namespace std;
void Xoa_Khoang_Trang_Thua_Dau_Va_Cuoi(string &str)
{
	while(str[0]==' ')
	{
		str.erase(str.begin()+0);
	}
	while(str[str.length()-1]==' ')
	{
		str.erase(str.begin()+str.length()-1);
	}
}
void Xoa_Khoang_Trang_Giua_Cac_Tu(string &str)
{
	for(int i=0; i<str.length(); i++)
	{
		if(str[i] == ' ' && str[i+1]== ' ')
		{
			str.erase(str.begin()+i);
			i--;
		}
	}
}
int main()
{
	string str;
	cout << "Nhap n = ";
	getline(cin,str);
	Xoa_Khoang_Trang_Thua_Dau_Va_Cuoi(str);
	Xoa_Khoang_Trang_Giua_Cac_Tu(str);
	cout << "Chuan hoa: " <<str;
	return 0;
}
