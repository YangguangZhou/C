#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string a;
	cin>>a;
	cout<<a.size();
	while(cin>>a){
		cout<<','<<a.size(); 
	}
	return 0;
}
