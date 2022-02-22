#include <stdio.h>

int main() {
    int m, n, s;
    s = m = 0;
    printf("N = "), scanf("%d", &n);
    while (s < n) 
    {
        s += m;
        m++;
    }
    if (n == 0) printf("m lon nhat = 0");
    else printf("m lon nhat = %d", m-2);
}
