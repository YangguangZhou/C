#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	long x,y;
	scanf("%ld%ld",&x,&y);
	if(x>y){
		printf(">");
	}else if(x<y){
		printf("<");
	}else if(x==y){
		printf("=");
	}
	return 0;
}
