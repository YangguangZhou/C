#include<bits/stdc++.h>
using namespace std;

string n;
int s,len,k;
int main(){
	cin>>n>>s;
	len=n.size();
	while(s>0){
		s--;
		k=len-1;
		for(int i=0;i<k;i++){
			if(n[i]>n[i+1]){
				k=i;
				break;
			}
		}
		n.erase(k,1);
		len--;
	}
	while(n[0]=='0'){
		n.erase(0,1);
	}
	if(n!=""){
		cout<<n<<endl;
	}else{
		cout<<'0'<<endl;
	}
	system("pause");
	return 0;
}