#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	double n,y;
	scanf("%lf",&n);
	if(0<=n&&n<10){
		if(0<=n&&n<5){
		y=-n+2.5;
		}else if(5<=n&&n<10){
		y=2-1.5*(n-3)*(n-3); 
		}
	}else if(10<=n&&n<20){
	y=n/2-1.5;
	}
	printf("%.3lf",y);
	return 0;
}
