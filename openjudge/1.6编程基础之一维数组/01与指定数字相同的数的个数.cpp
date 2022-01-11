#include<cstdio>
#include<iostream>
using namespace std;

int a[101],n,m,ans;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<n;i++){
		if(a[i]==m){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
