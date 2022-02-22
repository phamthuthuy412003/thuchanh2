#include<conio.h>
#include<stdio.h>
void main()
{
	int N, i;
	double A=0;
	printf("N = ");
	scanf("%d", &N);
	for(i=2;i<=N;i++)
	A=A+(i*1.0-1)/i;
	printf("A = %g",A);
}
	
	
