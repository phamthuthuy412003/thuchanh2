#include <stdio.h>

int main() {
    int n, i;
    do {
        printf("N = "), scanf("%d", &n);
    } while (n<=0);
    printf("Cac so chia het cho 3 trong khoang N den 2N:");
    for (i=n; i<=2*n; i++) 
        if (i % 3 == 0) printf(" %d",i);
}
