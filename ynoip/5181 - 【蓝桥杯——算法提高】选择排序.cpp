#include<cstdio>
#include<iostream>
using namespace std;

int a[101],n,num,t;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		num=i+1;
		for(int j=num;j<n-1;j++){
			if(a[num]>a[j+1]){
				num=j+1;
			}
		}
		if(a[num]<a[i]){
			t=a[num];
			a[num]=a[i];
			a[i]=t;
		}
		cout<<"swap(a["<<i<<"], a["<<num<<"]):";
		for(int i=0;i<n-1;i++)
			cout<<a[i]<<" ";
		cout<<a[n-1]<<endl;
	}
	cout<<"swap(a["<<n-1<<"], a["<<n-1<<"]):";
	for(int i=0;i<n-1;i++)
		cout<<a[i]<<" ";
	cout<<a[n-1]<<endl;
	return 0;
}
