#include<bits/stdc++.h>
using namespace std;

bool pd(int num,int t){
    int i=0;
    do{
        if(num%10==t){
            return 1;
        }
        num/=10;
        i++;
    }while(num);
    return 0;
}
int main(){
    int m,t,ans=0;
    cin>>m>>t;
    for(int i=1;i<=m;i++){
        if(!pd(i,t)){
            ans++;
        }
    }
    cout<<ans<<endl;
    system("pause");
    return 0;
}