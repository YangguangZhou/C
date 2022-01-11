#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

char a[111];
int main(){
	gets(a);
	for(int i=0;i<strlen(a)-1;i++){
		printf("%c",a[i]+a[i+1]);
	}
	printf("%c",a[strlen(a)-1]+a[0]);
	return 0;
}
