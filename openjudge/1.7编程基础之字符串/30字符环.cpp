#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

//���ıȽ�������al
//�������������ַ������ȣ�bl
//ÿһ����Ҫ�Ƚϵ�������bl*2��l�� 
int main(){
	string a,b;
	int al,bl,l,count=0,max=0; 
	cin>>a>>b;
	//�ж������̣��ַ���
	if(a.size()<b.size()){
		swap(a,b);//swap�Ĺ����ǽ��������ַ�����ֵ 
	}
	al=a.size();
	bl=b.size();
	a+=a;
	b+=b;
	l=b.size();//ÿһ�αȽϵĴ���
	for(int i=0;i<al;i++){
		count=0;
		for(int j=0;j<l;j++){
			if(a[i+j]==b[j]){
				count++;
				//�������=bl������ȣ� 
				if(count==bl){
					cout<<bl;
					return 0;
				}
			}else{
				//����max 
				if(max<count){
					max=count;
				}
				count=0;
			}
		}
	}
	cout<<max;
	return 0;
}
