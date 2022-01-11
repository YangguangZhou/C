#include<bits/stdc++.h>
using namespace std;

int a;
int type(string s){
    for(int i=0;i<=s.size()-1;i++){
        if(s[i]=='.'){
            a=i;
            return 1;
        }else if(s[i]=='/'){
            a=i;
            return 2;
        }else if(s[i]=='%'){
            a=i;
            return 3;
        }
    }
    return 0;
}
void z(string s){
    for(int i=s.size()-1;i>=1;i--){
        if(s[i]=='0') s=s.erase(i,1); 
        else break;
    }
    for(int i=s.size()-1;i>=0;i--) cout<<s[i];
}
void x(string s){
    string m,n;
    n=s.substr(0,a);
    m=s.substr(a+1,s.size()-(a+1));
    z(n);
    cout<<".";
    int i=0;
    while (m!=""){
        if (m[i]=='0') m=m.erase(0,1);
        else break;
    }
    if(m=="") m="0";
    for(i=m.size()-1;i>=0;i--) cout<<m[i];
}
void f(string s){
    string m,n;
    n=s.substr(0,a);
    m=s.substr(a+1,s.size()-(a+1));
    z(n);
    cout<<"/";
    z(m); 
}
void b(string s){
    s=s.erase(s.size()-1,1);
    z(s);
    cout<<"%";
}
int main(){
    string s;
    int t;
    cin>>s;
    t=type(s);
    if(t==0) z(s);
    else if(t==1) x(s);
    else if(t==2) f(s);
    else if(t==3) b(s);
    cout<<endl;
    system("pause");
    return 0;
}