#include<cstdio>
#include<iostream>
using namespace std;

#define K 10000
int a[100010];
int main(){
	int x,top=1,sum=0;
	char c;
	scanf("%d",&a[1]);
	while((c=getchar())!='\n'){
		scanf("%d",&x);
		if(c=='*')
			a[top]=(a[top]*x)%K;
		else if(c=='+')
			a[++top]=x;
	}
	while(top>=1){
		sum+=a[top--];
	}
	cout<<sum%K;
	return 0;
}
