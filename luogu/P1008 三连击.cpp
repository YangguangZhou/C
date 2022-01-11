#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	int a1,a2,a3,b1,b2,b3,c1,c2,c3;//1个 2十 3百 
	for(a=123;a<=327;a++){
		b=a*2;
		c=a*3;
		//获得abc的个位，十位，百位 
		a1=a%10;
		a2=a%100/10;
		a3=a/100;
		b1=b%10;
		b2=b%100/10;
		b3=b/100;
		c1=c%10;
		c2=c%100/10;
		c3=c/100;
		if((a1+a2+a3+b1+b2+b3+c1+c2+c3==45)&&(a1*a2*a3*b1*b2*b3*c1*c2*c3==362880)) 
			printf("%d %d %d\n",a,b,c);
	}
	return 0;
}
