#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char a[300];
//检查括号是否成对
bool check(string s){
	bool mark=true;
	int i=0,top=0;
	while(mark&&i<(int)s.size()){
		if(s[i]=='['||s[i]=='('){
			a[++top]=s[i];
		}else{
			if(top==0)mark=false;
			else{
				switch(a[top]){
					case '[':
						if(s[i]==']') top--;
						else mark=false;
						break;
					case '(':
						if(s[i]==')') top--;
						else mark=false;
						break;
				}
			}
		}
		i++;
	}
	if(top>0) mark=false;
	return mark;
}
int main(){
	string s;
	getline(cin,s);
	cout<<(check(s)?"OK":"Wrong");
	return 0;
}
