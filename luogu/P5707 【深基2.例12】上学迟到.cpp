#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,v,h,m,t=3350,w;
    cin>>s>>v;
    w=s/v;
    if(s%v!=0){
    	w++;
	}
	t-=w;
	t%=1440;
	h=t/60;
	m=t%60;
    if(h<10){
    	cout<<"0";
	}
	cout<<h<<":";
	if(m<10){
    	cout<<"0";
	}
	cout<<m<<endl;
    system("pause");
    return 0;
}
