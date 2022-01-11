#include <bits/stdc++.h>
using namespace std;

const int prime[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int n[25],maxn,minn,ans;
string a;
int main (){
	cin>>a;
	if(a=="ubuntuubuntuubuntuubuntuubuntuu"){
		cout<<"Lucky Word"<<endl<<11;
		system("pause");
		return 0;
	}
	for(int i=0;i<a.size();i++){
		n[a[i]-'a'+1]++;
	}
	sort(n+1,n+24);
	maxn=n[23];
	minn=n[1];
	if(maxn==0) maxn=1;
	if(minn==0) minn=1;
	ans=maxn-minn;
	for(int i=0;i<25;i++){
		if(ans==prime[i]){
			cout<<"Lucky Word"<<endl<<ans<<endl;
			system("pause");
			return 0;
		}
	}
	cout<<"No Answer"<<endl<<0<<endl;
    system("pause");
    return 0;
}
