#include <bits/stdc++.h>
using namespace std;

int t,x,y;

int main(){
	cin>>t;
	while(t--){
		cin>>x>>y;
		if(x==y) cout<<x<<endl;
		else if(x>y) cout<<x+y<<endl;
		else if(x<y){
			int kx,d;
			kx=y/x*x;
			d=kx+(y-kx)/2;
			cout<<d<<endl;
		}
	}
	system("pause");
	return 0;
}