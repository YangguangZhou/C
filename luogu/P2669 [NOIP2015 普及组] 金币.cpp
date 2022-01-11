#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,d=1,rd=1,c=0;
	cin>>k;
	for(int i=0;i<k;i++){
		c+=d;
		rd--;
		if(!rd){
			d++;
			rd=d;
		}
	}
	cout<<c;
	system("pause");
	return 0;
}
