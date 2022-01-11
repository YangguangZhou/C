#include<bits/stdc++.h>
using namespace std;

int n,c,w[105],v[105];
long long b[1000005];
void x(){
	for(int i=1;i<=n;i++){
		for(int j=c;j>=w[i];j--){
			b[j]=max(b[j-w[i]]+v[i],b[j]);
		}
	}
}
int main(){
    cin>>n>>c;
	for(int i=1;i<=n;i++){
		cin>>w[i];
	}
	for(int i=1;i<=n;i++){
		cin>>v[i];
	}
	x();
	cout<<b[c]<<endl;
	system("pause");
	return 0;
}