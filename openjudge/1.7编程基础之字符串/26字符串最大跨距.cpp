#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

//oj中不能使用getchar过于频繁 
int main(){
	int index1,index2,ls2,i1,i2;
	string s1,s2,s3;
	getline(cin,s1);
	i1=s1.find(",");
	i2=s1.rfind(",");//倒着获取 
	s2=s1.substr(i1+1,i2-i1-1); 
	s3=s1.substr(i2+1); 
	s1=s1.substr(0,i1);
	if(s1.find(s2)==s1.npos||s1.find(s3)==s1.npos){//判断s2和s3是否都在s1中出现  
		cout<<-1;
		return 0;
	}
	index1=s1.find(s2);
	index2=s1.rfind(s3);
	ls2=s2.size();
	if(index1+ls2-1<index2){//判断s3是否在s2的后面和判断s2和s3有没有交叉 
		cout<<index2-(index1+ls2);//获取字符串最大跨距 
	}else{
		cout<<-1;
	}
	return 0;
} 
