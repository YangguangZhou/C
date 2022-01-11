#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int n,x,y,a;
	scanf("%d%d%d",&n,&x,&y);
	if(y%x==0){
		a=n-y/x;
	}else{
		a=n-y/x-1;
	}
	if(a<0){
		a=0;
	} 
	printf("%d",a);
	return 0;
}
