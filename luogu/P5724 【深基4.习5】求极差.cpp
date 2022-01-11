#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[105],ans;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	ans=a[n-1]-a[0];
	cout<<ans<<endl;
	system("pause");
	return 0;
}
