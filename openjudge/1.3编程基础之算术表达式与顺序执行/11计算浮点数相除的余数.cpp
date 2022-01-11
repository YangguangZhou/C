#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	double a,b,k,r;
	scanf("%lf%lf",&a,&b);
	k=a/b;
	r=a-(int)k*b;
	printf("%g",r);
	return 0;
}
