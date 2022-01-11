#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

#define A 10005
#define B 20010
char n[A];
int la,lb,jw,a[A]={0},b[A]={0},s[B]={0};
int main(void){
  //获取第一个数
  scanf("%s",n);
  la=strlen(n);
  for(int i=0;i<la;i++)
    a[la-i-1]=n[i]-'0';
  //获取第二个数
  scanf("%s",n);
  lb=strlen(n);
  for(int i=0;i<lb;i++)
    b[lb-i-1]=n[i]-'0';
  for(int i=0;i<la;i++){
    jw=0;
    for(int j=0;j<lb;j++){
      s[i+j]=a[i]*b[j]+jw+s[i+j];
      jw=s[i+j]/10;
      s[i+j]%=10;
    }
    //存储进位
    s[i+lb]=jw;
  }
  //判断最高位的非0位
  la=la+lb;
  while(!s[la])la--;
  //判断长度小于0的情况
  if(la<0)
    printf("0\n");
  else{
    for(int i=la;i>=0;i--)
      printf("%d",s[i]);
  }
  return 0;
}
