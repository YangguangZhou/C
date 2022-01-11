#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	float a,b,R;
	scanf("%f%f",&a,&b);
	R=1/(1/a+1/b);
	printf("%.2f",R);
	return 0;
}
