#include<cstdio>
#include<iostream>
using namespace std;

int *n,a[5005],*sj,*so; 
int main(){
	n=new(int);
	sj=new(int);
	so=new(int);
	*sj=*so=0;
	cin>>*n;
	for(int i=0;i<*n;i++){
		cin>>a[i];
		if(a[i]%2!=0){
			*sj+=a[i];
		}else{
			*so+=a[i];
		}
	}
	cout<<*sj<<endl<<*so;
	return 0;
}
