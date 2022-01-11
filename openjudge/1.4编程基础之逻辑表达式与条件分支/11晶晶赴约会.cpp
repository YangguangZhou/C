#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int a,n=0;
	scanf("%d",&a);
	switch(a){
		case 1:
		case 3:
		case 5:
		break;
		default:
			n=1;
	}
	if(n==1){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}
