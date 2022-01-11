#include<cstdio>
#include<iostream>
using namespace std;

int cal1(int a,int b){
    return a+b;
}
int cal2(int a,int b){
    return a-b;
}
int cal3(int a,int b){
    return a*b;
}
int cal4(int a,int b){
    return a/b;
}
typedef int (*calp)(int,int);
int main(){
	int m,n,k;
    cin>>m>>n>>k;
    calp a[4]={cal1,cal2,cal3,cal4};
    cout<<a[k-1](m,n)<<endl;
	system("pause");
	return 0;
}