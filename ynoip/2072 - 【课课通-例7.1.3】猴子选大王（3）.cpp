//方法三（链表） 
#include<cstdio>
#include<iostream>
using namespace std;

struct monkey{
	int n;//编号 
	int next;//链接的下一只猴子的编号 
};
monkey a[1010];
int main(){
	int n,k,num,kk,count=0,cur,pre;
	cin>>n>>k;
	//生成猴子的链表
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
