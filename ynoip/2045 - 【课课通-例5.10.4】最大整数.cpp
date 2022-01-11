#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int n;
	char a[25][30],temp1[60],temp2[60];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<=n;i++){
		for(int j=i+1;j<n;j++){
			strcpy(temp1,a[i]);
			strcpy(temp2,a[i+1]);
			strcat(temp1,temp2);
			strcat(temp2,temp1);
			if(strcmp(temp1,temp2)>0){
				strcat(a[n],a[i]);
			}else{
				strcat(a[n],a[i+1]);
			}
			cout<<a[n]<<endl;
		}
	}
	cout<<a[n];
	return 0;
}
