#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	if(a.find(b)!=a.npos){
		cout<<b<<" is substring of "<<a;
	}else if(b.find(a)!=a.npos){
		cout<<a<<" is substring of "<<b;
	}else{
		cout<<"No substring";
	}
	return 0;
}
