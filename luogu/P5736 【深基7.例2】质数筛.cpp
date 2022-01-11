#include<bits/stdc++.h>
using namespace std;

bool zs(int x){
	if(x<2) return 0;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return 0;
	}
	return 1;
}
int main(){
	int n,t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		if(zs(t)) cout<<t<<" ";
	}
	cout<<endl;
	system("pause");
	return 0;
}