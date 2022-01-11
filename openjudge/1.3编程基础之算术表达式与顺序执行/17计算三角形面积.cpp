#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float x1,y1,x2,y2,x3,y3,l12,l13,l23,p,s;
	scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
	l12=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	l13=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
	l23=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
	p=(l12+l13+l23)/2;
	s=sqrt(p*(p-l12)*(p-l13)*(p-l23));
	printf("%.2f",s);
	return 0;
}
