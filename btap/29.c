#include<stdio.h>
#include<string.h>
int main()
{
    int n,i=0,s[1000];
    char a[1000][50],b[1000][50];
    printf("N = "); scanf("%d",&n);
    getchar();
    //nhap chuoi vao
    for(i=0;i<n;i++)
    {
        printf("Ten ngon ngu lap trinh thu %d: ",i+1);
        gets(a[i]);
    }
    //tinh do dai cac chuoi
    for (i=0;i<n;i++)
        s[i]= strlen(a[i]);
    //tim chuoi ngan nhat
    int min = s[0];
    for (i=0;i<n;i++)
        if(min>s[i])
        {
            min = s[i];
        }
    for(i=n-1;i>=0;i--)
        if(min==s[i]) break;
    printf("Ngon ngu ngan nhat cuoi cung la: %s",a[i]);
}
