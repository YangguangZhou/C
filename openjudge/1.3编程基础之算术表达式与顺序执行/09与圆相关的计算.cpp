#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	double r,d,c,s,pi=3.14159;
	scanf("%lf",&r);
	d=2*r;
	c=2*pi*r;
	s=pi*r*r;
	printf("%.4lf %.4lf %.4lf",d,c,s);
	return 0;
}
