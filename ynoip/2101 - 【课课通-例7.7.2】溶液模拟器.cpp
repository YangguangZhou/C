#include<cstdio>
#include<iostream>
using namespace std;

#define N 10010
struct node{
	int v;
	double c;
}a[N];
int main(){
	int v,c,n,top=1;
	cin>>v>>c>>n;
	a[top].v=v;
	a[top].c=c;
	while(n--){
		char ch;
		cin>>ch;
		//���� 
		if(ch=='Z'&&top>1)top--;
		//��ջ 
		if(ch=='P'){
			cin>>v>>c;
			top++;
			a[top].v=a[top-1].v+v;//��� 
			a[top].c=(a[top-1].v*a[top-1].c+v*c)/a[top].v;//Ũ�� 
		}
		printf("%d %.5lf\n",a[top].v,a[top].c);
	}
	return 0;
}
