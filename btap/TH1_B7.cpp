#include<iostream>
#include<cmath>
#define PI 3.1416
using namespace std;

int main()
{
	float x1, y1, x2, y2, x3, y3, a, b, c, p, s;
	cout << " Nhap toa do diem A(x;y) = ";
	cin >> x1 >> y1;
	cout << " Nhap toa do diem A(x;y) = ";
	cin >> x2 >> y2;
	cout << " Nhap toa do diem A(x;y) = ";
	cin >> x3 >> y3;
	a = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
	b = sqrt(pow((x3-x2), 2) + pow((y3-y2), 2));
	c = sqrt(pow((x3-x1), 2) + pow((y3-y1), 2));
	p = (a+b+c)/2; 
	s = sqrt(p*(p-a)*(p-b)*(p-c)); 
	cout << "Chu vi tam giac C = " << p*2 << endl;
	cout << "Dien tich tam giac S = " << s << endl;
	return 0;
}




