#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14159

int main(){
	int r,V,h,count=1;
	scanf("%d%d",&h,&r);
	V=PI*pow(r,2)*h;
	while(count*V<20000){
		count++;
	}
	printf("%d",count);
	return 0;
}
