#include <stdio.h>

int main() {
    int n;
    float min=2000, a[100];
    printf("N = "), scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ", i), scanf("%f", &a[i]);
    }
    printf("Cac phan tu o vi tri chan:");
    for (int i = 0; i < n; i++) 
    {
        if(i%2==0) printf(" %g", a[i]);
    }       
}   
