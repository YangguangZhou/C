#include <bits/stdc++.h>
using namespace std;
#define N 50005
typedef long long ll;

int n,m,se,d[N],l,r,mid;

bool check(int x){
    int st=0,cnt=0;
    d[n+1]=se;
    for(int i=1;i<=n+1;i++){
        if(d[i]-st<x) cnt++;
        else st=d[i];
    }
    return cnt<=m;
}

int main(){
    cin>>se>>n>>m;
    for(int i=1;i<=n;i++) scanf("%d",&d[i]);
    l=0,r=se+5;
    while(l+1<r){
        mid=(l+r)/2;
        if(check(mid)) l=mid;
        else r=mid;
    }
    cout<<l<<endl;
    system("pause");
    return 0;
}