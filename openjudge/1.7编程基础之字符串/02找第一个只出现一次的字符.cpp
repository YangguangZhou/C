#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

char a[100005],t[30]={0};
int main(){
	cin>>a;
	int l=strlen(a);
	for(int i=0;i<l;i++){
		t[a[i]-'a']++;//-'a'是因为a的ASCLL码值是97，要-97才是t的下标 
	}
	for(int i=0;i<l;i++){
		if(t[a[i]-'a']==1){
			cout<<a[i];
			return 0;
		}
	}
	cout<<"no";
	return 0;
}
