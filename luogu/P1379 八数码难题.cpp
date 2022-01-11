#include <bits/stdc++.h>
using namespace std;
#define N 4

int mp[N][N];
int goal[N][N]={
{0,0,0,0},
{0,1,2,3},
{0,8,0,4},
{0,7,6,5}
};
int dx[]={0,1,-1,0},dy[]={1,0,0,-1};
int sx,sy,lim,success;
map <int,int> vis;

int h(){
    int cnt=0;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(mp[i][j]!=goal[i][j]) cnt++;
        }
    }
    return cnt;
}

bool check(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(mp[i][j]!=goal[i][j]) return 0;
        }
    }
    return 1;
}

void IDFSAstar(int x,int y,int step,int pre){
    if(step+h()>lim+1) return;
    if(step==lim){
        if(check()) success=1;
        return;
    }
    for(int i=0;i<=3;i++){
        int tx=x+dx[i],ty=y+dy[i];
        if(tx<1||ty>3||ty<1||ty>3||pre+i==3) continue;
        swap(mp[x][y],mp[tx][ty]);
        if(!success) IDFSAstar(tx,ty,step+1,i);
        swap(mp[x][y],mp[tx][ty]);
    }
}

int main(){
    char xx;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            scanf("%c",&xx);
            mp[i][j]=xx-'0';
            if(!mp[i][j]) sx=i,sy=j;
        }
    }
    if(check()){
        cout<<0<<endl;
        system("pause");
        return 0;
    }
    while(!success){
        lim++;
        IDFSAstar(sx,sy,0,-1);
    }
    cout<<lim<<endl;
    system("pause");
    return 0;
}