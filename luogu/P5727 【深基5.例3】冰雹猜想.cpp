#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a[10005]={0},count=0,x;
    cin>>n;
    x=n;
    while(x!=1){
        if(x%2!=0){
            x=x*3+1;
        }else{
            x/=2;
        }
        a[count]=x;
        count++;
    }
    for(int i=count-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<n<<endl;
    system("pause");
    return 0;
}