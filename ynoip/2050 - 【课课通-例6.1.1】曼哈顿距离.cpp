#include<cstdio>
#include<iostream>
using namespace std;

int abs(int a,int b){
	return (a-b)<0?-(a-b):(a-b);
}
int main(){
	int x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	cout<<(abs(x1,x2)+abs(y1,y2));
	return 0;
}
