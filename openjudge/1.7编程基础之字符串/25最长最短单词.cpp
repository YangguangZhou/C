#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int a=0,b=99,n;
	string s,d,x;
	do{
		cin>>s;
		n=s.size();
		if(a<n){
			a=n;
			d=s;
		}
		if(b>n){
			b=n;
			x=s;
		}
	}while(getchar()!='\n');
	cout<<d<<endl<<x;
	return 0;
}
