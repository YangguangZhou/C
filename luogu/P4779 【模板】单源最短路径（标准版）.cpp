//dijkstra算法
#include<bits/stdc++.h>
using namespace std;
#define N 200005

//链式前向星（倒着存）⭐执行效率远高于vector
int n,m,s,cnt,ans;
int head[N],dis[N];
bool vis[N];

struct Edge{
    int nxt,to,w;
}e[N<<1];//双向边N要×2

struct heap{
	int id,dis;
	bool operator<(const heap &rhs)const{
		return rhs.dis<dis;
	}
};

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
}

void dijkstra(int s){
	priority_queue<heap> q;
	memset(dis,0x3f,sizeof(dis));
	dis[s]=0;
	q.push((heap){s,dis[s]});
	while(!q.empty()){
		heap x=q.top();q.pop();
		int u=x.id;
		//优化
		if(dis[u]!=x.dis) continue;
		for(int i=head[u];i;i=e[i].nxt){
			int v=e[i].to,w=e[i].w;
			if(dis[v]>dis[u]+w){
				dis[v]=dis[u]+w;
				q.push((heap){v,dis[v]});
			}
		}
	}
}

int main(){
	cin>>n>>m>>s;
    for(int i=1;i<=m;i++){
        int u,v,w;
        scanf("%d%d%d",&u,&v,&w);//存图尽量使用scanf
        addEdge(u,v,w);
    }
    dijkstra(s);
    for(int i=1;i<=n;i++){
		cout<<dis[i]<<" ";
	}
	cout<<endl;
	system("pause");
    return 0;
}