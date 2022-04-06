#include<iostream>
using namespace std;

int ucln(int a, int b) {
    while(a != b) {
        if (a > b) {
            a -= b;
        }else{
            b -= a;
        }
    }
    return a;
}

int main(){
	int a,b;
	cin>>a>>b;
	if(ucln(a,b)==1) cout<<"Phan so toi gian"<<endl;
	else cout<<"Phan so khong toi gian"<<endl;
	cout<<"Phan so toi gian: "<<a/ucln(a,b)<<"/"<<b/ucln(a,b)<<endl;
	return 0;
}

