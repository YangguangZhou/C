#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

#define N 55
#define MAX 0x7f

int n,c,w[N],l,f[N][N][3],dis[N],x;

int main(){
	memset(f,MAX,sizeof(f));
	cin>>n>>c;
	for(int i=1;i<=n;i++){
		cin>>dis[i]>>x;
		w[i]=w[i-1]+x;
	}
	f[c][c][0]=f[c][c][1]=0;
	for(int l=2;l<=n;l++){
		for(int i=1;i+l-1<=n;i++){
			int j=i+l-1;
			f[i][j][0]=min(f[i+1][j][0]+(dis[i+1]-dis[i])*(w[i]+w[n]-w[j]),f[i+1][j][1]+(dis[j]-dis[i])*(w[i]+w[n]-w[j]));
			f[i][j][1]=min(f[i][j-1][0]+(dis[j]-dis[i])*(w[i-1]+w[n]-w[j-1]),f[i][j-1][1]+(dis[j]-dis[j-1])*(w[i-1]+w[n]-w[j-1]));
		}
	}
	cout<<min(f[1][n][0],f[1][n][1]);
	return 0;
}