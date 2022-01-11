#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[40][40]={0},x=0,y=0;
	cin>>n;
	x=1;
	y=(n+1)/2;
	for(int i=1;i<=pow(n,2);i++){
		a[x][y]=i;
		if(!a[(x-2+n)%n+1][y%n+1]){
			x=(x-2+n)%n+1,y=y%n+1;
		}else{
			x=x%n+1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	system("pause");
    return 0;
}
