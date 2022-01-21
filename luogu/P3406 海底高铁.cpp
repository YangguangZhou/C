#include<bits/stdc++.h>
using namespace std;
#define N 100005

int n,m,p[N],a[N],b[N],c[N],cf[N],cnt[N];
long long sum;

int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++) scanf("%d",&p[i]);
    for(int i=1;i<=n-1;i++) scanf("%d%d%d",&a[i],&b[i],&c[i]);
    for(int i=1;i<m;i++){
        int l=p[i],r=p[i+1];
        if(l>r) swap(l,r);
        cf[l]++,cf[r]--;
    }
    for(int i=1;i<=n-1;i++){
        cnt[i]=cnt[i-1]+cf[i];
        sum+=min((long long)a[i]*cnt[i],(long long)b[i]*cnt[i]+c[i]);
    }
    printf("%lld\n",sum);
    system("pause");
    return 0;
}