#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==1){
        cout<<-1;
    }else{
        for(int i=23;i>=1;i--){
            if(n>=(int)pow(2,i)){
                cout<<(int)pow(2,i)<<" ";
                n-=(int)pow(2,i);
            }
        }
    }
    system("pause");
    return 0;
}