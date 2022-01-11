#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

string toChange(string a){//¥Û–°–¥ª•ªª 
	for(int i=0;i<a.size();i++){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]-=32;
		}else if(a[i]>='A'&&a[i]<='Z'){
			a[i]+=32;
		}
	}
	return a;
} 

int main(){
	string wem,na,pw,em;
	int n,c=0;
	cin>>wem>>n;
	for(int i=0;i<n;i++){
		cin>>na>>pw>>em;
		if(wem.compare(em)==0){
			pw=toChange(pw);
			c=1;
			cout<<na<<" "<<pw<<endl;
		}
	}
	if(c==0)
		cout<<"empty";
	return 0;
}
