#include<bits/stdc++.h>
using namespace std;

int stk[105],top,a[105][105],n,m[105],k;
int main(){
    cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	cout<<1;
	stk[++top]=1;
	m[1]=1;
	while(top>0){
		k++;
		if(k>n) k=stk[top--];
		else if(a[stk[top]][k]&&!m[k]){
			cout<<"-"<<k;
			stk[++top]=k;
			m[k]=1;
			k=0;
		}
	}
	cout<<endl;
	system("pause");
	return 0;
}