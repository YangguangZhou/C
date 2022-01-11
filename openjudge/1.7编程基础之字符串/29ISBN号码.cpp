#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string s;
	int k=1,sum=0;
	getline(cin,s);
	for(int i=0;i<s.size()-2;i++){//求和 
		if(s[i]!='-'){
			sum+=(s[i]-'0')*k++;
		}
	}
	if(sum%11==10){
		if(s[12]=='X'){
			cout<<"Right";
			return 0;
		}else{
			s[12]='X';
		} 
	}else{
		if(s[12]==(sum%11+'0')){//比较ASCLL码值 
			cout<<"Right";
			return 0;
		}else{
			s[12]=sum%11+'0';
		}
	}
	cout<<s;
	return 0;
}
