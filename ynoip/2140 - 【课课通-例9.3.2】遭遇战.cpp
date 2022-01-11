#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

const int MAXN=1010;
const int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
//标记是否走过
bool v1[MAXN][MAXN],v2[MAXN][MAXN];

//work:判断是否相遇
void work(){
    bool c1=true,c2=true;
    int n,x1,y1,d1,x2,y2,d2,tx1,ty1,tx2,ty2;
    cin>>n>>x1>>y1>>d1>>x2>>y2>>d2;
    ++x1,++y1,++x2,++y2;
    memset(v1,true,sizeof(v1));
    memset(v2,true,sizeof(v2));
    //初始化
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            v1[i][j]=v2[i][j]=false;
        }
    }
    //判断是不是进来就在同一个点
    if(x1==x2&&y1==y2){
        cout<<x1-1<<" "<<y1-1<<endl;
        return;
    }
    //进入时做标记
    v1[x1][y1]=v2[x2][y2]=true;
    //模拟跑的过程
    while(c1||c2){
        if(c1){
            //下一步的位置
            tx1=x1+dx[d1],ty1=y1+dy[d1];
            //如果下一步不是边缘,也不是走过的地方,则执行else
            if(v1[tx1][ty1]){
                //取余确定接下来的方向
                d1=(d1+1)%4;
                tx1=x1+dx[d1];
                ty1=y1+dy[d1];
                if(v1[tx1][ty1]){
                    //连续两次为false就要结束
                    c1=false;
                }else{
                    x1=tx1;
                    y1=ty1;
                }
            }else{
                x1=tx1;
                y1=ty1;
            }
        }
        if(c2){
            //下一步的位置
            tx2=x2+dx[d2],ty2=y2+dy[d2];
            //如果下一步不是边缘,也不是走过的地方,则执行else
            if(v2[tx2][ty2]){
                //取余确定接下来的方向
                d2=(d2+3)%4;
                tx2=x2+dx[d2];
                ty2=y2+dy[d2];
                if(v2[tx2][ty2]){
                    //连续两次为false就要结束
                    c2=false;
                }else{
                    x2=tx2;
                    y2=ty2;
                }
            }else{
                x2=tx2;
                y2=ty2;
            }
        }
        //走过的点标记为true
        v1[x1][y1]=v2[x2][y2]=true;
        //如果在同一个点则输出并退出
        if(x1==x2&&y1==y2){
            cout<<x1-1<<" "<<y1-1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main(){
    //t:测试数据组数
    int t;
    cin>>t;
    while(t--){
        work();
    }
    system("pause");
    return 0;
}