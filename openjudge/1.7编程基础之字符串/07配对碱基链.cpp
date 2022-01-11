#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

char a[256],b[256];
int main(){
	gets(a);
	int l=strlen(a);
	for(int i=0;i<l;i++){
		if(a[i]=='A'){
			b[i]='T';
		}else if(a[i]=='T'){
			b[i]='A';
		}else if(a[i]=='G'){
			b[i]='C';
		}else if(a[i]=='C'){
			b[i]='G';
		}
	}
	puts(b);
	return 0;
}
