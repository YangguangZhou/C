#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,c[10]={0},t;
	cin>>n>>m;
	for(int i=n;i<=m;i++){
		t=i;
		while(t){
			c[t%10]++;
			t/=10;
		}
	}
	for(int i=0;i<10;i++){
		cout<<c[i]<<" ";
	}
	cout<<endl;
	system("pause");
    return 0;
}
