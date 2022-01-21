#include<bits/stdc++.h>
using namespace std;
#define N 1005

int n,m,p[N][N];
bool vis[N][N];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

struct node{
    int x,y;
};

bool check(int lim){
    memset(vis,0,sizeof(vis));
    queue<node>q;
    vis[1][1]=1;
    q.push((node){1,1});
    while(!q.empty()){
        int x=q.front().x,y=q.front().y;
        q.pop();
        if(x==n-1){
            return 1;
        }
        for(int i=3;i>=0;i--){
            int tx=x+dx[i],ty=y+dy[i];
            if(ty<1||tx<1||ty>m||vis[tx][ty]||p[tx][ty]>lim) continue;
            vis[tx][ty]=1;
            q.push((node){tx,ty});
        }
    }
    return 0;
}

int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>p[i][j];
        }
    }
    int l=0,r=1000;
    while(l+1<r){
        int mid=(l+r)>>1;
        if(check(mid)) r=mid;
        else l=mid;
    }
    cout<<r<<endl;
    system("pause");
    return 0;
}