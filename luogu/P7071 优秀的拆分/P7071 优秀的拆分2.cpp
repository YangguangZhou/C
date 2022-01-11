#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a;
	cin>>n;
	if(n%2==1){
		cout<<-1;
	}else{
		for(int i=24;i>=0;i--){
			a=1<<i;
			if(n>=a){
				n-=a;
				cout<<a<<" ";
			}
		}
	}
	cout<<endl;
	system("pause");
	return 0;
}
