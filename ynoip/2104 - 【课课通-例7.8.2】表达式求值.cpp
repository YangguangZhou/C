#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int a[15];//��������ջ
int b[100010];//�������ջ
string s;
int topA=0,topB=0,i=0,j=0,num=0,sum=0;
char c;
//����ÿһλ��int��
int getNum(int num,int top){
	return num*pow(10,top);
}
//������ջ�е������
void getNums(){
	num=0;
	//ѹ������ջ
	while(s[i]!='+'&&s[i]!='*'){
		a[++topA]=s[i]-'0';//������Ƿ��ţ��������ַ�ת����int��������ջ
		i++;
	}
	//����ջ�е�����ȡ�������
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
	b[++topB]=num;//���ո���ϵ�����ѹ�����ջ
	while(i<(int)s.size()){
		c=s[--i];
		i++;
		getNums();
		//�������ǼӺ�ֱ����ջ
		if(c=='+'){
			b[++topB]=num;
		}else if(c=='*'){
			//����*����ջ��ֱ�Ӽ�������ԭ����λ�á�
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
