#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
 
int main(){
	string pwd,pro;
	cin>>pwd;
	int pl=pwd.size();
	for(int i=0;i<pl;i++){
		if(pwd[i]>='a'&&pwd[i]<='z'){
			pwd[i]-=32;
		}else{
			pwd[i]+=32;
		}
	}
	pro=pwd;
	for(int i=0;i<pl;i++){
		pro[i]=pwd[pl-i-1];
	}
	for(int i=0;i<pl;i++){
		if(pro[i]<='z'&&pro[i]>='x'){
			pro[i]='a'+(pro[i]-'x');
		}else if(pro[i]<='Z'&&pro[i]>='X'){
			pro[i]='A'+(pro[i]-'X');
		}else{
			pro[i]+=3;
		}
	}
	cout<<pro;
	return 0;
}
