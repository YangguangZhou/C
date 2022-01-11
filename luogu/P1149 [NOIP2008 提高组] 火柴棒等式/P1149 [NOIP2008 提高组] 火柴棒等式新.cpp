#include<bits/stdc++.h>
using namespace std;

int a[]={6,2,5,5,4,5,6,3,7,6},num[25],n;
int getX(int n){
    int ans=0;
    do{
        ans+=a[n%10];
        n/=10;
    }while(n);
    return ans;
}
int main(){
	cin>>n;
    for(int a=0;a<=711;a++){
        for(int b=0;b<=711;b++){
            int c=getX(a)+getX(b)+getX(a+b)+4;
            if(c<=24){
                num[c]++;
            }
        }
    }
    cout<<num[n]<<endl;
	system("pause");
	return 0;
}
/*打表(过程)：
#include<bits/stdc++.h>
using namespace std;

int a[]={6,2,5,5,4,5,6,3,7,6},num[25];
int getX(int n){
    int ans=0;
    do{
        ans+=a[n%10];
        n/=10;
    }while(n);
    return ans;
}
int main(){
    for(int a=0;a<=711;a++){
        for(int b=0;b<=711;b++){
            int c=getX(a)+getX(b)+getX(a+b)+4;
            if(c<=24){
                num[c]++;
            }
        }
    }
	for(int i=0;i<=24;i++){
		cout<<num[i]<<",";
	}
	system("pause");
	return 0;
}
*/
/*打表(结果)：
#include<bits/stdc++.h>
using namespace std;

int num[]={0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,8,9,6,9,29,39,38,65,88,128},n;
int main(){
    cin>>n;
	cout<<num[n]<<endl;
	system("pause");
	return 0;
}
*/