#include<cstdio>
#include<iostream>
using namespace std;

int a[101],n,t;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=0;i--){
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
