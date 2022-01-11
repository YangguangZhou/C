#include<bits/stdc++.h>
using namespace std;

int n,a[105],b[105];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
    for(int i=1;i<=n;i++){
    	for(int j=i;j>=1;j--){
            if(a[j]<a[i]){
            	b[i]++;
			}
        }
	}
    for(int i=1;i<=n;i++){
    	cout<<b[i]<<" ";
	}
	system("pause");
    return 0;
}
