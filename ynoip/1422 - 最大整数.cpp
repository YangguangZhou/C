#include<bits/stdc++.h>
using namespace std;

struct num{
	int a,b;//a存数本身，b存a的最高位与该位取整
}c[21];
//求x^y快速幂次方
int quickPow(int x,int y){
	if(y==0) return 1;
	if(y==1) return x;
	int z=quickPow(x,y/2);
	if(y%2==1) return z*z*x;
	else return z*z;
}
bool cmp(num x,num y){
	return (x.a*y.b+y.a)>(y.a*x.b+x.a);
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>c[i].a;
		c[i].b=0;
		int x=c[i].a;
		while(x){
			x/=10;
			c[i].b++;
		}
		c[i].b=quickPow(10,c[i].b);
	}
	sort(c+1,c+n+1,cmp);
	for(int i=1;i<=n;i++){
		cout<<c[i].a;
	}
	cout<<endl;
	system("pause");
	return 0;
}