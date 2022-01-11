#include<bits/stdc++.h>
using namespace std;

#define N 30005

int num[N];
int x,y,n,T,ans;
char z;

struct spaceship{
	int fa,tofro=0;
}a[N];

int find(int n){
	if(a[n].fa==n) return a[n].fa;
	int t=a[n].fa;
    a[n].fa=find(a[n].fa);
    a[n].tofro+=a[t].tofro;
    num[n]=num[a[n].fa];
    return a[n].fa;
}

int main(){
    cin>>T;
    for(int i=1;i<=N;++i){
		a[i].fa=i;
		num[i]=1;
	}
    for(int i=1;i<=T;i++){
        cin>>z>>x>>y;
		int fx=find(x),fy=find(y);
        if(z=='M'){
			a[fx].fa=fy;
            a[fx].tofro+=num[fy];
            num[fx]+=num[fy];
            num[fy]=num[fx];
        }else if(z=='C'){
            if(fx!=fy) cout<<"-1"<<endl;
			else cout<<abs(a[x].tofro-a[y].tofro)-1<<endl;
        }
    }
	system("pause");
    return 0;
}