#include<cstdio>
#include<iostream>
#include<cstring> 
using namespace std;

int main(){
	int index=0;//�±� 
	string s;
	char str[111];
	getline(cin,s);
	for(int i=0;i<(int)s.size();i++){
		switch(s[i]){
			case '#':
				index--;//ɾ��һ���� 
				break;
			case '@':
				index=0;//��ͷ��ʼ 
				break;
			default:
				str[index++]=s[i];//����һ���� 
		}
	}
	for(int i=0;i<index;i++){
		cout<<str[i];
	}
	return 0;
}
