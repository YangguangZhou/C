#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c,ans,p;
    cin>>a>>b>>c;
    p=(a+b+c)/2.0;
    ans=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1lf\n",ans);
    system("pause");
    return 0;
}