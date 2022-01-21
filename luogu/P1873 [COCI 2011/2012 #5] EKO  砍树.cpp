#include <bits/stdc++.h>
using namespace std;
#define N 1000005
typedef long long ll;

ll m,n,a[N],mx=-1,l,r;

bool check(ll x){
    ll sum=0;
    for(int i=1;i<=n;i++){
        if(a[i]>=x) sum+=a[i]-x;
    }
    return sum>=m;
}

int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        mx=max(a[i]+1,mx);
    }
    l=0,r=mx;
    while(l+1<r){
        int mid=(l+r)/2;
        if(check(mid)) l=mid;
        else r=mid;
    }
    cout<<l<<endl;
    system("pause");
    return 0;
}