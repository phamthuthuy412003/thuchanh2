#include<stdio.h>
#include<math.h>

//ham tim so lon nhat trong hai so
int max_number(int a, int b)
{
	int max=a;
	if(a<b) max =b;
	return max;
}

//ham tim UCLN cua hai so a va b
int UCLN(int a, int b)
{
	if(a==0 || b==0)
	{
		return a+b;
	}
	else
	{
		while(a!=b)
		{
			if(a>b)
			{
				a=a-b;
			}
			else b=b-a;
		}
		return a;
	}
}

//ham tinh tong cac chu so cua mot so nguyen
int sum_of_digits(int n)
{
	int sum=0;
	while(n!=0)
	{
		int r = n%10;
		sum+=r;
		n/=10;
	}
	return sum;
}

//ham kiem tra so nguyen to
int check_prime_number(int n)
{
	if(n<2) return 0;
	else
	{
		for(int i=2; i<=sqrt(n);i++)
		{
			if(n % i==0){
				return 0;
				break;
			}
		}
		return 1;
	}
}
//khai bao bien toan cuc
float a[100][100]; 
int n;
//Ham nhap vao mot ma tran vuong
void input_matrix()
{
	do{
		printf("Nhap n = ");
		scanf("%d", &n);
	}while(n<=0);
	printf("NHAP MANG\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Nhap a[%d][%d] = ",i,j);
			scanf("%f", &a[i][j]);
		}
	}
}

//Ham xuat ra mot ma tran vuong
void output_matrix()
{
	printf("\nXUAT MANG\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf(" %f ", a[i][j]);
		}
		printf("\n");
	}
}

//Ham tim hang co tong cac phan tu la lon nhat
void find_max_sum()
{
	int row, check=1;
	float max=3.4*pow(10,-38);
	float row_sum;
	for(int i=0;i<n;i++)
	{
		row_sum=0;
		for(int j=0;j<n;j++)
		{
			row_sum+=a[i][j];
		}
		if(row_sum==max) check=0;
		if(row_sum>max){
			max = row_sum;
			row=i;
			check=1;
		}
	}
	if(check==1) printf("\nHang co tong cac phan tu lon nhat la: %d voi tong = %f\n", row+1, max);
	else printf("\nKhong co hang nao co tong cac phan tu lon nhat\n");
}

//Ham tim cot co tong cac phan tu la nho nhat
void find_min_sum()
{
	int col;
	float min=3.4*pow(10,38);
	float col_sum; //bien tong cac cot
	int check=1;
	for(int i=0;i<n;i++)
	{
		col_sum=0;
		for(int j=0;j<n;j++)
		{
			col_sum+=a[j][i];
		}
		if(col_sum==min) check=0;
		if(col_sum<min){
			min = col_sum;
			col=i;
			check=1;
		}
	
	}
//	printf("\n%f", min);
//	printf("\n%d", check);
	if(check==1) printf("\nCot co tong cac phan tu nho nhat la: %d voi Tong = %f\n", col+1, min);
	else printf("\nKhong co cot nao co tong cac phan tu la nho nhat\n");
	
}
int main()
{
	//Bai 5.4: Tim so max trong 3 so 
//	int a, b, c; //khai bao ba bien a, b, c
//	printf("Nhap a, b, c : ");
//	scanf("%d%d%d", &a, &b, &c);
//	int max;
//	printf("So lon nhat trong 3 so la: %d", max_number(max_number(a,b),c));
	
	//==============================================================
	
	/*Bai 5.5 : Kiem tra phan so da toi gian hay chua*/
//	int tuso, mauso;
//	printf("Tu so = ");
//	scanf("%d", &tuso);
//	//fflush(stdin);
//	printf("\nMau so = ");
//	scanf("%d", &mauso);
//	while(mauso==0)
//	{
//		printf("\nNhap lai Mau so = ");
//		scanf("%d", &mauso);
//	}
//	if(UCLN(tuso, mauso)==1) printf("\nPhan so da toi gian");
//	else printf("\nPhan so chua toi gian");

	//==================================================================

	/*Bai 5.6: Kiem tra so co chia het cho 3 hay ko*/
//	int n;
//	printf("Nhap vao mot so nguyen : ");
//	scanf("%d", &n);
//	if(sum_of_digits(n) % 3 == 0) printf("n=%d chia het cho 3", n);
//	else printf("n=%d khong chia het cho 3", n);

	//===================================================================

	/*Bai 5.7: Tinh tong cac so nguyen to thuoc (1;100)*/
//	int sum=0;
//	for(int i=2; i<100; i++)
//	{
//		if(check_prime_number(i)==1) sum+=i;
//	}
//	printf("Tong cac so nguyen to nam trong khoang (1,100) la : %d", sum);
	
	//=====================================================================
	
	/*Bai 5.8: 
	- Ham nhap vao mot ma tran vuong cap nxn (n<100) cac so thuc
	- Ham in ma tran nhap vao
	- Ham tìm hàng có tong các phan tu la lon nhat
	- Ham tìm cot có tong các phan tu la nho nhat
	- Xay dung hàm main() su dung cac ham tren.
	*/
	
	//float a[100][100];
	//int n;
	input_matrix();
	output_matrix();
//	int row, col;
//	float sum=0, max=0;
	find_max_sum();
	find_min_sum();
	return 0;
}









