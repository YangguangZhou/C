#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

char fp[10],sp[10];
int n,fpl[111],spl[111];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>fp>>sp;
		fpl[i]=strlen(fp);
		spl[i]=strlen(sp);
	}
	for(int i=0;i<n;i++){
		if((fpl[i]==4&&spl[i]==8)||(fpl[i]==8&&spl[i]==5)||(fpl[i]==5&&spl[i]==4)){
			cout<<"Player1"<<endl;//Rock Ê¯Í· 4   Scissors ¼ôµ¶ 8   Paper ²¼ 5 
		}else if((fpl[i]==8&&spl[i]==4)||(fpl[i]==5&&spl[i]==8)||(fpl[i]==4&&spl[i]==5)){
			cout<<"Player2"<<endl;
		}else{
			cout<<"Tie"<<endl;
		}
	}
	return 0;
}
