#include <stdio.h>

int main() {
    int n, count = 0;
    float max=-2000, a[250];
    printf("N = "), scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i), scanf("%f", &a[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        if (max < a[i]) max = a[i];
    }       
    printf("Gia tri lon nhat cua A: %g", max);
    for (int i = 0; i<n; i++) 
    {
        if (a[i]==max) count++;
    }
    printf("\nSo phan tu co gia tri lon nhat: %d\n", count);
}   
