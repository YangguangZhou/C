#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j,a=0,b,c;
    cin>>n;
    a=2;
    if(n==0)return 0;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            b=0;
            while(pow(10,b)<=n*(i-1)+j)b++;
            while(b<a){
                cout<<0;
                b++;
            }
            cout<<n*(i-1)+j;
        }
        cout<<endl;
    }
	cout<<endl;
    c=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            b=0;
            while(pow(10,b)<=c)b++;
            if(n-j<i){
                while(b<a){
                    cout<<0;
                    b++;
                }
                cout<<c;
                c++;
            }else{
                b=0;
                while(b<a){
                    cout<<" ";
                    b++;
                }
            }
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}
