#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int a[205],b[205];
bool cmp(int a,int b){
	return a>b;
}
//次方求和
int sum(int n,int k){
	int x=0;
	do{
		x+=pow(n%10,k);
		n/=10;
	}while(n);
	return x;
}
int main(void){
	freopen("a.in","r",stdin);
	//EOF只有在freopen是才能被识别 
	freopen("CON","w",stdout);
	int n,*p,*q,k=2,count=0;
	cin>>n;
	p=a;
	q=b;
	//输入 
	while(scanf("%d",p)!=EOF){//EOF是输入结尾时的标识 
		p++;
		count++;
	}
	//进行n轮计算
	while(k<=n+1){
		//每个数进行次方求和并存入b中
		p=a;
		q=b;
		for(int i=0;i<count;i++){
			*q=sum(*p,k);
			p++;
			q++;
		}
		q=b;
		//判断重复
		for(int i=0;i<count;i++){
			p=a;
			for(int j=0;j<count;j++){
				if(*p==*q)
					*p=0;
				p++;
			}
			q++;
		}
		//从大到小排序
		sort(a,a+count,cmp);
		//剩下数的个数
		p=a;
		for(int i=0;i<count;i++){
			if(*p==0){
				count=i;
				break;
			}
			p++;
		}
		k++;
	}
	//倒序输出
	p=&a[count-1];
	for(int i=count-1;i>=0;i--){
		cout<<*p<<" ";
		p--;
	}
	return 0;
}
