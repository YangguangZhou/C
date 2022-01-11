#include<bits/stdc++.h>
using namespace std;

int n,a[10005]={0},s=0;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        a[i+1]+=a[i];
        s+=a[i+1];
        int j=i+2,temp=a[i+1];
        while(j<n){
            if(a[j]>=a[i+1]){
                break;
            }else{
                j++;
            }
        }
        for(int k=i+1;k<j-1;k++){
            a[k]=a[k+1];
        }
        a[j-1]=temp;
    }
    cout<<s<<endl;
    system("pause");
    return 0;
}