#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	bool z=1;
	cin>>a;
	for(int i=a.size()-1;i>=0;i--){
		if((z&&a[i]=='0')||a[i]=='-'){
			
		}else{
			z=0;
			b+=a[i];
		}
	}
	if(a[0]=='-'){
		b='-'+b;;
	}
	cout<<b<<endl;
	system("pause");
	return 0;
}
