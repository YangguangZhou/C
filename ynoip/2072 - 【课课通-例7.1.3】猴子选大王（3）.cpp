//������������ 
#include<cstdio>
#include<iostream>
using namespace std;

struct monkey{
	int n;//��� 
	int next;//���ӵ���һֻ���ӵı�� 
};
monkey a[1010];
int main(){
	int n,k,num,kk,count=0,cur,pre;
	cin>>n>>k;
	//���ɺ��ӵ�����
	for(int i=1;i<n;i++){
		a[i].n=i;
		a[i].next=i+1;
	}
	a[n].n=n;
	a[n].next=1;
	num=n;
	kk=k%num;
	if(kk==0)
		kk=num;
	cur=1;
	pre=n;
	while(num>1){
		count++;
		if(count==kk){
			a[pre].next=a[cur].next;
			count=0;
			num--;
			kk=k%num;
			if(kk==0)
				kk=num;
		}else{
			pre=cur; 
		}
		cur=a[cur].next;
	}
	cout<<a[cur].n;
	return 0;
}
