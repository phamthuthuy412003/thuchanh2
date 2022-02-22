#include <stdio.h>

int main() {
    int n, count=0, a[100];
    printf("N = "), scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i), scanf("%d", &a[i]);
    }
    printf("Day A =");
    for (int i = 0; i < n; i++) 
    {
        printf(" %d", a[i]);
        if (a[i] < 0) count++;
    }       
    printf("\nSo so am trong A: %d", count);
}    
