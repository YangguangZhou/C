#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a=1,b=1,c=0;
	int n,i;
	cin>>n;
    for (i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c<<".00"<<endl;
	system("pause");
	return 0;
}
