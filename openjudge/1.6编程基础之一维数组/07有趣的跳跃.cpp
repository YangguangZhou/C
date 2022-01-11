#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n,a[3001],j=0,jdz[3001];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<0){
			jdz[i]=-a[i];
		}else{
			jdz[i]=a[i];
		}
	}
	
	if(j==1){
		cout<<"Jolly";
	}else{
		cout<<"Not jolly";
	}
	return 0;
}
