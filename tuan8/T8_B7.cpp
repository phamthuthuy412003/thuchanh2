#include<bits/stdc++.h>
using namespace std;
string toLower (string s)
{
	for(int i=0; i<s.size();i++)
	{
		s[i]=tolower(s[i]);
		cout << s[i];
	}
}
int main()
{
	string s;
	cout << "Nhap vao mot xau: ";
	getline(cin,s);
	cout << "Xau chuyen ve dang chu thuong: ";
	toLower(s);
	return 0;
}
