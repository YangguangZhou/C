#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int *p,*q;
	p=new(int);
	q=new(int);
	cin>>*p>>*q;
	cout<<*p+*p/(*q-1);
	return 0;
}
