#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int a,b,n;
	char f;
	scanf("%d%d %c",&a,&b,&f);
	switch(f){
		case '+':
			n=a+b;
			break;
		case '-':
			n=a-b;
			break;
		case '*':
			n=a*b;
			break;
		case '/':
			if(b!=0){
				n=a/b;
			}else{
				printf("Divided by zero!");
				return 0;
			}
			break;
		default:
			printf("Invalid operator!");
			return 0;
			break;
	}
	printf("%d",n);
	return 0;
}
