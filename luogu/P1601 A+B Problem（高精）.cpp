#include<bits/stdc++.h>
using namespace std;

char n[305];
int la,lb,a[305]={0},b[305]={0},d[305]={0},t;
int main(){
	scanf("%s",n);
    la=strlen(n);
    while(t<la){
        a[la-t-1]=n[t]-'0';
        t++;
    }
    scanf("%s",n);
    lb=strlen(n);
    t=0;
    while(t<lb){
        b[lb-t-1]=n[t]-'0';
        t++;
    }
    la=la>lb?la:lb;
    for(int i=0;i<la;i++){
        d[i]=a[i]+b[i]+d[i];
        if(d[i]>9){
            d[i+1]=d[i]/10;
            d[i]%=10;
        }
    }
    if(d[la]>0){
        la++;
    }
    for(int i=la-1;i>=0;i--){
        cout<<d[i];
    }
    cout<<endl;
	system("pause");
	return 0;
}
