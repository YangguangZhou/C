#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int xy,gl,dj=0;
	scanf("%d%d",&xy,&gl);
	if(xy>=10)
		dj=1;
	if(gl>=20)
		dj=1;
	printf("%d",dj);
	return 0;
}
