#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double a,b,c,d,x1,x2,u,v;
	scanf("%lf%lf%lf",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>=0){
		x1=(-b+sqrt(d))/(2*a);
		x2 = (-b-sqrt(d))/(2*a);
		if(d==0)
			printf("x1=x2=%.5lf\n",x1);
		else
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
	}else{
		u=-b/(2*a);
		v=sqrt(-d)/(2*a);
		if(u==0)
			u=-u;
		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",u,v,u,v);
	}
	return 0;
}
