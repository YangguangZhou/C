#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int n,a[111],x,t;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>x;
	for(int i=n+1;i>x;i--){
		a[i]=a[i-1];
	}
	a[x]=a[n+1];
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
