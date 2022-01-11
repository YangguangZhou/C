#include<bits/stdc++.h>
using namespace std;

int w,n,t[30005],ans=0;
int main(){
	cin>>w>>n;
	for(int i=0;i<n;i++){
		cin>>t[i];
	}
	sort(t,t+n);
	int endN=0;
	for(int i=n-1;i>=endN;i--){
		if(t[i]+t[endN]<=w){
			ans++;
			endN++;
		}else{
			ans++;
		}
	}
	cout<<ans<<endl;
	system("pause");
	return 0;
}