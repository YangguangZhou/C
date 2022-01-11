#include<bits/stdc++.h>
using namespace std;

string x;
int a[105],t;
int main(){
	cin>>x;
    for(int i=0;x[i]!='\0';i++){
        if(x[i]>='a'&&x[i]<='z'){
            if(x[i+3]>='a'&&x[i+3]<='z'){
                a[x[i]-97]=a[x[i+3]-97];
            }else{
                t=x[i]-97;
            }
        }
        if(x[i]>='0'&&x[i]<='9') a[t]=x[i]-48;
    }
    cout<<a[0]<<" "; 
    cout<<a[1]<<" ";
    cout<<a[2]<<" "<<endl;
    system("pause");
    return 0;
}