#include <stdio.h>

int main() {
    int a[100][100], m, n;
    printf("M = "), scanf("%d", &m);
    printf("N = "), scanf("%d", &n);
    if (m == 0 || n == 0) printf("");
    else {
        for (int i = 0; i < m; i++) 
        {
        for (int j = 0; j < n; j++) {
            if(j==n-1) printf("0");
            else printf("0 ");
        }
        printf("\n");
        }
    }
}
