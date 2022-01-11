#include<bits/stdc++.h>
using namespace std;

int ans;
string a;
int num[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};        //26个字母打表需要按几次 
int main(){
    getline(cin,a);
    for(int i=0;i<a.length();i++){
        if(a[i]>='a'&&a[i]<='z') ans+=num[a[i]-'a'];
        else if(a[i]==' ') ans++;
    }
    cout<<ans<<endl;
	system("pause");
    return 0;
}