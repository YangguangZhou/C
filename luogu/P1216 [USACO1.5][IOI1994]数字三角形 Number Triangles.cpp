#include<bits/stdc++.h>
using namespace std;

#define N 1005
#define INF 0x7f

int n,f[N][N];  

int main()  {       
	scanf("%d",&n);  
	for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cin>>f[i][j];
        } 
    } 
	for(int i=n-2;i>=0;i--){  
 		for(int j=0;j<=i;j++){
            f[i][j]+=max(f[i+1][j],f[i+1][j+1]); 
         }
    } 
    cout<<f[0][0]<<endl; 
    return 0;
}