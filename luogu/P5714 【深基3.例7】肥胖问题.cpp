#include<bits/stdc++.h>
using namespace std;

int main(){
    double m,h,b;
    cin>>m>>h;
    b=m/pow(h,2);
    if(b<18.5) cout<<"Underweight";
    else if(b>=18.5&&b<24) cout<<"Normal";
    else if(b>=24) cout<<b<<endl<<"Overweight";
    cout<<endl;
    system("pause");
    return 0;
}
