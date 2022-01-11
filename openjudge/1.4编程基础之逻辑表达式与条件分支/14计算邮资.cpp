#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int a,b;char c;
	scanf("%d",&a);
	scanf("%s",&c);
	b=8;
	if(a<=1000 && c=='y'){
		printf("%d",b+5);
	}
	if(a<=1000&&c=='n'){
		printf("%d",b);
	}
	if(a>1000&&(a-1000)%500==0&&c=='y'){
		b=b+(a-1000)/500*4+5; 
		printf("%d",b);
	} 
	if(a>1000&&(a-1000)%500==0&&c=='n'){
	b=b+(a-1000)/500*4; 
	printf("%d",b);
	}
	if(a>1000&&(a-1000)%500!=0&&c=='y'){
	b=b+(a-1000)/500*4+4+5; 
	printf("%d",b);
	} 
	if(a>1000&&(a-1000)%500!=0&&c=='n'){
	b=b+(a-1000)/500*4+4; 
	printf("%d",b);
	} 
	return 0;
}
