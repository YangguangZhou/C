#include<bits/stdc++.h>
using namespace std;
#define N 15
typedef long long ll;

int n,k,cnt;
int tot;//枚举上界
int ok[1050],num[1050];
ll f[10][1050][N*N],ans;

int main(){
    cin>>n>>k;
    tot=(1<<n)-1;//1<<n=2^n
    for(int i=0;i<=tot;i++){
        if(((i<<1)&i)==0){
            ok[++cnt]=i;
            int sum=0;
            for(int j=0;j<n;j++){
                if((1<<j)&i) sum++;
            }
            num[cnt]=sum;
        }
    }
    for(int i=1;i<=cnt;i++){
        if(num[i]<=k){
            f[1][ok[i]][num[i]]=1;
        }
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=cnt;j++){
            for(int q=1;q<=cnt;q++){
                for(int p=0;p<=k;p++){
                    int x=ok[j],y=ok[q];//x为当前行，y为上一行
                    if((x&y)==0&&((x<<1)&y)==0&&((x>>1)&y)==0&&p+num[j]<=k){
                        f[i][x][p+num[j]]+=f[i-1][y][p];
                    }
                }
            }
        }
    }
    for(int i=1;i<=cnt;i++){
        ans+=f[n][ok[i]][k];
    }
    cout<<ans<<endl;
    system("pause");
    return 0;
}