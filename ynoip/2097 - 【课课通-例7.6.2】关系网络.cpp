#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

//数组来存关系图，还要有个队列1、编号，2、关系数
int a[105][105],q[10010][2];
bool p[105];
int main(void){
	memset(p,true,sizeof(p));
	int i,j,x,y,n,f,r,tmp;
	cin>>n>>x>>y;
	//读图
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}

	//设置队首队尾
	f=r=1;
	q[f][0]=x;
	q[f][1]=0;
	p[x]=false;

	//开始进行队列的操作
	while(f<=r){
		tmp=q[f][0];
		//先判断tmp是不是他要找的人
		if(tmp==y){
			cout<<q[f][1]-1<<endl;
			return 0;
		}

		for(i=1;i<=n;i++){
			//遍历每个与tmp认识的人
			if(p[i]&&a[i][tmp]){
				r++;
				q[r][0]=i;//遍历出来有关系的人要入队
				q[r][1]=q[f][1]+1;//标记当前的关系层数
				p[i]=false;
			}
		}
		f++;//队头出队
	}
	return 0;
}
