#include<bits/stdc++.h>
using namespace std;
#define N 10005
typedef long long ll;

int n,ans;
bool use[N];

struct cow{
    int d,g;
}c[N];

bool cmp(cow x,cow y){
    if(x.g!=y.g) return x.g>y.g;
    else return x.d<y.d;
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++) scanf("%d%d",&c[i].g,&c[i].d);
    sort(c+1,c+n+1,cmp);
    for(int i=1;i<=n;i++){
        for(int j=c[i].d;j>=1;j--){
            if(!use[j]){
                use[j]=1;
                ans+=c[i].g;
                break;
            }
        }
    }
    cout<<ans<<endl;
    system("pause");
    return 0;
}