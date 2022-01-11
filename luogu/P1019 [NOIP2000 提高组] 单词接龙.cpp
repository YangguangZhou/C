#include <bits/stdc++.h>
#define MAXN 100
using namespace std;

int n;
int ans=0;
string word[MAXN];
string b;
int u[MAXN];

bool check(string s,string m,int k){
    int lens=s.length();
    for(int i=0;i<k;i++){
        if(s[lens-k+i]!=m[i]) return false;
    }
    return true;
}

void add(string &s,string m,int k){
    int lenm=m.length();
    for(int i=k;i<lenm;i++) s+=m[i];
}
void dfs(string now){
    int x=now.length();
    ans=max(ans,x);
    for(int i=1;i<=n;i++){
        if(u[i]>=2) continue;
        int maxk = word[i].length();
        for(int j=1;j<=maxk;j++){
            if(check(now,word[i],j)){
                string temp = now;
                add(temp,word[i],j);
                if (temp==now) continue;
                u[i]++;
                dfs(temp);
                u[i]--;
            }
        }
    }
    
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>word[i];
    cin>>b;
    dfs(b);
    cout<<ans<<endl;
    system("pause");
    return 0;
}
