#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int a[500005],n=0,ans;//n是车牌号个数,ans是最小差
int main(){
	freopen("a.in","r",stdin);
	freopen("CON","w",stdout);
	string str;//str是车牌号
	while(scanf("%s",str.c_str())!=EOF){//str.c_str()是将string转成C的类型(char)
		//36进制转10进制
		int t=0;
		for(int j=2;j<7;j++){//获取车牌号
			if(str[j]>'9'){
				t=t*36+str[j]-'A'+10;//处理A-Z
			}else{
				t=t*36+str[j]-'0';//处理0-10
			}
		}
		//存入a
		a[n++]=t;
	}
	n--;//循环内多加了一次n
	sort(a,a+n);
	ans=a[1]-a[0];
	//求最小值
	for(int i=2;i<n;i++){
		if(a[i]-a[i-1]<ans){
			ans=a[i]-a[i-1];
		}
	}
	cout<<ans<<endl;
    system("pause");
	fclose(stdin);
	fclose(stdout);
	return 0;
}