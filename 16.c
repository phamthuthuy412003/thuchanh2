#include <stdio.h>

int main() {
    int n, count=0;
    while (n > 0) 
    {
        printf("Hay nhap mot so duong: "), scanf("%d", &n);
        if (n>0) count++;
    }
    printf("Ban da nhap %d so nguyen duong!", count);
}
