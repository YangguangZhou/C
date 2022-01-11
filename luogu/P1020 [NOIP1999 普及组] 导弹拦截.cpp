#include<bits/stdc++.h>
using namespace std;

#define N 100005

int a[N],n,f[N],x[N],ans,s;

int main(){
	//while(cin>>a[++n]);
	while(scanf("%d",&a[++n])!=EOF);//EOF=-1,调试时用Ctrl+z终止或使用freeopen
	n--;
	//第一问
	for(int i=1;i<=n;i++){
		f[i]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++){
			if(a[i]<=a[j]) f[i]=max(f[i],f[j]+1);
		}
	}
	for(int i=1;i<=n;i++){
		ans=max(ans,f[i]);
	}
	cout<<ans<<endl;
	//第二问
	for(int i=1;i<=n;i++){
		f[i]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++){
			if(a[i]>a[j]) f[i]=max(f[i],f[j]+1);
		}
	}
	ans=0;
	for(int i=1;i<=n;i++){
		ans=max(ans,f[i]);
	}
	cout<<ans<<endl;
	system("pause");
	return 0;
}