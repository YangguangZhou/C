//����һ 
#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

//��ԭ�ַ������� 
bool isPali(string a){
	string b;
	for(int i=a.size()-1;i>=0;i--){
		b+=a[i];
	}
	return (a==b)?true:false;
} 
int main(){
	string a;
	cin>>a;
	cout<<(isPali(a)?"yes":"no");
	return 0;
}
