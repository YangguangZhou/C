#include<bits/stdc++.h>
using namespace std;

#define N 200005
#define MIN -0x7fffffff

int n,f[N],ans=MIN;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>f[i];
		if(f[i-1]>0) f[i]=f[i-1]+f[i];
		ans=max(ans,f[i]);
	}
	cout<<ans<<endl;
	system("pause");
	return 0;
}