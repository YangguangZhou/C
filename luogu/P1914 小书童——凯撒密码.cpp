#include <bits/stdc++.h>
using namespace std;

int n;
string a,b;
int main (){
	cin>>n>>a;
	for(int i=0;i<a.size();i++){
		if(a[i]+n>'z'){
			b+=a[i]+n-'z'+'a'-1;
		}else{
			b+=a[i]+n;
		}
	}
	cout<<b<<endl;
    system("pause");
    return 0;
}
