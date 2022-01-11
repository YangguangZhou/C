#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

char pwd[105],pro[105],rec[105],dic[100]={0},word[100]={0};//密文 明文 信息 字典 
int main(){
	cin>>pwd>>pro>>rec;
	int ppl=strlen(pwd),recl=strlen(rec);
	//判断每个密文是否对应明文 
	for(int i=0;i<ppl;i++){
		if(dic[pwd[i]]==0||dic[pwd[i]]==pro[i]){
			dic[pwd[i]]=pro[i];
		}else{
			cout<<"Failed";
			return 0;
		}
	}
	//判断26个字母是否出现 
	for(int i=0;i<=ppl;i++){
		word[pro[i]]++;
	}
	for(int i='A';i<='Z';i++){
		if(word[i]==0){
			cout<<"Failed";
			return 0;
		}
	}
	//输出
	for(int i=0;i<recl;i++){
		cout<<dic[rec[i]];
	}
	return 0;
}
