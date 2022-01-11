#include<bits/stdc++.h>
using namespace std;

int main(){
	int a=0,b,n,m;
	cin>>n>>m;
	b=((m+1)*(n+1)*m*n)/4;
	for(;m>=1&&n>=1;m--,n--){
		a+=m*n;
	}                  
	cout<<a<<" "<<b-a;
	system("pause");
	return 0;
}
