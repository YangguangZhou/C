#include<bits/stdc++.h>
using namespace std;

int main(){
	long a,b,c,aa,ba;
	cin>>a>>b>>c;
	aa=a*a;
	ba=b*c;
	if(aa>ba){
		cout<<"Alice";
	}else{
		cout<<"Bob";
	}
	system("pause");
	return 0;
}
