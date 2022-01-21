#include<bits/stdc++.h>
using namespace std;
#define N 505
#define M 1000000007
typedef long long ll;

int n,m;
string s;
ll f[N][N][7];

/*
1.***
2.***(...)
3.(...)***
4.(...)***(...)
5.(...)
6.***(...)***
*/

int main(){
    cin>>n>>m>>s;
    s=' '+s;//方便下标从1开始
    for(int i=1;i<=n;i++) f[i][i-1][1]=1;
    for(int l=1;l<=n;l++){
        for(int i=1;i+l-1<=n;i++){
            int j=i+l-1;
            if(l<=m&&(s[j]=='*'||s[j]=='?')){
                f[i][j][1]=f[i][j-1][1]%M;
            }
            if((s[i]=='('||s[i]=='?')&&(s[j]==')'||s[j]=='?')){
                f[i][j][5]=(f[i+1][j-1][1]+f[i+1][j-1][2]+f[i+1][j-1][3]+f[i+1][j-1][4])%M;
            }
            for(int k=i;k<j;k++){
                f[i][j][2]=(f[i][j][2]+f[i][k][1]*f[k+1][j][4])%M;
                f[i][j][3]=(f[i][j][3]+f[i][k][4]*f[k+1][j][1])%M;
                f[i][j][4]=(f[i][j][4]+f[i][k][5]*(f[k+1][j][2]+f[k+1][j][4]))%M;
                f[i][j][6]=(f[i][j][6]+f[i][k][1]*f[k+1][j][3])%M;
            }
            f[i][j][4]=(f[i][j][4]+f[i][j][5])%M;
            f[i][j][6]=(f[i][j][6]+f[i][j][1])%M;
        }
    }
    cout<<f[1][n][4]<<endl;
    system("pause");
    return 0;
}