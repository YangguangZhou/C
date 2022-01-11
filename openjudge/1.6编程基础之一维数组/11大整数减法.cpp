#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

char n[205];//n是数
int la,lb,a[205]={0},b[205]={0},d[205]={0},t;//la,lb是a,b的长度,a,b是被减数和减数的每一位,d是结果的每一位
int main(){
    //获取a,b
	scanf("%s",n);
    la=strlen(n);
    while(t<la){
        a[t]=n[la-t-1]-'0';
        t++;
    }
    scanf("%s",n);
    lb=strlen(n);
    t=0;
    while(t<lb){
        b[t]=n[lb-t-1]-'0';
        t++;
    }
    //获取最长的数
    la=la>lb?la:lb;
    //相减(判断借位的情况)
    for(int i=0;i<la;i++){
        if(a[i]<b[i]){
            a[i+1]-=1;
            d[i]=10+a[i]-b[i];
        }else{
            d[i]=a[i]-b[i];
        }
    }
    //判断借位后高位是否为0
    if(!d[la-1]){
        la-=1;
    }
    //输出
    for(int i=la-1;i>=0;i--){
        cout<<d[i];
    }
    cout<<endl;
	system("pause");
	return 0;
}
