#include <bits/stdc++.h>
using namespace std;
#define N 300005

int t,n,a[N];

int main(){
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>n;
		for(int j=1;j<=n;j++){
			cin>>a[j];
		}
		if(a[1]%2==0){
			cout<<"NO"<<endl;
			continue;
		}
		bool flag=1;
		for(int j=1;j<=n;j++){
			for(int k=2;k<=min(j+1,30);k++){
				if(a[j]%k!=0) break;
				if(k==min(j+1,30)){
					flag=0;
					break;
				}
			}
			if(!flag) break;
		}
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	system("pause");
	return 0;
}