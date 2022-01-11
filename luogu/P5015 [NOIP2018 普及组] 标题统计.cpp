#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int num=0;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]!='/n'&&s[i]!=' '){
			num++;
		}
	}
	cout<<num;
	system("pause");
	return 0;
}
