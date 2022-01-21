#include<bits/stdc++.h>
using namespace std;
#define N 100005
typedef long long ll;

ll n,x,a[N],ans;

int main(){
    cin>>n>>x;
    for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
    for(int i=1;i<n;i++){
        int sum=a[i]+a[i+1];
        if(sum>x){
            ans+=sum-x;
            if(a[i+1]>=sum-x) a[i+1]-=sum-x;
            else{
                a[i]-=sum-x-a[i+1];
                a[i+1]=0;
            }
        }
    }
    cout<<ans<<endl;
    system("pause");
    return 0;
}