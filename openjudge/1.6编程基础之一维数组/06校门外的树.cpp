#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int l,m,x=0;
	cin>>l>>m;
	int a[l],s[m],e[m];
	for(int i=0;i<m;i++){
		cin>>s[i]>>e[i];
	}
	for(int i=0;i<=l;i++){
		a[i]=i;
	}
	for(int i=0;i<m;i++){
		for(int j=s[i];j<=e[i];j++){		
			a[j]=-1;
		}
	}
	for(int i=0;i<=l;i++){
		if(a[i]!=-1){
			x++;
		}	
	}
	
	cout<<x;
	return 0;
}
