#include<cstdio>
#include<iostream>
using namespace std;

int n,x,a[10005],b[10005];
int main(){
	cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    for(int i=0;i<n;i++){
        if(x>a[i]&&x<=a[i+1]){
            for(int j=0;j<=i;j++){
                b[j]=a[j];
            }
            b[i+1]=x;
            for(int j=i+2;j<=n;j++){
                b[j]=a[j-1];
            }
        }
    }
    for(int i=0;i<=n;i++){
        cout<<b[i]<<" ";
    }
	system("pause");
	return 0;
}