#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int a,b,c,ab,ac,bc;
	scanf("%d%d%d",&a,&b,&c);
	ab=a+b-c;
	ac=a+c-b;
	bc=b+c-a;
	if((ab>0)&&(ac>0)&&(bc>0)){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}
