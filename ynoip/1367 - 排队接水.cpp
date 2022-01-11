#include<bits/stdc++.h>
using namespace std;

struct t{
	int a,b;
}T[10005];
bool cmp(t a,t b){
	return a.b<b.b;
}
int main() {
	int n,sum=0;
	float ans;
	cin>>n;
	for(int i=1;i<=n;i++){
		T[i].a=i;
		cin>>T[i].b;
	}
	sort(T+1,T+n+1,cmp);
	for(int i=1;i<n;i++){
		cout<<T[i].a<<" ";
		sum+=T[i].b*(n-i);
	}
	cout<<T[n].a<<endl;
	ans=(sum*1.0)/n;
	printf("%.2f\n",ans);
	system("pause");
	return 0;
}
