#include <stdio.h>

void sortArrayIncrease(float a[3]) 
{
    float temp;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = i+1; j < 3; j++) 
        {
            if (a[i] > a[j]) 
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main() {
    float a[3];
    printf("A = "), scanf("%f", &a[0]);
    printf("B = "), scanf("%f", &a[1]);
    printf("C = "), scanf("%f", &a[2]);
    sortArrayIncrease(a);
    printf("X = %g", a[1]);
}
