#include<cstdio>
#include<iostream>
using namespace std;

int n,na,nb,a[101],b[101],aa[101],bb[101],m=0,aw=0,bw=0,ax=0,bx=0;
int main(){
	cin>>n>>na>>nb;
	for(int i=0;i<na;i++){
		cin>>a[i];
	}
	for(int i=0;i<nb;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		if(m>na){
			ax=0;
		}
		if(m>nb){
			bx=0;
		}
		aa[m]=a[ax];
		bb[m]=b[bx];
		m++;
		ax++;
		bx++;
	}
	for(int i=0;i<n;i++){
		if(aa[m]==0&&bb[m]==2){
			aw++;
		}else if(aa[m]==0&&bb[m]==5){
			bw++;
		}else if(aa[m]==2&&bb[m]==0){
			bw++;
		}else if(aa[m]==2&&bb[m]==5){
			aw++;
		}else if(aa[m]==5&&bb[m]==0){
			aw++;
		}else if(aa[m]==5&&bb[m]==2){
			bw++;
		}else{
			aw++;
			bw++;
		}
	}
	if(aw>bw){
		cout<<"A";
	}else if(aw<bw){
		cout<<"B";
	}else{
		cout<<"draw";
	}
	return 0;
}
