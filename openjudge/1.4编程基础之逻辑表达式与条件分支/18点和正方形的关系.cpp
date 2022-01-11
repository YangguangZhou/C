#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	if((x==1)||(x==-1)||(x==0)){
		if((y==1)||(y==-1)||(y==0)){
			printf("yes");
		}else{
			printf("no");
		}
	}else{
		printf("no");
	}
	return 0;
}
