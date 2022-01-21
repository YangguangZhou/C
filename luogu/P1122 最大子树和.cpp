#include<bits/stdc++.h>
using namespace std;
#define N 16005

struct Edge{
    int nxt,to;
}e[N*2];

int head[N],cnt,n,f[N],ans=-0x7fffffff;

void addEdge(int u,int v){
    e[++cnt]=(Edge){head[u],v};
    head[u]=cnt;
}

void dfs(int u,int fa){
    for(int i=head[u];i;i=e[i].nxt){
        int v=e[i].to;
        if(v!=fa){
            dfs(v,u);
            if(f[v]>0) f[u]+=f[v];
        }
    }
}

int main(){
    scanf("%d",&n);
    memset(f,0x80,sizeof(f));//0x80即为最小值
    for(int i=1;i<=n;i++){
        scanf("%d",&f[i]);
    }
    for(int i=1;i<=n-1;i++){
        int u,v;
        scanf("%d%d",&u,&v);
        addEdge(u,v);
        addEdge(v,u);
    }
    dfs(1,0);
    for(int i=1;i<=n;i++){
        ans=max(f[i],ans);
    }
    cout<<ans<<endl;
    system("pause");
    return 0;
}