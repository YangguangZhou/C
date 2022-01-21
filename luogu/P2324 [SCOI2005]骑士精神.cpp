#include<bits/stdc++.h>
using namespace std;
#define N 6

int goal[N][N]=
{{0,0,0,0,0,0},
 {0,1,1,1,1,1},
 {0,0,1,1,1,1},
 {0,0,0,2,1,1},
 {0,0,0,0,0,1},
 {0,0,0,0,0,0}};;
int dx[]={0,1,1,-1,-1,2,2,-2,-2};
int dy[]={0,2,-2,2,-2,1,-1,1,-1};
int T,mp[N][N];
bool succ=0;

int h(){
    int cnt=0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(mp[i][j]!=goal[i][j]) cnt++;
        }
    }
    return cnt;
}

bool check(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(mp[i][j]!=goal[i][j]) return 0;;
        }
    }
    return 1;
}

void IDAstar(int step,int x,int y,int dep){
    if(step>=dep){
        if(check()) succ=1;
        return;
    }
    for(int i=1;i<=8;i++){
        int tx=x+dx[i],ty=y+dy[i];
        if(tx<1||tx>5||ty<1||ty>5) continue;
        swap(mp[x][y],mp[tx][ty]);
        if(step+h()<=dep) IDAstar(step+1,tx,ty,dep);
        swap(mp[x][y],mp[tx][ty]);
    }
}

int main(){
    cin>>T;
    while(T--){
        int x,y;
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5;j++){
                char a;
                cin>>a;
                if(a=='*'){
                    mp[i][j]=2;
                    x=i,y=j;
                }else mp[i][j]=a-'0';
            }
        }
        for(int lim=1;lim<=15;lim++){
            succ=0;
            IDAstar(0,x,y,lim);
            if(succ){
                cout<<lim<<endl;
                break;
            }
        }
        if(!succ) cout<<-1<<endl;
    }
    system("pause");
    return 0;
}