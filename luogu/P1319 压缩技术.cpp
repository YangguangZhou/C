#include <bits/stdc++.h> 
using namespace std;

int n,a[205],b[205][205],c,o,i,x,num;
int main() {
    cin>>n;
    while(x!=n*n){
    	cin>>a[i];
    	x+=a[i];
    	i++;
    	num++;
	}
	for(i=0;i<num;i++){
    	for(int j=0;j<a[i];j++){
			c++;
			if(c<n) cout<<o;
			else if(c==n){
				cout<<o<<endl;
				c=0;
			}
		}
		if(!o) o=1;
		else o=0;
	}
    system("pause");
    return 0;
}
