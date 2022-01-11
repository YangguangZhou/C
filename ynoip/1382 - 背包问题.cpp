#include<bits/stdc++.h>
using namespace std;

int n,s,w[105],b[105];
bool flag;
void dfs(int step,int x,int y){
	if(y==s){
		for(int i=1;i<=x;i++){
			cout<<b[i]<<" ";
		}
		flag=1;
		cout<<endl;
		//system("pause");
		exit(0);
	}else if(y>s) return;
	else if(step>n) return;
	else{
		b[x+1]=w[step];
		dfs(step+1,x+1,y+w[step]);
		dfs(step+1,x,y);
	}
}
int main(){
    cin>>n>>s;
	for(int i=1;i<=n;i++){
		cin>>w[i];
	}
	dfs(1,0,0);
	if(!flag) cout<<"No Answer!";
	//system("pause");
	return 0;
}