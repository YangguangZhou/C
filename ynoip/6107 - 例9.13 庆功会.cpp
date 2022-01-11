#include<bits/stdc++.h>
using namespace std;

int n,m,b[6005],w[505],v[505],s[505];
void knapasck(){
	for(int i=1;i<=n;i++){
		for(int j=m;j>=v[i];j--){
			for(int k=0;k<=s[i]&&k<=j/v[i];k++){
				b[j]=max(b[j-k*v[i]]+k*w[i],b[j]);
			}
		}
	}
}
int main(){
    cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>v[i]>>w[i]>>s[i];
	}
	knapasck();
	cout<<b[m]<<endl;
	system("pause");
	return 0;
}