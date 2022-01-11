#include<cstdio>
#include<iostream>
using namespace std;

#define MAXN 2020
int a[MAXN],b[MAXN];
int main(){
	//freopen("CON","r",stdin);
	//freopen("CON","w",stdout);
	int m,n,k,r1,r2,f1=0,f2=0;
	cin>>m>>n>>k;
	//入队 
	for(int i=1;i<=m;i++)a[i]=i;
	for(int i=1;i<=n;i++)b[i]=i;
	r1=m;
	r2=n;
	for(int i=1;i<=k;i++){
		cout<<a[++f1]<<" "<<b[++f2]<<endl;
		//重新入队到队尾 
		a[++r1]=a[f1];
		b[++r2]=b[f2];
	}
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
