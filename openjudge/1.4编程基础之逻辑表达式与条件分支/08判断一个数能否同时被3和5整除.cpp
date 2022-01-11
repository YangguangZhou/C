#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int a;
	scanf("%d",&a);
	if(a%5==0){
		if(a%3==0){
			printf("YES");
		}else{
			printf("NO");
		}
	}else{
		printf("NO");
	}
	return 0;
}
