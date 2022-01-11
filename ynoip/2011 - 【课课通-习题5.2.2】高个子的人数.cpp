#include<cstdio>
#include<iostream>
using namespace std;

int n,a[10005],sum=0,pj,ans=0;
int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	pj=sum/n;
	for(int i=0;i<n;i++){
		if(a[i]>pj){
			ans++;
		}
	}
	cout<<ans<<endl;
    system("pause");
	return 0;
}