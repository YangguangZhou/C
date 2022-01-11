#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

string changeName(string a){
	for(int i=0;i<a.size();i++){
		if(a[i]>='A'&&a[i]<='Z'){
			a[i]+=32;
		}
	}
	if(a[0]>='a'&&a[0]<='z'){
		a[0]-=32;
	}
	return a;
} 
int main(){
	int n;
	string word;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>word;
		cout<<changeName(word)<<endl;
	}
	return 0;
}
