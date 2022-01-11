#include<bits/stdc++.h>
using namespace std;

int n,m,a[10005],s[10005];
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<=n-m;i++){
		for(int j=0;j<m;j++){
			s[i]+=a[i+j];
		}
	}
	sort(s,s+n-m);
	cout<<s[0]<<endl;
	system("pause");
    return 0;
}
