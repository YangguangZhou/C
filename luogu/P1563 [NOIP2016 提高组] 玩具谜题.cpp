#include<bits/stdc++.h>
using namespace std;
#define N 100005

int n,m;

struct peo{
    bool w;
    string j;
}p[N];

bool w;
int pe,ans;

int main(){
	cin>>n>>m;
    for(int i=0;i<n;i++) cin>>p[i].w>>p[i].j;
    for(int i=1;i<=m;i++){
        cin>>w>>pe;
        if(!p[ans].w&&!w) ans=(ans+n-pe)%n;
        else if(!p[ans].w&&w) ans=(ans+pe)%n;
        else if(p[ans].w&&!w) ans=(ans+pe)%n;
        else if(p[ans].w&&w) ans=(ans+n-pe)%n;
    }
    cout<<p[ans].j<<endl;
	system("pause");
    return 0;
}