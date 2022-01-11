#include<cstdio>
#include<iostream>
using namespace std;

float a[10],m,p[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
int main(){
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	for(int i=0;i<10;i++){
		m=p[i]*a[i]+m;
	}
	cout<<m;
	return 0;
}
