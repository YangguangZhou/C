#include<bits/stdc++.h>
using namespace std;

int n,sum=1;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		sum*=i;
	}
	cout<<sum<<endl;
	system("pause");
	return 0;
}