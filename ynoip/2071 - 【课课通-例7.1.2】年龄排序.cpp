#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
//�ṹ��Ķ���
struct student{
	string name,gender;
	int year,month;
};

student s[110];
int main(void){	
	int n;
	cin>>n;
	//����
	for(int i=1;i<=n;i++)
		cin>>s[i].name>>s[i].gender>>s[i].year>>s[i].month;
	//����
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(s[i].year<s[j].year||(s[i].year==s[j].year&&s[i].month<s[j].month)){
				swap(s[i],s[j]);
			}
		}
	}
	//���
	for(int i=1;i<=n;i++){
		cout<<s[i].name<<" "<<s[i].gender<<" ";
		cout<<s[i].year<<" "<<s[i].month<<endl;
	}
	return 0;
}
