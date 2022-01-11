#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

char n[305];//n是数
int la,lb,a[305]={0},b[305]={0},d[305]={0},t;//la,lb是a,b的长度,a,b是两个加数的每一位,d是结果的每一位
int main(){
    //获取a,b
	scanf("%s",n);
    la=strlen(n);
    while(t<la){
        a[la-t-1]=n[t]-'0';
        t++;
    }
    scanf("%s",n);
    lb=strlen(n);
    t=0;
    while(t<lb){
        b[lb-t-1]=n[t]-'0';
        t++;
    }
    //获取最长的数
    la=la>lb?la:lb;
    //相加(判断进位的情况)
    for(int i=0;i<la;i++){
        d[i]=a[i]+b[i]+d[i];
        if(d[i]>9){
            d[i+1]=d[i]/10;
            d[i]%=10;
        }
    }
    //如果最高位相加进位了，则长度增加
    if(d[la]>0){
        la++;
    }
    //输出
    for(int i=la-1;i>=0;i--){
        cout<<d[i];
    }
    cout<<endl;
	system("pause");
	return 0;
}
