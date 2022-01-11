#include<bits/stdc++.h>
using namespace std;

string s;
int n,ans;
int main(){
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='V'&&s[i+1]=='K'){
            ans++;
            s[i]='a';
            s[i+1]='b';
        }
    }
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            cout<<++ans<<endl;
            system("pause");
            return 0;
        }
    }
    cout<<ans<<endl;
    system("pause");
    return 0;
}