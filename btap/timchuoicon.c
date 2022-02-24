//tim chuoi con
#include<stdio.h>
#include<string.h>
int main(){
    char a[1000],b[1000], a1[1000];
    int i,j;
    printf("Nhap W = ");
    gets(a);//nhap tu ban phim 1 xau
    strcpy(a1,a);//copy xau a vao xau a1
    j=strlen(a); //tra lai do dai cua xau
    for(i=0;i<2;i++)
    {
        strcat(a,a1);//ham noi xau a1 vao xau a
    }
    j=strlen(a);
    printf("Cac xau con la:\n");
    for(i=0;i<=j-3;i=i+3)
    {
        strncpy(b,a+i,3);//copy 3 ky tu dau tien tu a+1 vao b
        printf("%s\n",b);
    }
    return 0;
}
