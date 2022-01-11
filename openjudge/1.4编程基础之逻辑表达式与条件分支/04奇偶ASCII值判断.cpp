#include<cstdio>
#include<iostream>
using namespace std;

int main (){
	char a;
	scanf("%c",&a);
	a=a*1;
	if(a%2==1){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}
