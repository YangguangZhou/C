#include<cstdio>
#include<iostream>
using namespace std;

int n,a[101];
int k=0,y=0,m=0,o=0;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<=18){
			k++;
		}else if(a[i]<=35){
			y++;
		}else if(a[i]<=60){
			m++;
		}else{
			o++;
		}
		
	}
	printf("%.2f%%\n%.2f%%\n%.2f%%\n%.2f%%",(float)k/n*100,(float)y/n*100,(float)m/n*100,(float)o/n*100);

	return 0;
}
