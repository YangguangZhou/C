#include<cstdio>
#include<iostream>
using namespace std;

int q[1000005];
int main(){
	int a,n,two,three,rear;
	cin>>a>>n;
	two=three=rear=1;
	q[rear]=a;
	while(rear<n){
		rear++;
		if(2*q[three]+1>3*q[two]+1){
			q[rear]=3*q[two]+1;
			two++;
		}else if(2*q[three]+1<3*q[two]+1){
			q[rear]=2*q[three]+1;
			three++;
		}else{
			q[rear]=2*q[three]+1;
			two++;
			three++;
		}
	}
	cout<<q[n]<<endl;
	return 0;
}
