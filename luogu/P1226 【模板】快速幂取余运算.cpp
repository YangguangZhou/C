#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll quickPow(ll a,ll b,ll p){
	ll ans=1;
	while(b){
		if(b%2) ans=(ans*a)%p;
		a=(a*a)%p;
		b>>=1;//b/=2
	}
	return ans;
}

ll a,b,p;

int main(){
	cin>>a>>b>>p;
	if(a==0) cout<<0<<endl;
	else printf("%lld^%lld mod %lld=%lld\n",a,b,p,quickPow(a,b,p));
	system("pause");
    return 0;
}