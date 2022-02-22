// #include <stdio.h>
// #include <string.h>

// int main() 
// {
//     int length1, dec1, dec2;
//     char s[100];
//     dec1 = dec2 = 0;
// // Nhập xâu 
//     printf("Nhap W = ");
//     // fflush(stdin);
//     gets(s);
//     if (s == NULL) {
//         printf("Chuan hoa = ");
//         return 0;
//     }
//     else {
// //Chuẩn hóa xâu
//     length1 = strlen(s);
//     printf("%d", length1);
//     // Xóa kí tự trống ở đầu
//     while (s[0]==' ') 
//     {
//         for(int i = 1; s[i] != 0; i++) 
//         {
//             s[i-1]=s[i];
//         }
//         dec1++;
//     }
//     length1=strlen(s) - dec1;
//     printf("\n%d", length1);
//     // Xóa kí tự trống ở cuối
//     while((s[length1-1]== ' ') && (length1 > 0)) { s[--length1]=0; }
//     int i = 0;
//     // Xóa kí tự trống ở giữa
//     while (i < length1-1) {
//         if((s[i] == ' ') && (s[i+1] == ' ')) {
//         strcpy(&s[i], &s[i+1]); dec2++;
//         }
//         else i++; }
//     length1=length1 - dec2;
//     printf("\n%d", length1);
//     printf("\nChuan hoa = ");
//     for (i=0; i<length1; i++) printf("%c", s[i]);
//     return 0;
//     }
// }

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int i; char s[255];
    printf("Nhap W = "); gets(s);
    fflush(stdin);
// xoa ki tu trang o dau xau
    while (s[0]==' ')
        strcpy(&s[0],&s[1]);// xoa ki tu chua dau cach
// xoa ki tu trang o cuoi xau
    while (s[strlen(s)-1]==' ')
        strcpy(&s[strlen(s)-1],&s[strlen(s)]);//xoa ki tu chua dau cach
//xoa ki tu trang thua o giua xau
    for(i=0; i<strlen(s) ;i++)
        if ((s[i]==' ')&&(s[i+1]==' '))
        {
            strcpy(&s[i],&s[i+1]);
            i--;
        }
    printf("Chuan hoa = %s",s);
return 0;
}
