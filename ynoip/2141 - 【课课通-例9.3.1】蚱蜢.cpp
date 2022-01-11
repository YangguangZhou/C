#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    string a;
    cin>>a;
    int ans=0,pre=0;//ans:最大能力,pre:上一个元音
    for(int i=0;i<(int)a.size();i++){
        if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y'){
            if(ans<=(i+1-pre)){
                ans=i+1-pre;
            }
            pre=i+1;
        }
    }
    if(ans<=(int)a.size()+1-pre){
        ans=a.size()+1-pre;
    }
    cout<<ans<<endl;
    system("pause");
    return 0;
}