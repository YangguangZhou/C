#include<bits/stdc++.h>
using namespace std;

#define N 205

struct s{
	int x,y,t;
}ys[N];
struct node{
	int x,y,t;
};
int m,step[N][N],ans=-1,mp[N][N];
int dx[]={0,0,0,1,-1},dy[]={0,1,-1,0,0};
bool vis[N][N];

void bfs(){
	queue<node> q;
	q.push((node){0,0,0});
	vis[0][0]=1;
	step[0][0]=0;
	while(!q.empty()){
		node u=q.front();
		q.pop();
		int x=u.x,y=u.y,t=u.t;
		for(int i=0;i<5;i++){
			int tx=x+dx[i],ty=y+dx[i];
			t+=1;
			if(t>mp[tx][ty]||tx<0||tx>m||ty<0||ty>m||vis[tx][ty]) continue;
			if(mp[tx][ty]==-1){
				ans=step[x][y]+1;
				return;
			}
			step[tx][ty]=step[x][y]+1;
			vis[tx][ty]=1;
			q.push((node){tx,ty,t});
		}
	}
}
int main(){
	cin>>m;
	memset(mp,-1,sizeof(mp));
	for(int i=1;i<=m;i++){
		cin>>ys[i].x>>ys[i].y>>ys[i].t;
		for(int j=0;j<5;j++){
			mp[ys[i].x+dx[j]][ys[i].y+dy[j]]=ys[i].t;
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=m;j++){
			cout<<mp[i][j]<<" ";
		}
		cout<<endl;
	}
	if(mp[0][0]==-1){
		cout<<0<<endl;
		system("pause");
		return 0;
	}
	bfs();
	cout<<ans<<endl;
	system("pause");
	return 0;
}