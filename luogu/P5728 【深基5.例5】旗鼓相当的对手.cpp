#include<bits/stdc++.h>
using namespace std;

struct stu{
	int a,b,c,s;
}a[1005];
int main(){
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++){
		cin>>a[i].a>>a[i].b>>a[i].c;
		a[i].s=a[i].a+a[i].b+a[i].c;
	}
	for (int i=1;i<=n;i++)
		for (int j=i+1;j<=n;j++)
			if (abs(a[i].a-a[j].a)<=5&&abs(a[i].b-a[j].b)<=5&&abs(a[i].c-a[j].c)<=5&&abs(a[i].s-a[j].s)<=10){
				x++;
			}
	cout<<x<<endl;
    system("pause");
    return 0;
}
