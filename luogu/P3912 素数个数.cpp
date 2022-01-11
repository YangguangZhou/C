#include<bits/stdc++.h>
using namespace std;

bool a[100000000];
int main(){
    int n,i,j,s=0;
    scanf("%d",&n);
    s=n-1;
    for(i=2;i*i<=n;i++){
		if(a[i]==0)
    	for(j=i*2;j<=n;j+=i){
    		if(a[j]==0){
				a[j]=1;
    			s--;
			}
		}
	}
    cout<<s<<endl;
    system("pause");
    return 0;
}
