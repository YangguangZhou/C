#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	double m,walk,bike;
	scanf("%lf",&m);
	walk=m/1.2;
	bike=m/3.0+50;
	if(walk>bike){
		printf("Bike");
	}else if(walk<bike){
		printf("Walk");
	}else{
		printf("All");
	}
	return 0;
}
