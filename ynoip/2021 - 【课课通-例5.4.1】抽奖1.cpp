#include<cstdio>
#include<iostream>
using namespace std;

int n,a[102],num,x=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>num;
	for(int i=1;i<=n;i++){
		if(a[i]==num){
			x=i;
			break;
		}
	}
	cout<<x;
	return 0;
}
