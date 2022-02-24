#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float f;
    f = 0;
    printf("N = "), scanf("%d", &n);
    for (i=n; i>=1; i--) f = sqrt(i + f);
    printf("F(n) = %g", f);
}

