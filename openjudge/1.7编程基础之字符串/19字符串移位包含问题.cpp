#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string a,b,temp;
	cin>>a>>b;
	if(a.size()<b.size()){
		temp=a;
		a=b;
		b=temp;
	}
	a+=a;
	//AAB(CD AA)BCD     CDAA
	if(a.find(b)!=a.npos){
		cout<<"true";
	}else{
		cout<<"false";
	}
	return 0;
}
