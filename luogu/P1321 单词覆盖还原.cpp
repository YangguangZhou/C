#include<bits/stdc++.h>
using namespace std;

string s;
int b,g;
int main(){
    cin>>s;
    for(int i=0;i<=s.size();i++){
        if(s[i]=='b'||s[i+1]=='o'||s[i+2]=='y') b++;
		if(s[i]=='g'||s[i+1]=='i'||s[i+2]=='r'||s[i+3]=='l') g++;
    }
    cout<<b<<endl<<g<<endl;
    system("pause");
    return 0;
}