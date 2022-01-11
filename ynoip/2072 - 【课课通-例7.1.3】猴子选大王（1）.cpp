//方法一（模拟） 
#include<cstdio>
#include<iostream>
using namespace std;
 
int a[1010]={0},n,k,num,i=1,count=0;//n:猴子个数,k:报到k的淘汰,num:当前猴子总数,i:指针(下标),count:计数
int main(){
	cin>>n>>k;
	num=n;
	while(num>1){
		count++;
		if(count==k){
			a[i]=1;//报到k的猴子出圈
			num--;//减少剩余猴子数
			count=0;//从0开始重新数
		}else{
			if(i==n){
				i=1;//i到最后一个猴子时从头开始数
			}else{
				i++;//否则到下一个猴子
			}
		}
		while(a[i]==1){
			//判断下一个猴子是否已经出圈
			if(i==n){
				i=1;
			}else{
				i++;
			}
		}//只剩最后一只猴子时,i就是剩下的那只猴子的下标
	}
	cout<<i;
	return 0;
}
