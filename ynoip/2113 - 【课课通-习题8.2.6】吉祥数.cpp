#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int a[205],b[205];
bool cmp(int a,int b){
	return a>b;
}
//�η����
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
	//EOFֻ����freopen�ǲ��ܱ�ʶ�� 
	freopen("CON","w",stdout);
	int n,*p,*q,k=2,count=0;
	cin>>n;
	p=a;
	q=b;
	//���� 
	while(scanf("%d",p)!=EOF){//EOF�������βʱ�ı�ʶ 
		p++;
		count++;
	}
	//����n�ּ���
	while(k<=n+1){
		//ÿ�������дη���Ͳ�����b��
		p=a;
		q=b;
		for(int i=0;i<count;i++){
			*q=sum(*p,k);
			p++;
			q++;
		}
		q=b;
		//�ж��ظ�
		for(int i=0;i<count;i++){
			p=a;
			for(int j=0;j<count;j++){
				if(*p==*q)
					*p=0;
				p++;
			}
			q++;
		}
		//�Ӵ�С����
		sort(a,a+count,cmp);
		//ʣ�����ĸ���
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
	//�������
	p=&a[count-1];
	for(int i=count-1;i>=0;i--){
		cout<<*p<<" ";
		p--;
	}
	return 0;
}
