#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	s+=' ';//末尾加空格，方便后面统一 
	int i=0,k;
	k=i;
	while(i<s.size()){
		if(s[i]==' '){
			for(int j=i-1;j>=k;j--)//反向输出单词 
				cout<<s[j];
				while (s[i]==' ') {//输出空格 
					cout<<' ';
					i++;
				}
		k=i;
		}else{
			i++;
		}
	}
	return 0;
}
