#include<cstdio>
#include<iostream>
using namespace std;

int rug[10005][4],n,x,y,index=-1; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>rug[i][0]>>rug[i][1]>>rug[i][2]>>rug[i][3];
	}
	cin>>x>>y;
	for(int i=n;i>0;i--){
		if((x>=rug[i][0]&&x<=rug[i][2]+rug[i][0])&&(y>=rug[i][1]&&y<=rug[i][3]+rug[i][1])){
			index=i;
			break;
		}
	}
	cout<<index;
	return 0;
}
