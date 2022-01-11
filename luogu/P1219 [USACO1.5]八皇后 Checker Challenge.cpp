#include<bits/stdc++.h>
using namespace std;

#define N 105

int n,ans,road[N];//road路径
bool col[N],l[N],r[N];//col竖行，l左斜行，r右斜行

void dfs(int row){
	//6.出口
	if(row==n+1){
		//7.记录答案
		ans++;
		if(ans<=3){
			for(int i=1;i<=n;i++){
				cout<<road[i]<<" ";
			}
			cout<<endl;
		}
		return;
	}
	for(int i=1;i<=n;i++){//1.枚举范围
		if(!col[i]&&!l[row+i]&&!r[row-i+n]){//2.约束条件
			//3.打标记
			col[i]=l[row+i]=r[row-i+n]=1;
			road[row]=i;
			//4.搜索
			dfs(row+1);
			//5.回溯
			col[i]=l[row+i]=r[row-i+n]=0;
		}
	}
}

int main(){
	cin>>n;
	dfs(1);
	cout<<ans<<endl;;
	system("pause");
	return 0;
}