#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	float a, b, c, x;
	printf("A = ");
	scanf("%f", &a);
	printf("B = ");
	scanf("%f", &b);
	printf("C = ");
	scanf("%f", &c);
	if((a<b && a>=c) || (a>=b && a<c)) x=a;
	else if((b<a && b>=c) || (b>=a && b<c)) x=b;
	else x=c;
	printf("X = %g", x);
	return 0;
}
