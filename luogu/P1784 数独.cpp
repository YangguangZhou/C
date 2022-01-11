#include<bits/stdc++.h>
using namespace std;

#define N 105

int mp[N][N];
//宫表
int gong[10][10]={
{0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,2,2,2,3,3,3},
{0,1,1,1,2,2,2,3,3,3},
{0,1,1,1,2,2,2,3,3,3},
{0,4,4,4,5,5,5,6,6,6},
{0,4,4,4,5,5,5,6,6,6},
{0,4,4,4,5,5,5,6,6,6},
{0,7,7,7,8,8,8,9,9,9},
{0,7,7,7,8,8,8,9,9,9},
{0,7,7,7,8,8,8,9,9,9}
};
bool row[N][N],col[N][N],g[N][N];

void dfs(int x,int y){
	if(x==10){
		for(int i=1;i<=9;i++){
			for(int j=1;j<=9;j++){
				cout<<mp[i][j]<<" ";
			}
			cout<<endl;
		}
		return;
	}
	if(!mp[x][y]){
		for(int i=1;i<=9;i++){
			if(!row[x][i]&&!col[y][i]&&!g[gong[x][y]][i]){
				row[x][i]=col[y][i]=g[gong[x][y]][i]=1;
				mp[x][y]=i;
				if(y==9) dfs(x+1,1);
				else dfs(x,y+1);
				row[x][i]=col[y][i]=g[gong[x][y]][i]=0;
				mp[x][y]=0;
			}
		}
	}else{
		if(y==9) dfs(x+1,1);
		else dfs(x,y+1);
	}
}

int main(){
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			cin>>mp[i][j];
			if(mp[i][j]){
				row[i][mp[i][j]]=col[j][mp[i][j]]=g[gong[i][j]][mp[i][j]]=1;
			}
		}
	}
	dfs(1,1);
	system("pause");
	return 0;
}