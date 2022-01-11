#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	double a,p=0,y;
	string x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		p+=a;
	}
	cin>>x;
	if(x.size()==3){
		y=1-((x[0]-'0')*10+(x[1]-'0'))/100.0;
	}else{
		y=1-(x[0]-'0')/100.0;
	}
	p*=y;
	p+=0.005;
	printf("%.2lf\n",p);
	system("pause");
	return 0;
}
