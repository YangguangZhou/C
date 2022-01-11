#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

char a[505],b[505];
int main(){
	float s=0,c,l;
	cin>>c;
	cin>>a;
	cin>>b;
	l=strlen(a);
	for(int i=0;i<l;i++){
		if(a[i]==b[i]){
			s+=1; 
		}
	}
	if(s/l>=c){
		cout<<"yes";
	}else{
		cout<<"no";
	}
	return 0;
}
