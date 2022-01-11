#include<bits/stdc++.h>
using namespace std;

int t,m,b[105][1005],ti[105],v[105];
void knapasck(){
	for(int i=1;i<=m;i++){
		for(int j=1;j<=t;j++){
			if(j<ti[i]){
				b[i][j]=b[i-1][j];
			}else{
				b[i][j]=max(b[i-1][j-ti[i]]+v[i],b[i-1][j]);
			}
		}
	}
}
int main(){
    cin>>t>>m;
	for(int i=1;i<=m;i++){
		cin>>ti[i]>>v[i];
	}
	knapasck();
	cout<<b[m][t]<<endl;
	system("pause");
	return 0;
}