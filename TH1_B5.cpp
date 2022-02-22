#include <iostream>
using namespace std;

int main()
{
    int n,a, b, c, d;
    do
    {
        cout << "Nhap so tien can rut: ";
        cin >> n;
    } while (n % 50000 != 0);
    a = n / 500000;
    n = n - 500000 * a;
    b = n / 200000;
    n = n - 200000 * b;
    c = n / 100000;
    n = n - 100000 * c;
    d = n / 50000;
    cout << "So luong cac to tien it nhat can phai tra la:";
    if (a > 0)
        cout << "\nMenh gia 500000: " << a;
    if (b > 0)
        cout << "\nMenh gia 200000: " << b;
    if (c > 0)
        cout << "\nMenh gia 100000: " << c;
    if (d > 0)
        cout << "\nMenh gia 50000: " << d;
    return 0;
}

#include<iostream>

using namespace std;

int main()
{
	int tien,i,j,k,m;
    
    do
    {
    	cout << "Nhap so tien muon rut: ";
    	cin >> tien;
    	if(tien<0|| tien%50000!=0)
    		cout << "So tien ko hop le." << endl;
	}while(tien<0|| tien%50000!=0);
    
    i = tien/500000;
    tien = tien - i*500000;
    cout << "So to tien 500.000 la: " << i << endl;
    
    j = tien/200000;
    tien = tien - j*200000;
    cout << "So to tien 200.000 la: " << j << endl;
    
    k = tien/100000;
    tien = tien - k*100000;
    cout << "So to tien 100.000 la: " << k << endl;
    cout << "So to tien 500.000 la: " << m << endl;
    
    return 0;      
}

