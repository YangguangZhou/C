#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

struct stack{
	int top=0;
	char stk[111];
	//清空栈
	void clear(){
		top=0;
	}
	//判断栈是否为空
	bool emety(){
		return top==0?1:0;
	}
	//获取栈里面元素的个数
	int size(){
		return top;
	}
	//压栈/入栈
	void push(int x){
		stk[++top]=x;
	}
	//出栈
	void pop(){
		top--;
	}
	//获取栈顶数据
	char get_top(){
		return stk[top];
	}
}s;
int main(){
	string str;
	getline(cin,str);
	for(int i=0;i<(int)str.size();i++){
		switch(str[i]){
			case '#':
				s.pop();
				break;
			case '@':
				s.clear();
				break;
			default:
				s.push(str[i]);
		}
	}
	for(int i=1;i<=s.size();++i){
		cout<<s.stk[i];
	}
	return 0;
}
