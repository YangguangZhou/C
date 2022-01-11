#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

char a[33],tb,ta;
int main(){
	cin>>a>>tb>>ta;
	for(int i=0;i<strlen(a);i++){
		if(a[i]==tb){
			a[i]=ta;
		}
	}
	cout<<a;
	return 0;
}
