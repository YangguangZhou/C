#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

string _trim(string a){
	string b;
	for(int i=0;i<a.size();i++){
		if(a[i]!=' '){
			if(a[i]>='a'&&a[i]<='z'){
				a[i]-=32;
			}
			b+=a[i];
		}
	}
	return b;
}
int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	a=_trim(a);
	b=_trim(b);
	cout<<(a.compare(b)==0?"YES":"NO");
	return 0;
}
