#include <bits/stdc++.h>
using namespace std;
#define N 10000005
typedef long long ll;

int n,c,a[1005],n1,cnt1,cnt2;
ll x,ans1[N],ans2[N],res;

void dfs(int l,int r,ll sum,int f){
	if(l>r){
		if(!f) ans1[++cnt1]=sum;
		else ans2[++cnt2]=sum;
		return;
	}
	if(sum+a[l]<=c) dfs(l+1,r,sum+a[l],f);
	if(sum<=c) dfs(l+1,r,sum,f);
	return;
}

int main(){
	cin>>n1>>c;
	for(int i=1;i<=n1;i++){
		cin>>x;
		if(x>c) break;
		a[++n]=x;
	}
	dfs(1,n/2,0,0);
	dfs(n/2+1,n,0,1);
	sort(ans2+1,ans2+cnt2+1);
	for(int i=1;i<=cnt1;i++){
		int pos=upper_bound(ans2+1,ans2+cnt2+1,c-ans1[i])-ans2;//减去首地址即可得到下标
		res=max(res,ans1[i]+ans2[pos-1]);
	}
	cout<<res<<endl;
	system("pause");
	return 0;
}