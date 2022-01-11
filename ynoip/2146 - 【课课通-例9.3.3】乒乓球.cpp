#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main(void){
	string com;
	int a[10000]={0},b[10000]={0},k=0;
	int a2[10000]={0},b2[10000]={0},k2=0;
	bool Ed=true;
	while(Ed){
		cin>>com;
		for(int i=0;i<(int)com.size();i++){
			if(com[i]=='E'){
				Ed=false;
				break;
			}
			//小华得分情况
			if(com[i]=='W'){
				a[k]++;//11分制小华每一轮分数
				//11分制小华获胜情况
				if((a[k]==11&&b[k]<=9)||(a[k]>11&&b[k]<=a[k]-2)){
                    k++;
                }
				//21分制小华每一轮分数
				a2[k2]++;
				//21分制小华获胜情况
				if((a2[k2]==21&&b2[k2]<=19)||(a2[k2]>21&&b2[k2]<=a2[k2]-2)){
                    k2++;
                }
			}
			//对手得分情况
			if(com[i]=='L'){
				b[k]++;//11分制小华每一轮分数
				//11分制小华获胜情况
				if((b[k]==11&&a[k]<=9)||(b[k]>11&&a[k]<=b[k]-2)){
                    k++;
                }
				//21分制小华每一轮分数
				b2[k2]++;
				//21分制小华获胜情况
				if((b2[k2]==21&&a2[k2]<=19)||(b2[k2]>21&&a2[k2]<=b2[k2]-2)){
                    k2++;
                }
			}
		}
	}
	for(int i=0;i<=k;i++){
		cout<<a[i]<<":"<<b[i]<<endl;
	}
	cout<<endl;
	for(int i=0;i<=k2;i++){
		cout<<a2[i]<<":"<<b2[i]<<endl;
	}
    system("pause");
	return 0;
}