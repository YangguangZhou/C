#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,k;
    cin>>n;
    for(k=1;;++k){
    	for(x=100;x>0;--x){
        	if((7*x+21*k)*52==n){
                cout<<x<<endl<<k<<endl;
                system("pause");
                return 0;
            }
		}
	}
}
