#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

struct stack{
	int top=0;
	char stk[111];
	//���ջ
	void clear(){
		top=0;
	}
	//�ж�ջ�Ƿ�Ϊ��
	bool emety(){
		return top==0?1:0;
	}
	//��ȡջ����Ԫ�صĸ���
	int size(){
		return top;
	}
	//ѹջ/��ջ
	void push(int x){
		stk[++top]=x;
	}
	//��ջ
	void pop(){
		top--;
	}
	//��ȡջ������
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
