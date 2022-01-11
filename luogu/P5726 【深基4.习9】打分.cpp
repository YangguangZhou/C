#include<bits/stdc++.h>
using namespace std;

int n,a[10001];
double ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=2;i<=n-1;i++) ans+=a[i];
	printf("%.2lf\n",ans/(n-2));
	system("pause");
	return 0;
}
