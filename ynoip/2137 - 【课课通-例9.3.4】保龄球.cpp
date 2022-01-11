#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

string com[13];
int t,score=0;
//字符转数字
int f(char c){
	if(c=='/'){
		return 10;
	}else{
		return (int)c-(int)'0';
	}
}
//计算每一轮的分数
int fs(int i){
	//看i+1或i+2是不是超出最大值t
	string st=com[i],st2=com[min(i+1,t)],st3=com[min(i+2,t)];
	int ans;
	//前两项没有全中的情况则直接转换为数字相加
	if(st[0]!='/'&&st[1]!='/'){
		ans=f(st[0])+f(st[1]);
	}else{
		if(st[0]=='/'){
			//如果当前项为全中的情况
			if(st2[0]=='/'&&st2.size()==1){
				ans=20+f(st3[0]);
			}else{
				ans=10+min(10,f(st2[0])+f(st2[1]));
			}
		}else{
			//第一项没有全中的情况
			ans=10+f(st2[0]);
		}
	}
	return ans;
}
int main(void){
	for(t=1;t<=10;t++){
		cin>>com[t];
	}
	//判断第十轮是否全部击倒
	//[10][0]是第十轮的第一个字符
	if(com[10][0]=='/'){
		cin>>com[11];
		t++;
		//如果第十一轮也全部击倒则输入第十二轮
		if(com[11].size()==1){
			cin>>com[12];
			t++;
		}
	}else if(com[10].size()>1){
		//第十次的第二轮全部击中
		if(com[10][1]=='/'){
			cin>>com[11];
		}
	}
	//存完数值后计算总分
	for(int i=1;i<=10;i++){
		score+=fs(i);
	}
	cout<<score<<endl;
    system("pause");
	return 0;
}