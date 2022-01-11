#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,sa=0,sb=0,ca=0,cb=0;
	double a,b;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		if(i%k==0){
			sa+=i;
			ca++;
		}else{
			sb+=i;
			cb++;
		}
	}
	a=(double)sa/ca;
	b=(double)sb/cb;
	printf("%.1lf %.1lf\n",a,b);
	system("pause");
	return 0;
}
