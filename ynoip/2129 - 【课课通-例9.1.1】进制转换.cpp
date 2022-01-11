//升级版，可解决2进制到36进制
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
	int n,a=0,l,m;
	string x;
	cin>>n>>x;
	l=x.length();
	for(int i=l-1;i>=0;i--){
		if(x[i]>='A'&&x[i]<='Z'){
			m=x[i]-'A'+10;
		}else{
			m=x[i]-'0';
		}
		a+=pow(n,l-i-1)*m;
	}
	cout<<a<<endl;
	system("pause");
	return 0;
}