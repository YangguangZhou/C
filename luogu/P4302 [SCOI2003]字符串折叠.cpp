#include<bits/stdc++.h>
using namespace std;
#define N 105

string s;
int n,f[N][N];

int num(int x){
    int cnt=0;
    while(x){
        cnt++;
        x/=10;
    }
    return cnt;
}

int main(){
    cin>>s;
    n=s.size();
    s=' '+s;
    memset(f,0x7f,sizeof(f));
    for(int i=1;i<=n;i++) f[i][i]=1;
    for(int l=2;l<=n;l++){
        for(int i=1;i+l-1<=n;i++){
            int j=i+l-1;
            for(int k=i;k<=j-1;k++) f[i][j]=min(f[i][j],f[i][k]+f[k+1][j]);
            for(int k=1;k<=l/2;k++){
                if(l%k) continue;
                bool flag=0;
                for(int q=i+k;q<=j;q++){
                    if(s[q]!=s[i+(q-i)%k]){
                        flag=1;
                        break;
                    }
                }
                if(!flag) f[i][j]=min(f[i][i+k-1]+2+num(l/k),f[i][j]);
            }
        }
    }
    cout<<f[1][n]<<endl;
    system("pause");
    return 0;
}