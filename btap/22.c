#include <stdio.h>
#include <string.h>

int main() {
    int i, k;
    char s[100];
    printf("Nhap W = "); gets(s);
    if (s == NULL) printf("W sau khi xoa cac chu so = ");
    else {
    for(int i=0;i<strlen(s);i++)
    if(s[i]>='0' && s[i]<='9')
    {		
        for(int t=i;t<strlen(s);t++)
        s[t]=s[t+1];
        i--;
    }
    printf("W sau khi xoa cac chu so = ");
    puts(s);
    return 0;
    }
}

// #include<stdio.h>
// #include<math.h>
// #include<string.h>

// int main(){
// 	int i,j,k,d=1;
// 	char s[1000];
// 	char a[10]= {'0','1','2','3','4','5','6','7','8','9'};
// 	printf("Nhap W = ");gets(s);
// 	for (i=0;i<10;i++){
// 		for (j=0;j<strlen(s);j++){
// 			if (a[i]==s[j]){
// 				for (k=j;k<strlen(s);k++){
// 					s[k]=s[k+1];
// 				}
// 			}
// 		}
// 	}
// 	for (i=0;i<10;i++){
// 		for (j=0;j<strlen(s);j++){
// 			if (a[i]==s[j]){
// 				for (k=j;k<strlen(s);k++){
// 					s[k]=s[k+1];
// 				}
// 			}
// 		}
// 	}
// 	for (i=0;i<strlen(s);i++){
// 		if (s[i]==' ' && s[i+1]==' ')
// 			for (k=i;k<strlen(s);k++){
// 				s[k]=s[k+1];
// 			}
// 	}
// 	for (i=0;i<strlen(s);i++){
// 		if (s[i]==' ' && s[i+1]==' ')
// 			for (k=i;k<strlen(s);k++){
// 				s[k]=s[k+1];
// 			}
// 	}
// 	printf("W sau khi xoa cac chu so = ");
// 	puts(s);
// 	return 0;
// }
