#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string sentence,word,reword,newStc,temp;
	getline(cin,sentence);
	sentence+=" ";//Ϊ�˷������ͳһ�����ո���� 
	int l=sentence.size();
	cin>>word>>reword;
	for(int i=0;i<l;i++){
		if(sentence[i]!=' '){//string���͵�[]��һ���ַ���Ҫ��'' 
			temp+=sentence[i];
		}else{
			//�жϵ����Ƿ���Ҫ�滻 
			if(temp==word){
				newStc+=reword+" ";
			}else{
				newStc+=temp+" ";
			}
			temp="";//���temp
		}	 
	}
	cout<<newStc.substr(0,newStc.size()-1);//ȥ�ո� 
	return 0;
}
