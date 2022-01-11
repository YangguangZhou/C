#include<bits/stdc++.h>
using namespace std;

bool zs(int a){
	for(int i=2;i*i<=a;i++){
		if(a%i==0){
			return false;
		}	
	}
	return true;
}
int main() {
	int n,x,y,z;
	bool b=0;
	cin>>n;
	for(int i=2;i<n;i++){
		if(zs(i)){
			for(int j=2;j<n-i;j++){
				if(zs(j)&&zs(n-i-j)){
					x=i,y=j,z=n-i-j;
					b=1;
					break;
				}
			}
		}
		if(b){
			break;
		}
	}
	cout<<x<<" "<<y<<" "<<z<<endl;
	system("pause");
	return 0;
}
