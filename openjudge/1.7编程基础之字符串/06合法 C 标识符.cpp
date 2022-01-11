#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

char a[25];
int main(){
	cin>>a;
	int l=strlen(a);
	if(a[0]>='0'&&a[0]<='9'){
		cout<<"no";
		return 0;
	}
	for(int i=0;i<l;i++){
		if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)||(a[i]>=48&&a[i]<=57)||a[i]==95){
			
		}else{
			cout<<"no";
			return 0;
		}
	}
	cout<<"yes";
	return 0;
}
