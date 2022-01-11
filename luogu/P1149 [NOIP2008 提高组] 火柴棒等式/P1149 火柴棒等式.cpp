#include<iostream>
#include<cstdio>
using namespace std;

int num[]={6,2,5,5,4,5,6,3,7,6,8};
int getSum(int n){
    int sum=0;
    do{
        sum+=num[n%10];
        n/=10;
    }while(n);
    return sum;
}
int main(void){
	/*freopen("CON","r",stdin);
	freopen("CON","w",stdout);*/
	int n,a,b,c,count=0;
	cin>>n;
    for(int i=0;i<=711;i++){
        for(int j=0;j<=711;j++){
            a=getSum(i);
            b=getSum(j);
            c=getSum(i+j);
            if(n-4-a-b-c==0){
                count++;
            }
        }
    }
    cout<<count<<endl;
	system("pause");
	return 0;
}