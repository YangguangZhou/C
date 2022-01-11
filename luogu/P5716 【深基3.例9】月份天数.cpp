#include<bits/stdc++.h>
using namespace std;

bool rn(int n){
    if(n%100!=0&&n%4==0) return 1;
    else if(n%100==0&&n%400==0) return 1;
    else return 0;
}
int main(){
    int y,m;
    cin>>y>>m;
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) cout<<31;
    else if(m==4||m==6||m==9||m==11) cout<<30;
    else if(m==2) cout<<(rn(y)?29:28);
    cout<<endl;
    system("pause");
    return 0;
}
