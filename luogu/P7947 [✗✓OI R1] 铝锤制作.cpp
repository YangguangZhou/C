#include <bits/stdc++.h>
using namespace std;

int n,k;
int zs[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

int main(){
	cin>>n>>k;
	if(k==1&&n!=1) cout<<-1;
	else if(k==n){
		if(k!=4){
			printf("1\n%d\n",k);
		}else{
			printf("2\n2 2\n");
		}
	}else if(n<k){
		cout<<k-n+1<<endl<<n<<" ";
		for(int i=1;i<=k-n;i++){
			cout<<1<<" ";
		}
		cout<<endl;
	}else{
		int m=0,a[105]={0},sum=0;
		for(int i=2;i<=n;i++){
			while(n%i==0){
				a[m++]=i;
				n/=i;
				sum+=i;
				if(sum>k){
					cout<<-1<<endl;
					system("pause");
					return 0;
				} 
			}
		}
		int w=k-sum;
		cout<<w+m<<endl;
		for(int i=1;i<=w;i++)
			printf("1 ");
		for(int i=0;i<m;i++)
			printf("%d ",a[i]);
	}
	system("pause");
	return 0;
}