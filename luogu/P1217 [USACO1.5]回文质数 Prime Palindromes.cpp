#include<bits/stdc++.h>
using namespace std;
int a,b,s[10];
bool zs(int x){
	int i;
	for(i=3;i<=sqrt(x);i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
bool hw(int x){
	int k,len=0,j;
	while(x!=0){
		len++;
		s[len]=x%10;
		x/=10;
	}
	if(len==1){
		s[len]=0;
		return 1;
	}
	for(k=1;k<=len/2;k++){
		if(s[k]!=s[len-k+1]){
			return 0;
		}
	}	
	for(k=1;k<=len;k++){
		s[k]=0;
	}
	return 1;
}
int main(){
	int i;
	cin>>a>>b;
	if(b>=9999999){
		b=9999999;
	}
	if(a%2==0){
		a++;
	}
	for(i=a;i<=b;i+=2){
		if(hw(i)==0){
			continue;
		}else if(zs(i)){
			printf("%d\n",i);
		}
	}
	system("pause");
	return 0;
}
