#include<bits/stdc++.h>
using namespace std;
#define N 5005

int n,m,p,fa[N];

int find(int x){
    return fa[x]==x?x:find(fa[x]);
}

int main(){
    cin>>n>>m>>p;
    for(int i=1;i<=n;i++) fa[i]=i;
    for(int i=1,u,v;i<=m;i++){
        cin>>u>>v;
        fa[find(u)]=find(v);
    }
    for(int i=1,u,v;i<=p;i++){
        cin>>u>>v;
        printf(find(u)==find(v)?"Yes\n":"No\n");
    }
    system("pause");
    return 0;
}