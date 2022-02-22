#include <stdio.h>

int main() {
    int n;
    float min=2000, a[100];
    printf("N = "), scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i), scanf("%f", &a[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        if (min > a[i]) min = a[i];
    }       
    printf("Gia tri nho nhat trong A: %g", min);
}   
