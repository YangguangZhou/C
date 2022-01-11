#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14

int main(){
	double r,V;
	scanf("%lf",&r);
	V=4.0/3.0*PI*pow(r,3);
	printf("%.2lf",V);
	return 0;
}
