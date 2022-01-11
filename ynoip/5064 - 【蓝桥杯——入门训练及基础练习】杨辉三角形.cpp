#include<cstdio>
#include<iostream>
using namespace std;

int a[40][40],n,x,y; 
int main(){
	cin>>n;
	for(x=1;x<=n;x++){
		for(y=1;y<=x;y++){
			if(y==1||y==x){
				a[x][y]=1;
			}else{
				a[x][y]=a[x-1][y-1]+a[x-1][y];
			}
		}
	}
	for(x=1;x<=n;x++){
		for(y=1;y<=x;y++){
			 cout<<a[x][y]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
