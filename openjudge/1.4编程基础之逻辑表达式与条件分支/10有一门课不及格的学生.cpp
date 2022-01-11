#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int ch,ma;
	scanf("%d%d",&ch,&ma);
	if((ch<60)&&(ma>=60)){
		printf("1");
	}else if((ch>=60)&&(ma<60)){
		printf("1");
	}else{
		printf("0");
	}
	return 0;
}
