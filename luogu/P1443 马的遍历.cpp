#include<bits/stdc++.h>
using namespace std;

#define N 405

int n,m,sx,sy,step[N][N];
//马的方向表
int dx[]={-2,-1,1,2,2,1,-1,-2},dy[]={1,2,2,1,-1,-2,-2,-1};
bool vis[N][N];

struct node{
	int x,y;
};

void bfs(){
	queue<node> q;
	q.push((node){sx,sy});
	vis[sx][sy]=1;
	step[sx][sy]=0;
	while(!q.empty()){
		node u=q.front();
		q.pop();
		int x=u.x,y=u.y;
		for(int i=0;i<8;i++){
			int tx=x+dx[i],ty=y+dy[i];//下一点坐标
			if(tx<1||tx>n||ty<1||ty>m||vis[tx][ty]) continue;//约束条件
			vis[tx][ty]=1;//打标记
			step[tx][ty]=step[x][y]+1;
			q.push((node){tx,ty});
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			//左对齐，宽5格
			printf("%-5d",step[i][j]);
		}
		printf("\n");
	}
}
int main(){
	cin>>n>>m>>sx>>sy;
    memset(step,-1,sizeof(step));
	bfs();
	system("pause");
	return 0;
}