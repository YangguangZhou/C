#include<bits/stdc++.h>
using namespace std;

int a[15];
int b[100010];
string s;
int topA=0,topB=0,i=0,j=0,num=0,sum=0;
char c;
int getNum(int num,int top){
	return num*pow(10,top);
}
void getNums(){
	num=0;
	while(s[i]!='+'&&s[i]!='*'){
		a[++topA]=s[i]-'0';
		i++;
	}
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
	b[++topB]=num;
	while(i<(int)s.size()){
		c=s[--i];
		i++;
		getNums();
		if(c=='+'){
			b[++topB]=num;
		}else if(c=='*'){
			b[topB]=(b[topB]*num)%10000;
		}
		i++;
	}
	while(topB>=1){
		sum+=b[topB--];
	}
	cout<<sum%10000;
	system("pause");
	return 0;	
}
