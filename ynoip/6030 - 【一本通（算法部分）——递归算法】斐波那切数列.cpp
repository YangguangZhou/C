#include<cstdio>
#include<iostream>
using namespace std;

int fib(int n){
	if(n==1)return 0;
	if(n==2)return 1;
	return fib(n-1)+fib(n-2);//쳲��������дӵ�������ÿһ��ǽ����ŵ�ǰ���� �ĺ�
}
int main(){
	int n;
	cin>>n;
//  ����2 
//	int a[100];
//	a[1]=0;
//	a[2]=1;
//	for(int i=3;i<n;i++){
//		a[i]=a[i-1]+a[i-2];
//	}
//	cout<<a[n];
	cout<<fib(n); 
	return 0;
}
