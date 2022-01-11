#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string a;
	int count=1;//在这里，等于1更方便计算 
	cin>>a;
	for(int i=0;i<a.size();i++){
		if(a[i]==a[i+1]){
			count++;
		}else{
			cout<<count<<a[i];
			count=1; 
		}
	}
	return 0;
}
