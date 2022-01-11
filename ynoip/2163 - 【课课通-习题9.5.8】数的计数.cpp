#include<bits/stdc++.h>
using namespace std;

int n,a[1005]={0};
void dfs(int num){
	if(a[num]){
		return;
	}
	a[num]=1;
	for(int i=1;i<=num/2;i++){
		dfs(i);
		a[num]+=a[i];
	}
	return;
}
int main(){
	cin>>n;
	dfs(n);
	cout<<a[n]<<endl;
	system("pause");
	return 0;
}
