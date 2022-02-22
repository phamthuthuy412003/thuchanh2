#include <stdio.h>

int main() {
    int a, b, c;
    printf("Nhap a = "), scanf("%d", &a);
    printf("Nhap b = "), scanf("%d", &b);
    printf("Nhap c = "), scanf("%d", &c);
    if (b <= c) printf("Y = %d", a*a+3*a-1);
    else printf("Y = 0");
}
