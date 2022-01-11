#include<cstdio>
#include<iostream>
using namespace std;

int a[105][105],n,q[105],h[105]={0},u;
int main(){
	cin>>n;
	//¶ÁÍ¼ 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	//¿ªÊ¼Êä³ö
	cout<<1;
	h[1]=q[1]=1;
	for(int l=1,r=1;l<=r;l++){
		u=q[l];
		for(int i=1;i<=n;i++){
			if(a[u][i]&&!h[i]){
				cout<<'-'<<i;
				h[i]=1;
				q[++r]=i;
			}
		}
	}
	return 0;
}
