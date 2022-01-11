//方法一 
#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

//将原字符串倒排 
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
