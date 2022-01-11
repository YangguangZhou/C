#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
    int ans=1,num=1;
    getline(cin,a);
    getline(cin,b);
    for(int i=0;i<a.size();i++) ans*=(a[i]-64);
    for(int i=0;i<b.size();i++) num*=(b[i]-64);
    if(ans%47==num%47) cout<<"GO"<<endl;
    else cout<<"STAY"<<endl;
    system("pause");
    return 0;
}