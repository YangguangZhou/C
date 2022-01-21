#include<bits/stdc++.h>
using namespace std;
#define N 1000005

deque<int> q;//deque为单调队列
int a[N],n,k;

int main(){
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        while(!q.empty()&&q.front()<i-k+1) q.pop_front();
        while(!q.empty()&&a[q.back()]>a[i]){//back为队尾，只有deque可以读到，queqe不能读到
            q.pop_back();//从队尾pop
        }
        q.push_back(i);
        if(i>=k) printf("%d ",a[q.front()]);
    }
    cout<<endl;
    q.clear();
    for(int i=1;i<=n;i++){
        while(!q.empty()&&q.front()<i-k+1) q.pop_front();
        while(!q.empty()&&a[q.back()]<a[i]) q.pop_back();
        q.push_back(i);
        if(i>=k) printf("%d ",a[q.front()]);
    }
    cout<<endl;
    system("pause");
    return 0;
}