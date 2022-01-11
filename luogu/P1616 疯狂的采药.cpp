#include<bits/stdc++.h>
using namespace std;

int t,m,ti[10005],v[10005];
long long b[10000005];
void knapasck(){
	for(int i=1;i<=m;i++){
		for(int j=ti[i];j<=t;j++){
			b[j]=max(b[j-ti[i]]+v[i],b[j]);
		}
	}
}
int main(){
    cin>>t>>m;
	for(int i=1;i<=m;i++){
		cin>>ti[i]>>v[i];
	}
	knapasck();
	cout<<b[t]<<endl;
	system("pause");
	return 0;
}