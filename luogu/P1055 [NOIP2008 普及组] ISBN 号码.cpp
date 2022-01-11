#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	int num=0,n=1,l;
	cin>>a;
	for(int i=0;i<11;i++){
		if(a[i]>='0'&&a[i]<='9'){
			num+=((a[i]-'0')*n);
			n++;
		}
	}
	num%=11;
	if(a[a.size()-1]=='X'){
		l=10;
	}else{
		l=a[a.size()-1]-'0';
	}
	if(l==num){
		cout<<"Right";
	}else{
		if(num==10){
			a[a.size()-1]='X';
		}else{
			a[a.size()-1]=(num+'0');
		}
		cout<<a;
	}
	system("pause");
	return 0;
}
