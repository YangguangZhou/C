#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,t,s;
	cin>>m>>t>>s;
	if(t==0){
		cout<<0<<endl;
		return 0;
	}
	if(s%t==0){
		cout<<max(m-s/t,0)<<endl;
	}else{
		cout<<max(m-s/t-1,0)<<endl;
	}
	system("pause");
	return 0;
}