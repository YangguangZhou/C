#include<cstdio>
#include<iostream>
using namespace std;

int n,mi,ma,d,a[10][10],x,y;
int main(){
	cin>>n;
	for(x=1;x<=(n+1)/2;x++){
		for(y=1;y<=(n+1)/2;y++){
			a[x][y]=min(x,y);
			a[x][n+1-y]=a[n+1-x][y]=a[n+1-x][n+1-y]=a[x][y];
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
