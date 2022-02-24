#include<iostream>
#include<cmath>
using namespace std;
int giaithua(int n) 
{
	int giaithua=1;
	for(int i=1;i<=n;i++)
	{
		giaithua*=i;
		
	}
}

int mu(int n, int x)
{
	int result=1;
	for(int i=0;i<x;i++){
		result *=n;
	}
}

int main(){
	int x;
	cin>>x;
	if(x>50||x<0){
		cout<<"invalid";
	}
	else{
		float sum_=1;
		float sum_i_1=sum_1;
		int i=1;
		while(true){
			sum=sum+mu(x,i)/giaithua(i);
			i++;
			if(sum_i-sum_i_1)<0.001){
				break;
			}
			sum_i_1=sum_i;
		}
		cout<<sum_i;
		}
	}
	

	
	    
	return 0;
	
}


