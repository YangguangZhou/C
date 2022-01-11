#include<bits/stdc++.h>
using namespace std;
#define N 1000005

int T,n,m,k,a[N];
bool u[N]={0};

int main(){
	cin>>T;
	while(T--){
		cin>>n>>m>>k;
		if(n*m<k||n*m%k!=0) cout<<"NO"<<endl;
		else if(n*m==k){
			cout<<"YES"<<endl;
			for(int i=1;i<=m;i++){
				for(int j=1;j<=n;j++) cout<<1<<" ";
				cout<<endl;
			}
		}else if(k==1){
			cout<<"YES"<<endl;
			int cnt=1;
			for(int i=1;i<=m;i++){
				for(int j=1;j<=n;j++){
					cout<<cnt<<" ";
					cnt++;
				}
				cout<<endl;
			}
		}else if(n==1){
			cout<<"YES"<<endl;
			for(int i=1;i<=m/k;i++){
				for(int j=1;j<=k;j++){
					cout<<i<<" ";
				}
			}
			cout<<endl;
		}else{
			cout<<"YES"<<endl;
			for(int i=1;i<=n*m;i++) a[i]=(i-1)/k+1;
            for(int i=1;i<=n;i++){
                if(i%2==1)
                    for(int j=1;j<=m;j++) cout<<a[(i-1)*m+j]<<' ';
                else for(int j=m;j;j--) cout<<a[(i-1)*m+j]<<' ';
                cout<<endl;
            }
		}
	}
	system("pause");
    return 0;
}