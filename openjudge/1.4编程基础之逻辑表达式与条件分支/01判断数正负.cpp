#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	long n;
	scanf("%ld",&n);
	if(n<0){
		printf("negative");
	}else if(n>0){
		printf("positive");
	}else if(n==0){
		printf("zero");
	}
	return 0;
}
