#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int t[10001]={0},s[10001]={0},lt=1,ls,n;
void factorial(int v){
    for(int i=1;i<=lt;i++){
        t[i]*=v;
    }
    int i=1;
    while(t[i]>9||i<lt){
        t[i+1]+=t[i]/10;
        t[i]%=10;
        i++;
    }
    lt=i;
}
void facPlus(){
    for(int i=1;i<=lt;i++){
        s[i]+=t[i];
        if(s[i]/10){
            s[i+1]+=s[i]/10;
            s[i]%=10;
            ls=ls>i+1?ls:i+1;
        }
        ls=ls>i?ls:i;
    }
}
int main(){
    cin>>n;
    t[lt]=1;
    for(int i=1;i<=n;i++){
        factorial(i);
        facPlus();
    }
    //倒序输出
    for(int i=ls;i>=1;i--){
        cout<<s[i];
    }
    cout<<endl;
    system("pause");
    return 0;
}