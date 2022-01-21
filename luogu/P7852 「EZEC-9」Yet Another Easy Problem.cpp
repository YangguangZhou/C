#include<bits/stdc++.h> 
using namespace std;

#define N 100005

int T,m,n;
int main(){
	cin>>T;
	for(int i=1;i<=T;i++){
		cin>>n>>m;
		if(m==0||m>=n-1){
			for(int j=n;j>=1;j--) cout<<j<<" ";
			cout<<endl;
		}else if(m==1){
			cout<<n<<" "<<"1 ";
			for(int j=n-1;j>=2;j--) cout<<j<<" ";
			cout<<endl;
		}else{
			cout<<n<<" ";
			for(int j=1;j<=m;j++) cout<<j<<" ";
			for(int j=n-1;j>=m+1;j--) cout<<j<<" ";
			cout<<endl;
		}
	}
	return 0;
}