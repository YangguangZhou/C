#include<bits/stdc++.h>
using namespace std;
#define N 200005

//用vector存图（不推荐）
/*struct Edge{
    int to,w;
};

int n,m,cnt;
bool vis[N];
vector<Edge> G[N];

//加边
void addEdge(int u,int v,int w){
    G[u].push_back((Edge){v,w});
}

//遍历图（dfs）
void dfs(int u){
    for(int i=0;i=G[u].size();i++){
        int v=G[u][i].to,w=G[u][i].w;
        if(!vis[v]){
            vis[v]=1;
            dfs(v);
        }
    }
}*/

//链式前向星（倒着存）⭐执行效率远高于vector
/*int n,m,cnt,head[N];

struct Edge{
    int nxt,to,w;
}e[N<<1];//双向边N要×2

void addEdge(int u,int v,int w){
    e[++cnt]=(Edge){head[u],v,w};
    head[u]=cnt;
}

void dfs(int u){
    for(int i=head[u];i;i=e[i].nxt){
        int v=e[i].to,w=e[i].w;
        if(!vis[v]){
            vis[v]=1;
            dfs(v);
        }
    }
}*/

//边目录存图（Kruskal算法）
int n,m,cnt,head[N],ans;
int ind;//存放当前生成树中边的数量
int fa[N];

//并查集
int find(int x){
    return fa[x]==x?x:fa[x]=find(fa[x]);
}

struct Edge{
    int u,v,w;
}e[N];

void addEdge(int u,int v,int w){
    e[++cnt]=(Edge){u,v,w};
}

bool cmp(Edge x,Edge y){
    return x.w<y.w;
}

void Kruskal(){
    sort(e+1,e+m+1,cmp);
    for(int i=1;i<=m;i++){
        int u=e[i].u,v=e[i].v,w=e[i].w;
        if(find(u)!=find(v)){
            fa[find(u)]=find(v);
            ans+=w;
            if(++ind==n-1) break;
        }
    }
}

int main(){       
	cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v,w;
        scanf("%d%d%d",&u,&v,&w);//存图尽量使用scanf
        //双向边加边
        addEdge(u,v,w);
        //addEdge(v,u,w);//Kruskal算法不需要
    }
    for(int i=1;i<=n;i++) fa[i]=i;//并查集初始化（只有使用Kruskal算法时才需要）
    Kruskal();
    cout<<ans<<endl;
    if(ind<n-1) cout<<"orz";
    else cout<<ans;
    cout<<endl;
    system("pause");
    return 0;
}