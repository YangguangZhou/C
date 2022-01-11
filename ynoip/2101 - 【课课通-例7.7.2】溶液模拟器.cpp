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
		//撤销 
		if(ch=='Z'&&top>1)top--;
		//进栈 
		if(ch=='P'){
			cin>>v>>c;
			top++;
			a[top].v=a[top-1].v+v;//体积 
			a[top].c=(a[top-1].v*a[top-1].c+v*c)/a[top].v;//浓度 
		}
		printf("%d %.5lf\n",a[top].v,a[top].c);
	}
	return 0;
}
