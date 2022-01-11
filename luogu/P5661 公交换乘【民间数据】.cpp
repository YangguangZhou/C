#include<cstdio>
#include<iostream>
using namespace std;

int n,t,price,timeNum,money=0,coupon[100005][3]={0},x=0,isfree=0;
int main(){
//	freopen("CON","r",stdin);
//	freopen("CON","w",stdout);
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t>>price>>timeNum;
		//更新券库列表 
		for(int j=x;j<i;j++){
			if(timeNum-coupon[j][2]>45){
				x++;
			}else{
				break;
			}
		}
		if(t==0){
			money+=price;//money=money+price;
			coupon[i][0]=1;
			coupon[i][1]=price; 
			coupon[i][2]=timeNum; 
		}else{
			//判断有没有可用优惠券 
			for(int j=x;j<i;j++){
				if(coupon[j][0]==1&&coupon[j][1]>=price){
					coupon[j][0]=0;
					isfree=1;
					break;
				}
			}
			if(!isfree){
				money+=price;
			}
			isfree=0;
		}
	}
	cout<<money;
	
//	fclose(stdin);
//	fclose(stdout);
	return 0;
}
