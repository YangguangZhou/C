#include<cstdio>
#include<iostream>
using namespace std;

int n,a[105][105]={0},k=1,x,y;
int main(){
	cin>>n;
	x=1;
	y=1;
	a[x][y]=k++;
	while(k<=n*n){
		while(y-1>=1&&!a[x][y-1]){
			a[x][--y]=k++;
		}
		while(x-1>=1&&!a[x-1][y]){
			a[--x][y]=k++;
		}
		while(y+1<=n&&!a[x][y+1]){
			a[x][++y]=k++;
		}
		while(x+1<=n&&!a[x+1][y]){
			a[++x][y]=k++;
		}
	}
	for(x=1;x<=n;x++){
		for(y=1;y<=n;y++){
			 cout<<a[x][y]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
