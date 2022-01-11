#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int a[15];//定义数字栈
int b[100010];//定义计算栈
string s;
int topA=0,topB=0,i=0,j=0,num=0,sum=0;
char c;
//计算每一位的int数
int getNum(int num,int top){
	return num*pow(10,top);
}
//将数字栈中的数组合
void getNums(){
	num=0;
	//压入数字栈
	while(s[i]!='+'&&s[i]!='*'){
		a[++topA]=s[i]-'0';//如果不是符号，把数字字符转换成int存入数字栈
		i++;
	}
	//数字栈中的数字取出并组合
	j=topA;
	while(topA>=1){
		num+=getNum(a[topA],j-topA);
		topA--;
	}
}
int main(void){
	getline(cin,s);
	s+='+';
	getNums();
	i++;
	b[++topB]=num;//将刚刚组合的数字压入计算栈
	while(i<(int)s.size()){
		c=s[--i];
		i++;
		getNums();
		//遇到的是加号直接入栈
		if(c=='+'){
			b[++topB]=num;
		}else if(c=='*'){
			//遇到*不入栈，直接计算后存入原来的位置。
			b[topB]=(b[topB]*num)%10000;
		}
		i++;
	}
	while(topB>=1){
		sum+=b[topB--];
	}
	cout<<sum%10000;
	return 0;	
}
