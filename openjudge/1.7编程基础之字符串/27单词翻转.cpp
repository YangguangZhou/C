#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	s+=' ';//ĩβ�ӿո񣬷������ͳһ 
	int i=0,k;
	k=i;
	while(i<s.size()){
		if(s[i]==' '){
			for(int j=i-1;j>=k;j--)//����������� 
				cout<<s[j];
				while (s[i]==' ') {//����ո� 
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
