#include <stdio.h>
#include <string.h>
 
int main()
{
    int p, q, m;
    char w[50], s[50], temp[50], temp2[50];
    printf("Nhap W = ");
    gets(w);
    printf("Nhap S = ");
    gets(s);
    printf("P = "), scanf("%d", &p);
    printf("Q = "), scanf("%d", &q);
    if (p > strlen(w) || q > strlen(w)) return 0;
    if (q < p) {
    strcpy(temp, w+q);
    strcpy(w+q, s);
    strcat(w, temp);
    m = p + strlen(s);
    strcpy(temp2, w+m);
    strcpy(w+m, s);
    strcat(w, temp2);
    printf("Ket qua: ");
    for (int i = 0; i < strlen(w); i++) printf("%c", w[i]);
    }
    else {
    strcpy(temp, w+p);
    strcpy(w+p, s);
    strcat(w, temp);
    m = q + strlen(s);
    strcpy(temp2, w+m);
    strcpy(w+m, s);
    strcat(w, temp2);
    printf("Ket qua: "); 
    for (int i = 0; i < strlen(w); i++) printf("%c", w[i]);
    }
}
