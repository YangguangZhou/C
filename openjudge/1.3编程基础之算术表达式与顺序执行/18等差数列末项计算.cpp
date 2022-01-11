#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int a1,a2,n,an;
	scanf("%d%d%d",&a1,&a2,&n);
	an=(a2-a1)*(n-1)+a1;
	printf("%d",an);
	return 0;
}
