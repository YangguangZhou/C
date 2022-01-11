#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x,c=0,count[1005]={0};
	bool a[1005]={0};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		a[x]=1;
	}
	for(int i=0;i<1000;i++){
		if(a[i]){
			count[c]=i;
			c++;
		}
	}
	cout<<c<<endl;
	for(int i=0;i<1000;i++){
		if(count[i]){
			cout<<count[i]<<' ';
		}else{
			return 0;
		}
	}
	system("pause");
	return 0;
}
