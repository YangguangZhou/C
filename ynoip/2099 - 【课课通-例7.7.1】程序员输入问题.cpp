#include<cstdio>
#include<iostream>
#include<cstring> 
using namespace std;

int main(){
	int index=0;//下标 
	string s;
	char str[111];
	getline(cin,s);
	for(int i=0;i<(int)s.size();i++){
		switch(s[i]){
			case '#':
				index--;//删除一个数 
				break;
			case '@':
				index=0;//从头开始 
				break;
			default:
				str[index++]=s[i];//往后一个数 
		}
	}
	for(int i=0;i<index;i++){
		cout<<str[i];
	}
	return 0;
}
