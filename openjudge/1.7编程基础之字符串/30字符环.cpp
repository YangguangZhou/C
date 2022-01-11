#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

//最多的比较轮数：al
//最大的连续公共字符串长度：bl
//每一次需要比较的轮数：bl*2（l） 
int main(){
	string a,b;
	int al,bl,l,count=0,max=0; 
	cin>>a>>b;
	//判断最长（最短）字符串
	if(a.size()<b.size()){
		swap(a,b);//swap的功能是交换两个字符串的值 
	}
	al=a.size();
	bl=b.size();
	a+=a;
	b+=b;
	l=b.size();//每一次比较的次数
	for(int i=0;i<al;i++){
		count=0;
		for(int j=0;j<l;j++){
			if(a[i+j]==b[j]){
				count++;
				//如果长度=bl（最长长度） 
				if(count==bl){
					cout<<bl;
					return 0;
				}
			}else{
				//更新max 
				if(max<count){
					max=count;
				}
				count=0;
			}
		}
	}
	cout<<max;
	return 0;
}
