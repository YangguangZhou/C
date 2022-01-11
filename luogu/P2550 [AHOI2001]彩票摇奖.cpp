#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,h[1005][8],z[8],c[1005]={0},j[8]={0};
	cin>>n;
	for(int i=0;i<7;i++){
		cin>>z[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<7;j++){
			cin>>h[i][j];
			for(int k=0;k<7;k++){
				if(h[i][j]==z[k]){
					c[i]++;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		j[c[i]]++;
	}
	for(int i=7;i>=1;i--){
		cout<<j[i]<<" ";
	}
	cout<<endl;
	system("pause");
    return 0;
}
