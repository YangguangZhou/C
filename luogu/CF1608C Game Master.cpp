#include <bits/stdc++.h>
using namespace std;
#define N 100005

int t,n,minn,pos;

struct node{
    int a,b,id;
}s[N];

bool cmp(node xx,node yy){
    return xx.a>yy.a;
}

int main(){
    cin>>t;
    while(t--){
        int ans[N]={0};
        cin>>n;
        for(int i=1;i<=n;i++){
            scanf("%d",&s[i].a);
            s[i].id=i;
        }
        for(int i=1;i<=n;i++){
            scanf("%d",&s[i].b);
        }
        sort(s+1,s+n+1,cmp);
        ans[s[1].id]=1;
        minn=s[1].b;
        pos=1;
        for(int i=2;i<=n;i++){
            if(s[i].b>minn){
                for(int j=i;j>=pos+1;j--){
                    ans[s[j].id]=1;
                    minn=min(minn,s[j].b);
                }
                pos=i;
            }
        }
        for(int i=1;i<=n;i++) cout<<ans[i];
        cout<<endl;
    }
    system("pause");
    return 0;
}