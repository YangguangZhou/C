//prim算法
#include<bits/stdc++.h>
using namespace std;
#define N 200005

//链式前向星（倒着存）⭐执行效率远高于vector
int n,m,cnt,ans,ind;
int head[N],inA[N];
bool vis[N];

struct Edge{
    int nxt,to,w;
}e[N<<1];//双向边N要×2

struct heap{
	int to,w;
	bool operator<(const heap &rhs)const{
		return rhs.w<w;
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

void prim(){
	priority_queue<heap> q;
	inA[1]=1;
	for(int i=head[1];i;i=e[i].nxt){
		q.push((heap){e[i].to,e[i].w});
	}
	for(int i=1;i<=n-1;i++){
		heap x;
		do{
			if(q.empty()) return;
			x=q.top();q.pop();
		}while(inA[x.to]);
		inA[x.to]=1;
		ans+=x.w;
		ind++;
		for(int j=head[x.to];j;j=e[j].nxt){
			int v=e[j].to,w=e[j].w;
			q.push((heap){v,w});
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
        addEdge(v,u,w);
    }
    prim();
    if(ind<n-1) cout<<"orz";
    else cout<<ans;
    cout<<endl;
	system("pause");
    return 0;
}