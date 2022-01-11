#include<cstdio>
#include<iostream>
using namespace std;

int hm(int a){
	int count=0;
	for(int i=1;i<=a;i++){
		int b=i,hws=0;
		while(b!=0){
			//将数倒过来 
			hws=hws*10+b%10;
			b/=10;
		}
		(hws==i)?count++:count+=0;
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	cout<<hm(n);
	return 0;
}
