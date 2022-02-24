#include<conio.h>
#include<stdio.h>
int main()
{
    int n,i,k; 
    printf("Nhap n: ");
    scanf("%d",&n);
    for(;n<=0;)
    {
        printf("Phai nhap n > 0 \nNhap lai n: ");
        scanf("%d",&n);
    }
    for( i = 1; i <= n; i++)
    {
        for( k = 1; k <= i; k++)
        {
            printf(" 0");            
        }
        printf("\n");
    }    
}

