#include<bits/stdc++.h>
using namespace std;

#define N 55
#define INF 0x7f

string a;
int n,f[N][N];

int main(){
    cin>>a;
    n=a.size();
    memset(f,INF,sizeof(f));
    for(int i=1;i<=n;i++) f[i][i]=1;
    for(int l=2;l<=n;l++){
        for(int i=1;i+l-1<=n;i++){
            int j=i+l-1;
            if(a[i-1]==a[j-1]){
                f[i][j]=min(f[i+1][j],f[i][j-1]);
                continue;
            }
            for(int k=i;k<=j;k++){
                f[i][j]=min(f[i][j],f[i][k]+f[k+1][j]);
            }
        }
    }
    cout<<f[1][n];
    return 0;
}