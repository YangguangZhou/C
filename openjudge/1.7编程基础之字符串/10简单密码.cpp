#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

char a[205],pwd[26]={'V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U'};
int main(){
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='A'&&a[i]<='Z'){
			cout<<pwd[a[i]-'A'];
		}else{
			cout<<a[i];
		}
	}
	return 0;
}
