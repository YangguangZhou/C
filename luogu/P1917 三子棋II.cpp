#include<bits/stdc++.h>
using namespace std;

int main(){
	int ans=0;
	char x;
	bool pd=0;
	for(int i=1;i<=9;i ++){
		cin>>x;
		if(x=='X'&&!(i%2)){
			pd=1;
		}
		if(x=='-'){
			ans ++;
		}
	}	
	if(pd){
		cout<<"xiaoa will win."<<endl<<9-ans<<endl;
	}else{
		cout<<"Dont know."<<endl<<9-ans<<endl;
	}
	system("pause");
    return 0;
}
