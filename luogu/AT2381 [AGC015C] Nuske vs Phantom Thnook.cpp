#include <bits/stdc++.h>
using namespace std;
#define N 2005

int n,m,q,s[N][N],x,y,xx,yy,pre[N][N],q1,q2,pre1[N][N],pre2[N][N],ans;

int main(){
	cin>>n>>m>>q;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char t;
			cin>>t;
			s[i][j]=t-'0';
			pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+s[i][j];
			pre1[i][j]=pre1[i-1][j]+pre1[i][j-1]-pre1[i-1][j-1]+(s[i][j]&&s[i][j-1]);
			pre2[i][j]=pre2[i-1][j]+pre2[i][j-1]-pre2[i-1][j-1]+(s[i][j]&&s[i-1][j]);
		}
	}
	for(int i=1;i<=q;i++){
		cin>>x>>y>>xx>>yy;
		ans=pre[xx][yy]-pre[x-1][yy]-pre[xx][y-1]+pre[x-1][y-1];
		ans-=pre1[xx][yy]-pre1[x-1][yy]-pre1[xx][y]+pre1[x-1][y];
		ans-=pre2[xx][yy]-pre2[x][yy]-pre2[xx][y-1]+pre2[x][y-1];
		cout<<ans<<endl;
	}
	system("pause");
	return 0;
}