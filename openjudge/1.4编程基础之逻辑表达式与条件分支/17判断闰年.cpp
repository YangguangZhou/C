#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int a;
	scanf("%d",&a);
	if(a%4==0){
		if(a%100==0){
			if(a%400==0){
				if(a%3200!=0){
					printf("Y");
				}else{
					printf("N");
				}
			}else{
				printf("N");
			}
		}else if(a%3200!=0){
			printf("Y");
		}else{
			printf("N");
	}
	}else{
		printf("N");
	}
	return 0;
}
