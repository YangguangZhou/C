#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%100!=0&&n%4==0) cout<<1<<endl;
    else if(n%100==0&&n%400==0) cout<<1<<endl;
    else cout<<0<<endl;
    system("pause");
    return 0;
}
