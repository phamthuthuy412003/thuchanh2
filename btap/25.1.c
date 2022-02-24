// #include <stdio.h>
// #include <string.h>
// char *substr(char *s, int start, int end)
// {
// 	static char p[100];
// 	int j = 0;

// 	for (int i = start; i <= end; i++)
// 	{
// 		p[j] = s[i];
// 		j++;
// 	}
// 	p[j] = '\0';

// 	return p;
// }

// int main() {
//     char w[100], s[100]="";
//     int i;
//     printf("Nhap W = ");
//     gets(w); 
//     if (w == "") printf("Cac xau con la:\n"); 
//     else {
//     for (int i = 0; i<3; i++) strcat(s,w);
//     printf("Cac xau con la:");
//     for (int i = 0; i<=strlen(s);i=i+3) printf("\n%s", substr(s, i, i+2));
//     }
// }

#include<stdio.h>
#include<string.h>
int main(){
    char a[1000],b[1000], a1[1000];
    int i,j;
    printf("Nhap W = ");
    gets(a);
    strcpy(a1,a);
    j=strlen(a); 
    for(i=0;i<2;i++)
    {
        strcat(a,a1); 
    }
    j=strlen(a);
    printf("Cac xau con la:\n");
    for(i=0;i<=j-3;i=i+3)
    {
        strncpy(b,a+i,3);
        printf("%s\n",b);
    }
    return 0;
}
