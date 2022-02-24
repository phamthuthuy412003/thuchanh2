#include<stdio.h>
#include<math.h>
int main()
{
	int x, kq;
	printf("Nhap x = ");
	scanf("%d",&x);
	if(x==1)
	printf("Bieu thuc khong xac dinh");
	else{
		float kq=(exp(x)+1)/(x-1);
		printf("Y = %g",kq);
	}
}
