#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[20],w[20];
    int d = -1;
    printf("Nhap xau S: ");
    gets(s);
    printf("Nhap xau W: ");
    gets(w);
    if(strstr(s,w)!=NULL)
    {
    d=strlen(s)-strlen(strstr(s,w));
    printf("W xuat hien trong S o vi tri %d\n",d);
    }
    else printf("W khong xuat hien trong S\n");
}
