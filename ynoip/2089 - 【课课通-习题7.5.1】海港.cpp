#include<cstdio>
#include<iostream>
using namespace std;

int n,t[106]={0},m,c,a[106],co,tj=0; 
void newa(){
	for(int i=0;i<105;i++){
		a[i]=0;
	}
}
int main(){
//	for(int i=0;i<105;i++){
//		a[i]=i;
//	}
	newa();
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t[i];
		cin>>m;
		if(t[i]-t[i-1]>86400){
			co=0;
		}
		for(int j=0;j<m;j++){
			cin>>c;
			if(a[c]==0){
				a[c]=1;
				co++;
			}
		}
		cout<<co<<endl;
		newa();
	}
	return 0;
}
