#include<cstdio>
#include<iostream>
using namespace std;

int rn(int a,int b){
	int count=0;
	for(int i=a;i<=b;i++){
		i%100==0?(i%400==0?count++:count+=0):(i%4==0?count++:count+=0);
	}
	return count;
}
int main(){
	int x,y;
	cin>>x>>y;
	cout<<rn(x,y);
	return 0;
}
