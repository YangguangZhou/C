#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

string _trim(string a){
	bool k=false;
	string newStc="";
	for(int i=0;i<a.size();i++){
  		if(a[i]!=' '){
    		if(k){//��ʾ���k==true 
      			newStc+=' ';//��ʱ������һ���ʣ���Ҫ��һ���ո� 
      			k=false;//����k 
    		}
    		newStc+=a[i];//������һ����ĸ 
  		}else{
    		k=true;//���a[i]�ǿո񣬽�k��Ϊtrue�����ӿո� 
  		}
	}
	return newStc;
}
int main(){
	string s;
	getline(cin,s);
	cout<<_trim(s);
	return 0;
}
