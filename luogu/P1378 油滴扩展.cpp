#include <bits/stdc++.h>
using namespace std;
#define N 10
#define pai 3.1415926535

int n,x11,y11,x2,y2,x[N],y[N];
double r[N];
double ans;

double dis(int a,int b,int c,int d){
    return sqrt(pow(a-c,2)+pow(b-d,2));
}

double jl(int i){
    int a=abs(x11-x[i]),b=abs(y11-y[i]),c=abs(x2-x[i]),d=abs(y2-y[i]);
    double m=min(min(a,b),min(c,d));
	for(int j=1;j<=n;j++){
		if(r[j]&&i!=j){
			m=min(m,max(dis(x[j],y[j],x[i],y[i])-r[j],0.0));
		}
	}
    return m;
}

void dfs(int step,double sum){
    if(step>n){
        ans=max(ans,sum);
        return;
    }
    for(int i=1;i<=n;i++){
        if(!r[i]){
            r[i]=jl(i);
            dfs(step+1,r[i]*r[i]*pai+sum);
            r[i]=0;
        }
    }
}

int main(){
    cin>>n>>x11>>y11>>x2>>y2;
    for(int i=1;i<=n;i++){
        cin>>x[i]>>y[i];
    }
    dfs(1,0);
    double sq=abs(x11-x2)*abs(y11-y2);
	double res=sq-ans;
    printf("%.0lf\n",res);
    system("pause");
    return 0;
}