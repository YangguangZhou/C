#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int n,pn,pp,min=0,money;
	scanf("%d",&n);
	for(int i=0;i<3;i++){
		scanf("%d%d",&pn,&pp);
		if(n%pn!=0){
			money=n/pn*pp+pp;
		}else{
			money=n/pn*pp;
		}
		if(min==0){
			min=money;
		}
		if(money<min){
			min=money;
		}
	}
	printf("%d",min);
	return 0;
}
