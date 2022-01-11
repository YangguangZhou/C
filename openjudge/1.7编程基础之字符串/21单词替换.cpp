#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string sentence,word,reword,newStc,temp;
	getline(cin,sentence);
	sentence+=" ";//为了方便后面统一遇到空格结束 
	int l=sentence.size();
	cin>>word>>reword;
	for(int i=0;i<l;i++){
		if(sentence[i]!=' '){//string类型的[]是一个字符，要用'' 
			temp+=sentence[i];
		}else{
			//判断单词是否需要替换 
			if(temp==word){
				newStc+=reword+" ";
			}else{
				newStc+=temp+" ";
			}
			temp="";//清空temp
		}	 
	}
	cout<<newStc.substr(0,newStc.size()-1);//去空格 
	return 0;
}
