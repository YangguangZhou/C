#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 10
#define N2 4000005

int n,m,k[N],p[N],cnt,ans1[N2],ans2[N2];
ll res;

//快速幂
ll qp(int a,int b){
	ll ans=1;
	while(b){
		if(b%2) ans*=a;
		a*=a;
		b>>=1;
	}
	return ans;
}

void dfs(int l,int r,ll sum,int *ans){//传入数组：*ans或ans[]
	if(l==r+1){
		ans[++cnt]=sum;
		return;
	}
	for(int i=1;i<=m;i++){
		dfs(l+1,r,sum+k[l]*qp(i,p[l]),ans);
	}
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d%d",&k[i],&p[i]);
	}
	dfs(1,n/2,0,ans1);
	int cnt1=cnt;
	cnt=0;
	dfs(n/2+1,n,0,ans2);
	sort(ans2+1,ans2+cnt+1);
	/*二分查找(在algorithm库中)
	从头地址(begin)到尾地址(end-1)
	从大到小
	lower_bound(begin,end,num);第一个大于等于num的数
	upper_bound(begin,end,num);第一个大于num的数
	均返回地址（指针）
	*/
	for(int i=1;i<=cnt1;i++){
		res+=(upper_bound(ans2+1,ans2+cnt+1,-ans1[i])-lower_bound(ans2+1,ans2+cnt+1,-ans1[i]));
	}
	cout<<res<<endl;
	system("pause");
    return 0;
}