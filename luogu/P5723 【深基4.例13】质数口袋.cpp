#include<bits/stdc++.h>
using namespace std;

int n,x;
long long sum=0;
int pd(int y) {
	for(int i=2; i*i<=y; ++i) {
		if(y%i==0) return 0;
	}
	return 1;
}
int main() {
	cin>>n;
	if(n<2) {
		cout<<0<<endl;
		system("pause");
		return 0;
	} else if(n==2) {
		cout<<2<<endl<<1<<endl;
		system("pause");
		return 0;
	}
	for(int i=2; i<=n; ++i) {
		if(i%2==0&&i!=2) continue;
		if(sum+i>n) {
			cout<<x<<endl;
			system("pause");
			return 0;
		}
		if(pd(i)) {
			cout<<i<<endl;
			sum+=i;
			x++;
		}
	}
}
