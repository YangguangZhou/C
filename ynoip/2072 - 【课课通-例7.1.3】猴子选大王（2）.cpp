//���������Ż��� 
#include<cstdio>
#include<iostream>
using namespace std;
 
int a[1010]={0},n,k,num,i=1,count=0,kk;//n:���Ӹ���,k:����k����̭,num:��ǰ��������,i:ָ��(�±�),count:����
int main(){
	cin>>n>>k;
	num=n;
	kk=k%num;
	if(kk==0)
		kk=num;
	while(num>1){
		count++;
		if(count==kk){
			a[i]=1;//����k�ĺ��ӳ�Ȧ
			num--;//����ʣ�������
			count=0;//��0��ʼ������
			kk=k%num;
			if(kk==0)
				kk=num;
		}else{
			if(i==n){
				i=1;//i�����һ������ʱ��ͷ��ʼ��
			}else{
				i++;//������һ������
			}
		}
		while(a[i]==1){
			//�ж���һ�������Ƿ��Ѿ���Ȧ
			if(i==n){
				i=1;
			}else{
				i++;
			}
		}//ֻʣ���һֻ����ʱ,i����ʣ�µ���ֻ���ӵ��±�
	}
	cout<<i;
	return 0;
}
