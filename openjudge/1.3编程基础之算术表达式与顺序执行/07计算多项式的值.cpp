#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double a,b,c,d,x,n;
	scanf("%lf%lf%lf%lf%lf",&x,&a,&b,&c,&d);
	//n(f(a))ax3 + bx2 + cx + d 
	n=a*pow(x,3)+b*pow(x,2)+c*x+d;
	printf("%.7lf",n);
	return 0;
}
