#include<bits/stdc++.h>
using namespace std;
#define INF 0x7fffffff

int m,n,ans=INF;

void dfs(int now,int lr,int lh,int v,int s){//v为剩余体积，则需要用n-v
    //在最好情况下依然超过目前答案，则返回
    //2*lr*(n-v)/(lr*lr)=2*(n-v)/lr
    if(s+2*(n-v)/lr>=ans) return;
    if(!now){
        if(v==n) ans=min(ans,s);
        return;
    }
    for(int r=lr-1;r>=now;r--){
        //(n-v)=r*r*h=>h=(n-v)/r/r
        for(int h=min(lh-1,(n-v)/r/r);h>=now;h--){
            if(now==m) s=r*r;//每一层的顶面面积之和
            if(v+r*r*h<=n){
                if(s+2*r*h>=ans) return;
                dfs(now-1,r,h,v+r*r*h,s+2*r*h);
            }
        }
        
    }
}

int main(){
    cin>>n>>m;
    dfs(m,sqrt(n),n+1,0,0);
    cout<<ans<<endl;
    system("pause");
    return 0;
}