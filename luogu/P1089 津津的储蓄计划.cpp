#include<cstdio>
#include<iostream>
using namespace std;

int main(){
        int month,nm=0,mom=0;
        for(int i=1;i<=12;i++){
                scanf("%d",&month);
                nm=nm+300-month;
                if(nm<0){
                        printf("-%d",i);
                        return 0; 
                }else{
			mom+=nm/100,nm%=100;
		}
        }
        cout<<120*mom+nm;
        return 0;
}
