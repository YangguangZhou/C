#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=n-i;j>=0;j--){
			if(a<10){
				cout<<0<<a;
			}else{
				cout<<a;
			}
			a++;
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
