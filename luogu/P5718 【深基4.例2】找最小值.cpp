#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[105]={0};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<a[0]<<endl;
	system("pause");
	return 0;
}
