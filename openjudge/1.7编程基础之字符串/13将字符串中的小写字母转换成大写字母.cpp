#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string a;
	getline(cin,a);
	for(int i=0;i<a.size();i++){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]-=32;
		}
	}
	cout<<a;
	return 0;
}
