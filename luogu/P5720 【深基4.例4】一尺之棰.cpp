#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,ans=0;
	cin>>a;
	while(a){
		a/=2;
		ans++;
	}
	cout<<ans<<endl;
    system("pause");
    return 0;
}
