#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin>>n;
    for(int i=2;i<=n;i++){
    	if(n%i==0){
    		a=i;
    		b=n/a;
    		break;
		}
	}
	cout<<(a>b?a:b)<<endl;
	system("pause");
    return 0;
}
