//������ 
#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

//���߱Ƚ��ַ����Ƿ�Ϊ�����ַ��� 
bool isPali(string a){
	int n=a.size(); 
	for(int i=0;i<(n+1)/2;i++){
		if(a[i]!=a[n-1-i]){
			return false;
		}
	}
	return true;
} 
int main(){
	string a;
	cin>>a;
	cout<<(isPali(a)?"yes":"no");
	return 0;
}
