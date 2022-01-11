#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x=0;
    cin>>n;
    if(n%2==0){
    	x++;
	}
	if(n>4&&n<=12){
		x++;
	}
	if(x==2){
		cout<<1<<" ";
	}else{
		cout<<0<<" ";
	}
	if(x>=1){
		cout<<1<<" ";
	}else{
		cout<<0<<" ";
	}
	if(x==1){
		cout<<1<<" ";
	}else{
		cout<<0<<" ";
	}
	if(x==0){
		cout<<1<<" ";
	}else{
		cout<<0<<" ";
	}
	cout<<endl;
    system("pause");
    return 0;
}
