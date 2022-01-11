#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

string _trim(string a){
	bool k=false;
	string newStc="";
	for(int i=0;i<a.size();i++){
  		if(a[i]!=' '){
    		if(k){//表示如果k==true 
      			newStc+=' ';//这时结束了一个词，就要加一个空格 
      			k=false;//重置k 
    		}
    		newStc+=a[i];//加入下一个字母 
  		}else{
    		k=true;//如果a[i]是空格，将k设为true，不加空格 
  		}
	}
	return newStc;
}
int main(){
	string s;
	getline(cin,s);
	cout<<_trim(s);
	return 0;
}
