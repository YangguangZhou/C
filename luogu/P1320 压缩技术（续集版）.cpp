#include <bits/stdc++.h> 
using namespace std;

int i,n,num,sum;
char text[40000],str[200];
int main() {
    cin>>str;
    n=strlen(str);
    strcat(text,str);
    for(i=2;i<=n;i++){
        cin>>str;
        strcat(text,str);
    }
    cout<<n<<" ";
    for(i=0,sum=0,num='0';i<=strlen(text);i++)
        if(num==text[i]) sum++;
        else{
            num=text[i];
            cout<<sum<<" ";
            sum=1;
        }
    system("pause");
    return 0;
}
