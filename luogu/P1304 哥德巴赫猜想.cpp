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
	int n,x,y;
	cin>>n;
	for(int i=4;i<=n;i+=2){
		x=0,y=0;
		for(int j=2;j<i;j++){
			if(zs(j)&&zs(i-j)){
				x=j,y=i-j;
				break;
			}
		}
		cout<<i<<"="<<x<<"+"<<y<<endl;
	}
	system("pause");
	return 0;
}
