#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int *p,*q;
	p=new(int);
	q=new(int);
	cin>>*p>>*q;
	if((*p==1&&*q==2)||(*p==2&&*q==3)||(*p==3&&*q==1)){
		cout<<"win";
	}else if((*p==2&&*q==1)||(*p==3&&*q==2)||(*p==1&&*q==3)){
		cout<<"lose";
	}else{
		cout<<"tie";
	}
	return 0;
}
