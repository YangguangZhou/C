#include<bits/stdc++.h>
using namespace std;

int n,x,lose[1005],win[1005],use[1005],dp[1005];
void knapasck(){
	for(int i=1;i<=n;i++){
		for(int j=x;j>=use[i];j--){
			dp[j]=max(dp[j]+lose[i],dp[j-use[i]]+win[i]);
		}
		for(int j=use[i]-1;j>=0;j--){
			dp[j]+=lose[i];
		}
	}
}
int main(){
    cin>>n>>x;
	for(int i=1;i<=n;i++){
		cin>>lose[i]>>win[i]>>use[i];
	}
	knapasck();
	cout<<(long long)dp[x]*5<<endl;
	system("pause");
	return 0;
}