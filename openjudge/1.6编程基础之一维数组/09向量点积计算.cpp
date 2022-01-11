#include<cstdio>
#include<iostream>
using namespace std;

int a[1001],b[1001],n,s;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		s=a[i]*b[i]+s;
	}
	cout<<s;
	return 0;
}
