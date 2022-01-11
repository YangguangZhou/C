#include<bits/stdc++.h>
using namespace std;

int main(void){
	int n,a,t[1005]={0},max=-1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		t[a]++;
		if(a>max){
			max=a;
		}
	}
	for(int i=0;i<=max;i++){
		while(t[i]!=0){
			t[i]--;
			cout<<i<<endl;
		}
	}
	system("pause");
	return 0;
}
