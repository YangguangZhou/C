#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

//���������ϵͼ����Ҫ�и�����1����ţ�2����ϵ��
int a[105][105],q[10010][2];
bool p[105];
int main(void){
	memset(p,true,sizeof(p));
	int i,j,x,y,n,f,r,tmp;
	cin>>n>>x>>y;
	//��ͼ
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}

	//���ö��׶�β
	f=r=1;
	q[f][0]=x;
	q[f][1]=0;
	p[x]=false;

	//��ʼ���ж��еĲ���
	while(f<=r){
		tmp=q[f][0];
		//���ж�tmp�ǲ�����Ҫ�ҵ���
		if(tmp==y){
			cout<<q[f][1]-1<<endl;
			return 0;
		}

		for(i=1;i<=n;i++){
			//����ÿ����tmp��ʶ����
			if(p[i]&&a[i][tmp]){
				r++;
				q[r][0]=i;//���������й�ϵ����Ҫ���
				q[r][1]=q[f][1]+1;//��ǵ�ǰ�Ĺ�ϵ����
				p[i]=false;
			}
		}
		f++;//��ͷ����
	}
	return 0;
}
