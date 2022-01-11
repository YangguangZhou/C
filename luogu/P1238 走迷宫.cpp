#include<bits/stdc++.h>
using namespace std;

#define N 105

int m,n,mp[N][N],sx,sy,fx,fy,roadx[N],roady[N];
//方向表（优先顺序：左上右下）（格子坐标改变方式）
int dx[]={0,-1,0,1},dy[]={-1,0,1,0};
bool vis[N][N],success;//判断格子是否被使用

void dfs(int step,int x,int y){
	if(x==fx&&y==fy){
		printf("(%d,%d)",sx,sy);
		for(int i=1;i<step;i++){
			printf("->(%d,%d)",roadx[i],roady[i]);
		}
		cout<<endl;
		success=1;
		return;
	}
	for(int i=0;i<4;i++){
		//（tx，ty）下一个格子坐标
		int tx=x+dx[i],ty=y+dy[i];
		if(tx<1||tx>n||ty<1||ty>m) continue;
		if(!mp[tx][ty]||vis[tx][ty]) continue;
		vis[tx][ty]=1;
		roadx[step]=tx;
		roady[step]=ty;
		dfs(step+1,tx,ty);
		vis[tx][ty]=0;
	}
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>mp[i][j];
		}
	}
	cin>>sx>>sy>>fx>>fy;
	vis[sx][sy]=1;
	dfs(1,sx,sy);
	if(!success) cout<<-1<<endl;
	system("pause");
	return 0;
}