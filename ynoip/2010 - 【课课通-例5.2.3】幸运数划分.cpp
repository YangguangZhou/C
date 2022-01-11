#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int l[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777},n,i;
	cin>>n;
	for(i=0;i<14;i++){
		if(n%l[i]==0){
			cout<<"YES";
			break;
		}
	}
	if(i==14){
		cout<<"NO";
	}
	return 0;
}
