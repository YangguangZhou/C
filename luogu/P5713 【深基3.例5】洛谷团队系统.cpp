#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,lo,lu;
    cin>>n;
    lo=5*n;
    lu=3*n+11;
    if(lo>lu){
    	cout<<"Luogu";
	}else{
		cout<<"Local";
	}
	cout<<endl;
    system("pause");
    return 0;
}
