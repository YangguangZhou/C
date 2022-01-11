#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char a[120],b[120];
	int ans,alen,blen;
	cin>>a>>b;
	alen=strlen(a);
	blen=strlen(b);
	for(int i=0;i<alen;i++){
		for(int j=0;j<blen;j++){
			ans+=(a[i]-'0')*(b[j]-'0');
		}
	}
	cout<<ans;
	return 0;
}
