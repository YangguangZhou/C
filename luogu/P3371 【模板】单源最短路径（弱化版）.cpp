//SPFA算法
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 500005
#define INF 0x7fffffff

//链式前向星（倒着存）⭐执行效率远高于vector
int n,m,s,cnt,ans;
int head[N];
ll dis[N];
bool vis[N],inq[N];

struct Edge{
    int nxt,to,w;
}e[N];

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

void spfa(int s){
	queue<int> q;
	for(int i=0;i<=N;i++) dis[i]=INF;
	//memset(dis,0x7fffffff,sizeof(dis));
	dis[s]=0;
	inq[s]=1;
	q.push(s);
	while(!q.empty()){
		int u=q.front();q.pop();
		inq[u]=0;
		for(int i=head[u];i;i=e[i].nxt){
			int v=e[i].to,w=e[i].w;
			if(dis[v]>dis[u]+w){
				dis[v]=dis[u]+w;
				if(!inq[v]){
					q.push(v);
					inq[v]=1;
				}
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
    spfa(s);
    for(int i=1;i<n;i++){
		printf("%d ",dis[i]);
	}
	cout<<endl;
	system("pause");
    return 0;
}