#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

string toCaps(string a){
	for(int i=0;i<a.size();i++){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]-=32;
		}
	}
	return a;
}
int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	a=toCaps(a);
	b=toCaps(b);
	if(a.compare(b)){
		(a.compare(b)>0)?cout<<">":cout<<"<";
	}else{
		cout<<"=";
	}
	return 0;
}
