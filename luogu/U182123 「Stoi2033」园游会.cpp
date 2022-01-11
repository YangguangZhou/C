#include <bits/stdc++.h>
using namespace std;
#define N 1005

int n,m,jm[N][N],ans[N][N],v[N][N];
int dx[]={0,0,1,-1},dy[]={1,-1,0,0};

struct node{
    int x,y;
    bool operator<(const node& rhs)const{
        if(jm[rhs.x][rhs.y]==jm[x][y]){
            if(x+y==rhs.x+rhs.y) return rhs.x>x;
            return rhs.x+rhs.y>x+y;
        }
        return jm[rhs.x][rhs.y]<jm[x][y];
    }
};

set<node> s[15];

int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>v[i][j];
            if(i==1) jm[i][j]++;
            if(j==1) jm[i][j]++;
            if(i==n) jm[i][j]++;
            if(j==m) jm[i][j]++;
            s[v[i][j]].insert((node){i,j});
        }
    }
    for(int i=1;i<=n*m;i++){
        int w;
        cin>>w;
        auto u=s[w].begin();
        int x=u->x;
        int y=u->y;
        s[w].erase(u);
        ans[x][y]=i;
        for(int d=3;d>=0;d--){
            int tx=x+dx[d],ty=y+dy[d];
            if(tx<1||tx>n||ty<1||ty>m) continue;
            if(ans[tx][ty]) continue;
            s[v[tx][ty]].erase((node){tx,ty});
            jm[tx][ty]++;
            s[v[tx][ty]].insert((node){tx,ty});
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}