#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    double MAX=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        double tmp[10001],sum=0;
        for(int j=1;j<=m;j++){
            cin>>tmp[j];
            sum+=tmp[j];
        }
        sort(tmp+1,tmp+m+1);
        sum=sum-tmp[1]-tmp[m];
        sum/=(m-2);
        if(sum>MAX) MAX=sum;
    }    
    printf("%.2lf\n",MAX);
	system("pause");
    return 0;
}