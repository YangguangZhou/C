#include<bits/stdc++.h>
using namespace std;

#define N 205

int n,A,B,k[N],step[N],ans;
int d[]={-1,1};
bool vis[N];

void bfs(){
	queue<int> q;
	q.push(A);
	vis[A]=1;
	step[A]=0;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int i=0;i<2;i++){
			int v=u+k[u]*d[i];
			if(v<1||v>n||vis[v]) continue;
			if(v==B){
				ans=step[u]+1;
				return;
			}
			step[v]=step[u]+1;
			vis[v]=1;
			q.push(v);
		}
	}
}
int main(){
	cin>>n>>A>>B;
	for(int i=1;i<=n;i++){
		cin>>k[i];
	}
	if(A==B){
		cout<<0<<endl;
		system("pause");
		return 0;
	}
	bfs();
	if(ans==0) cout<<-1<<endl;
	else cout<<ans<<endl;
	system("pause");
	return 0;
}