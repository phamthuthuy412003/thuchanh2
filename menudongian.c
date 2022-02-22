#include<stdio.h>

int main()
{
	int luachon;
	menu: //bien dinh danh.
	do{
		printf("[1] Buoi sang\n");
		printf("[2] Buoi trua\n");
		printf("[3] Buoi chieu\n");
		printf("[4] Buoi toi\n");
		printf("[5] Ket thuc\n");
		printf("Chon chuc nang: ");
		scanf("%d", &luachon);
	}while(luachon>5 || luachon<1);
	switch(luachon)
	{
		case 1:
			printf("Chao buoi sang\n"); goto menu; //quay lai menu
		case 2:
			printf("Den gio nghi trua roi, di an thoi\n"); goto menu;
		case 3:
			printf("Het gio lam viec, ve nha nao\n"); goto menu;
		case 4:
			printf("Chuan bi ngu buoi toi\n"); goto menu;
		default:
			printf("Chuc ngu ngon\n"); return 0;
	}
	return 0;
}
