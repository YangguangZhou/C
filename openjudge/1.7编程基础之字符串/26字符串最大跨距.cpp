#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

//oj�в���ʹ��getchar����Ƶ�� 
int main(){
	int index1,index2,ls2,i1,i2;
	string s1,s2,s3;
	getline(cin,s1);
	i1=s1.find(",");
	i2=s1.rfind(",");//���Ż�ȡ 
	s2=s1.substr(i1+1,i2-i1-1); 
	s3=s1.substr(i2+1); 
	s1=s1.substr(0,i1);
	if(s1.find(s2)==s1.npos||s1.find(s3)==s1.npos){//�ж�s2��s3�Ƿ���s1�г���  
		cout<<-1;
		return 0;
	}
	index1=s1.find(s2);
	index2=s1.rfind(s3);
	ls2=s2.size();
	if(index1+ls2-1<index2){//�ж�s3�Ƿ���s2�ĺ�����ж�s2��s3��û�н��� 
		cout<<index2-(index1+ls2);//��ȡ�ַ�������� 
	}else{
		cout<<-1;
	}
	return 0;
} 
