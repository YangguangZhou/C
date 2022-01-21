#include <bits/stdc++.h>
using namespace std;
#define N 100005
typedef long long ll;

ll n,k,a[N],mx=-1,l,r;

bool check(ll x){
    ll cnt=0;
    for(int i=1;i<=n;i++){
        cnt+=(a[i]/x);
    }
    return cnt>=(ll)k;
}

int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        mx=max(a[i],mx);
    }
    l=0,r=mx+5;
    while(l+1<r){
        ll mid=(l+r)/2;
        if(check(mid)) l=mid;
        else r=mid;
    }
    cout<<l<<endl;
    system("pause");
    return 0;
}