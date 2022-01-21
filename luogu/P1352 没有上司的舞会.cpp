#include<bits/stdc++.h>
using namespace std;
#define N 6005

struct Edge{
    int nxt,to;
}e[N*2];

int head[N],cnt,n,f[N][2],boss[N],root;

void addEdge(int u,int v){
    e[++cnt]=(Edge){head[u],v};
    head[u]=cnt;
}

void dfs(int u,int fa){
    for(int i=head[u];i;i=e[i].nxt){
        int v=e[i].to;
        //树上的搜索与图不同，不需要vis
        if(v!=fa){
            dfs(v,u);
            f[u][0]+=max(f[v][0],f[v][1]);//加上自己儿子的快乐最大值
            f[u][1]+=f[v][0];//自己参加，则加上儿子不参加的快乐最大值
        }
    }
}

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        //快乐初始值即为自己参加的快乐，不去则为0
        scanf("%d",&f[i][1]);
    }
    for(int i=1;i<=n-1;i++){
        int u,v;
        scanf("%d%d",&u,&v);
        //树是双向图，故要双向加边
        addEdge(u,v);
        addEdge(v,u);
        boss[u]=v;
    }
    //寻找最大的爸爸
    for(int i=1;i<=n;i++){
        if(boss[i]==0) root=i;
    }
    dfs(root,0);
    cout<<max(f[root][1],f[root][0])<<endl;
    //system("pause");
    return 0;
}