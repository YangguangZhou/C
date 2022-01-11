#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int n,a[111],x;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>x;
	for(int i=x;i<n;i++){
		a[i]=a[i+1];
	}
	for(int i=1;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
