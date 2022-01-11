#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,n,e,f;
	cin>>a>>b>>c>>d;
	n=(c*60+d)-(a*60+b);
	e=n/60;
	f=n%60;
	cout<<e<<" "<<f<<endl;
    system("pause");
    return 0;
}
