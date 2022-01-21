#include<bits/stdc++.h>
using namespace std;
#define N 1005
typedef long long ll;


ll T,n,h,r;
ll fa[N],to[N],bo[N],tj,bj;

struct ball{
    ll x,y,z;
}w[N];

ll find(int x){
    return fa[x]==x?x:fa[x]=find(fa[x]);
}

double dis(ll x,ll y,ll z,ll xx,ll yy,ll zz){
    return sqrt((x-xx)*(x-xx)+(y-yy)*(y-yy)+(z-zz)*(z-zz));
}

int main(){
    cin>>T;
    while(T--){
        tj=bj=0;
        cin>>n>>h>>r;
        for(int i=1;i<=n;i++) fa[i]=i;
        for(int i=1;i<=n;i++){
            cin>>w[i].x>>w[i].y>>w[i].z;
            if(w[i].z+r>=h){
                tj++;
                to[tj]=i;
            }
            if(w[i].z-r<=0){
                bj++;
                bo[bj]=i;
            }
            for(int j=1;j<=i;j++){
                if(dis(w[i].x,w[i].y,w[i].z,w[j].x,w[j].y,w[j].z)<=2*r){
                    int a1=find(i),a2=find(j);
                    if(a1!=a2) fa[a1]=a2;
                } 
            }
        }
        bool flag=0;
        for (int i=1;i<=tj;i++){
            for (int j=1;j<=bj;j++){
                if (find(to[i])==find(bo[j])){
                    flag=1;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    system("pause");
    return 0;
}