#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	char s[255];
	printf("Nhap W = ");
	gets(s);
	fflush(stdin);
	while(s[0] == ' ')
	strcpy(&s[0],&s[1]);
	while (s[strlen(s)-1]==' ')
	strcpy (&s[strlen(s)-1],&s[strlen(s)]);
	for(i=0; i<strlen(s); i++)
	if((s[i]==' ')&&(s[i+1]==' '))
	{
		strcpy(&s[i],&s[i+1]);
		i--;
	}
	printf("Chuan hoa = %s",s);
	return 0;
}
	
