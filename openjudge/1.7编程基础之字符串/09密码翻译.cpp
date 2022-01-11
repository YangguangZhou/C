#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

char a[100];
int main(){
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='z'||a[i]=='Z'){
			printf("%c",a[i]-25);
		}else if((a[i]>=65&&a[i]<=89)||(a[i]>=97&&a[i]<=121)){
			printf("%c",a[i]+1);
		}else{
			printf("%c",a[i]);
		}
	}
	return 0;
}
