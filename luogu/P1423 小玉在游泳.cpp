#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int i;
	double l,m=2,l2;
	scanf("%lf",&l);
	l2=l;
	l=l-m;
	for(i=0;i<l2;i++){
		m=m*0.98;
		l=l-m;
	}
	printf("%d",i);
	return 0;
}
