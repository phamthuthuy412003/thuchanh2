#include<bits/stdc++.h>
using namespace std;
string findLongestPrefix(string s1, string s2)
{
	int n=s1.size();//n,m la chieu dai xau s1, s2
	int m=s2.size();
	int max_Size();//bien luu do dai con chung lon nhat
	string subsequence = " ";//luu bien con chung dung khi truy vet
	int L[n+1][m+1];//Khai bao mang n+1 la hang, m+1 la cot
	for(int i=0; i<=n; i++)
	{
		L[i][0]=0;//gan cot dau bang 0
	
	}
	for(int j=0; j<=m; j++)
	{
		L[0][j] = 0;//gan hang dau tien bang 0
	
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<m; j++)
		{
			if(s1[i-1]==s2[j-1])
			{
				L[i][j]=L[i-1][j-1]+1;
			}
			else{
				if(L[i-1][j] >= L[i][j-1])//Tim max
					L[i][j]=L[i-1][j];
				else
					L[i][j]=L[i][j-1];
			}
		}   
	
		
	}
	max_Size==L[n][m];//tim do dai con lon nhat
	int i=n;
	int j=m;
	while(L[i][j] != 0)//dieu kien dung
	{
		if(s1[i-1]==s2[j-1])
		{
			subsequence+=s1[i-1];
			i--;
			j--;
		}
		else{
			if(L[i-1][j]>=L[i][j-1])//so sanh
				i--;
			else
				j--;
		}
	}
	cout << "\nXau con: ";
	for(int t=max_Size-1; t>=0; t--)//in nguoc tu cuoi ve dau de xau con dung thu tu
	{
		cout << subsequence[t];
	}
}   
int main()
{
	string s1, s2;
	cout <<"Nhap xau s1: ";
	cin >> s1;
	cout <<"Nhap xau s2: ";
	cin >> s2;
	findLongestPrefix(s1,s2);
	return 0;
}
