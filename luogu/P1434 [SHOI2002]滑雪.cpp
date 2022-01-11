#include<bits/stdc++.h>
using namespace std;

#define N 20005

int n,k,f[N],p,t;
vector<int> a[N];

int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=k;i++){
		scanf("%d%d",&p,&t);
		a[p].push_back(t);
	}
	for(int i=n;i>=1;i--){
		if(a[i].empty()) f[i]=f[i+1]+1;
		else{
			for(int j=0;j<a[i].size();j++){
				f[i]=max(f[i],f[i+a[i][j]]);
			}
		}
	}
	cout<<f[1];
	return 0;
}