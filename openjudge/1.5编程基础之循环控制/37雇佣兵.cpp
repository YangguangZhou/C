#include<cstdio>
#include<iostream>
using namespace std;

int m,n,x,count=0;
int main(){
	cin>>m>>n>>x;
	while(x>0&&n<=m){
		x-=((m%n==0)?m/n:m/n+1);//ʹ������Ԫ�� 
		//�ж�����Ԫ���Ƿ����� 
		if(x<0){
			break;
		}
		n+=m/n;//����ս���� 
	}
	cout<<n;
	return 0;
}
