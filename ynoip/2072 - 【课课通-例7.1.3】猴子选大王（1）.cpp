//����һ��ģ�⣩ 
#include<cstdio>
#include<iostream>
using namespace std;
 
int a[1010]={0},n,k,num,i=1,count=0;//n:���Ӹ���,k:����k����̭,num:��ǰ��������,i:ָ��(�±�),count:����
int main(){
	cin>>n>>k;
	num=n;
	while(num>1){
		count++;
		if(count==k){
			a[i]=1;//����k�ĺ��ӳ�Ȧ
			num--;//����ʣ�������
			count=0;//��0��ʼ������
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
