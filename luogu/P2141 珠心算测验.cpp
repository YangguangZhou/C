#include<cstdio>
#include<iostream>
using namespace std;

int a[111],t[20005]={0};
int main(){
	int n,count=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			t[a[i]+a[j]]=1;
		}
	}
	for(int i=0;i<n;i++){
		if(t[a[i]]!=0){
			count++;
		}
	}
	cout<<count;
	return 0;
}
