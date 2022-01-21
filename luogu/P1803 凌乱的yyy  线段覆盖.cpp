#include <bits/stdc++.h>
using namespace std;
#define N 1000005

int n;

struct con{
    int a,b;
    // //重载小于号
    // bool operator <(const) com &rhs)const{
    //     return b<rhs.b
    // }
}c[N];

//定义排序规则
bool cmp(con x,con y){
    return x.b<y.b;
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d%d",&c[i].a,&c[i].b);
    }
    sort(c+1,c+n+1,cmp);
    int last=1,cnt=1;
    for(int i=2;i<=n;i++){
        if(c[i].a>=c[last].b){
            cnt++;
            last=i;
        }
    }
    cout<<cnt<<endl;
    system("pause");
    return 0;
}