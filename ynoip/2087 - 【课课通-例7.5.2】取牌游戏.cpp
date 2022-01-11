#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

#define MAXN 1200000
int a[MAXN],b[MAXN];//a:原始牌,b:好牌
int main(){
	int n,k,p,f=0,r,q=0;//q:计数
	cin>>n>>k>>p;
	//生成队列 
	for(int i=1;i<=k;i++)a[i]=i;
	r=k;//队尾
	for(int i=1;i<=k/n;i++){
		for(int j=1;j<=n;j++){
			f++;
			if(j==n)b[++q]=a[f];//取牌
			//切牌 
			for(int t=1;t<=p;t++){
				f++;
				a[++r]=a[f];//将牌移到最后
			}
		}
	} 
	//排序
	sort(b+1,b+1+q);
	for(int i=1;i<=k/n;i++){
		cout<<b[i]<<endl;
	}
	return 0;
}
