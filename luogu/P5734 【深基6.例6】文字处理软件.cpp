#include<bits/stdc++.h>
using namespace std;

char s[105],in[105];
int opt,n,a,b;
int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		cin>>opt;
		if(opt==1){
			cin>>in;
			strcat(s,in);
			cout<<s<<endl;
		}else if(opt==2){
			cin>>a>>b;
			s[a+b]='\0';
			strcpy(in,&s[a]);
			strcpy(s,in);
			cout<<s<<endl;
		}else if(opt==3){
			cin>>a>>in;
			strcat(in,&s[a]);
			s[a]='\0';
			strcat(s,in);
			cout<<s<<endl;
		}else{
			cin>>in;
			char*ans=strstr(s,in);
			if(ans!=NULL){
				cout<<int(ans-s)<<endl;
			}else{
				cout<<-1<<endl;
			}
		}
	}
	system("pause");
	return 0;
}
