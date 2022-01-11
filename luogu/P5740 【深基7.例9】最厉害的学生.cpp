#include<bits/stdc++.h> 
using namespace std;

#define N 1005

int n,s,MAX=-1,maxi;

struct stu{
	string n;
	int a,b,c;
}a[N];

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].n>>a[i].a>>a[i].b>>a[i].c;
		s=a[i].a+a[i].b+a[i].c;
		if(s>MAX){
			maxi=i;
			MAX=s;
		}
	}
	cout<<a[maxi].n<<" "<<a[maxi].a<<" "<<a[maxi].b<<" "<<a[maxi].c;
} 