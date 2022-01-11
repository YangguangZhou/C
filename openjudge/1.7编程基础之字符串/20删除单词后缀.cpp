#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string word,a,b;
	int l;
	cin>>word;
	l=word.size();
	if(l<3){
		cout<<word;
		return 0;
	}
	a=word.substr(l-2);//er&ly
	b=word.substr(l-3);//ing
	if(b=="ing"){
		cout<<word.substr(0,l-3);
	}else if(!a.compare("er")||!a.compare("ly")){
		cout<<word.substr(0,l-2);
	}else{
		cout<<word;
	}
	return 0;
}
