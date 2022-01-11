#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double Xa,Ya,Xb,Yb,n;
	scanf("%lf%lf%lf%lf",&Xa,&Ya,&Xb,&Yb);
	n=sqrt(pow((Xa-Xb),2)+pow((Ya-Yb),2));
	printf("%.3lf",n);
	return 0;
}
