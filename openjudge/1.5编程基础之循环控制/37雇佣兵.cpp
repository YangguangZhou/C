#include<cstdio>
#include<iostream>
using namespace std;

int m,n,x,count=0;
int main(){
	cin>>m>>n>>x;
	while(x>0&&n<=m){
		x-=((m%n==0)?m/n:m/n+1);//使用能量元素 
		//判断能量元素是否用完 
		if(x<0){
			break;
		}
		n+=m/n;//增加战斗力 
	}
	cout<<n;
	return 0;
}
