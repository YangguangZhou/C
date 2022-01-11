#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string a[101];
	int n=0;
	do{
		cin>>a[n];
		n++;
	}while(getchar()==' ');
	for(int i=n-1;i>=0;i--){//·´×ªÊä³ö 
		cout<<a[i]<< " ";
	}
	cout<<endl;
	return 0;
}
