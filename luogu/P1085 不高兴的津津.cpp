#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int a,b,sum,week=0,max=0;
	for(int i=1;i<=7;i++){
		scanf("%d%d",&a,&b);
		sum=a+b;
		if(sum>8&&sum>max){
			week=i;
			max=sum;
		}
	}
	printf("%d",week);
	return 0;
}
