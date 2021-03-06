#include<bits/stdc++.h>
using namespace std;
#define N 7000005
typedef long long ll;

int n;
ll k,sum;
double avg;
int a[N];
bool als=1;

inline int read(){
	int now=0,nev=1; char c=getchar();
	while(c<'0' || c>'9') { if(c=='-') nev=-1; c=getchar();}
	while(c>='0' && c<='9') { now=(now<<1)+(now<<3)+(c&15); c=getchar(); }
	return now*nev;
}

double fc(ll x){
    double res=0;
    for(int i=1;i<=n;i++){
        res+=(a[i]*x-avg*x)*(a[i]*x-avg*x);
    }
    return res/n;
}

ll lowerbound(){
    ll l=0;
    ll r=3000000000000000005;
    while(l+1<r){
        ll mid=(l+r)>>1;
        if(fc(mid)>=k) r=mid;
        else l=mid;
    }
    if(r==1) return r;
    if(r==3000000000000000005) return -1;
    double xx=fabs(fc(r)-k),yy=fabs(fc(r-1)-k);
    return xx<yy?r:r-1;
}

int main(){
    cin>>n>>k;
    if(n==1){
        printf("No answer!\n");
        system("pause");
        return 0;
    }
    for(int i=1;i<=n;i++){
        a[i]=read();
        sum+=a[i];
        if(i!=1 && a[i]!=a[i-1]) als=0;
    }
    if(als){
        printf("No answer!\n");
        system("pause");
        return 0;
    }
    avg=1.0*sum/n;
    ll ans=lowerbound();
    if(ans<=0) printf("No answer!\n");
    else printf("%lld\n",ans);
    system("pause");
    return 0;
}