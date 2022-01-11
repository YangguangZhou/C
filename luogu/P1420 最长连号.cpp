#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s[1001],ans=0,max=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    for(int i=1;i<=n;i++){
        if(s[i+1]-s[i]==1){
        	ans++;
		}else{
			ans=0;
		}
        if(ans>max){
        	max=ans;
		}
    }
    max++;
    cout<<max<<endl;
    system("pause");
}
