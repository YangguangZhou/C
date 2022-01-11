#include<bits/stdc++.h>
using namespace std;

int main(){
	int k;
	double num=0,i=0;
	cin>>k;
	while(num<=k){
		i+=1;
		num+=(1/i);
	}
	cout<<i;
	return 0;
}
