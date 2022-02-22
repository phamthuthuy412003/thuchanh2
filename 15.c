#include <stdio.h>

int main() {
    const int b1 = 1484;
    const int b2 = 1533;
    const int b3 = 1786;
    const int b4 = 2242;
    const int b5 = 2503;
    const int b6 = 2587;

    int n;
    double m;
    printf("N = "), scanf("%d", &n);
    if (n <= 50) m = n*b1;
    else if (n <= 100) m = 50*b1 + (n-50)*b2;
    else if (n <= 200) m = 50*b1 + 50*b2 + (n-100)*b3;
    else if (n <= 300) m = 50*b1 + 50*b2 + 100*b3 + (n-200)*b4;
    else if (n <= 400) m = 50*b1 + 50*b2 + 100*b3 + 100*b4 + (n-300)*b5;
    else m = 50*b1 + 50*b2 + 100*b3 + 100*b4 + 100*b5 + (n-400)*b6;
    printf("So tien phai nop: %.0lf", m);
}
