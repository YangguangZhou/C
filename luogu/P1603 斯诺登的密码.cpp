#include<bits/stdc++.h>
using namespace std;

long long c=0,word[6]={0},out=0;
int getst(string s,long long &c){
    if(s=="one"||s=="a"||s=="first"||s=="another") word[c]=1;
    else if(s=="two"||s=="both"||s=="second") word[c]=4;
    else if(s=="three"||s=="third") word[c]=9;
    else if(s=="four") word[c]=16;
    else if(s=="five") word[c]=25;
    else if(s=="six") word[c]=36;
    else if(s=="seven") word[c]=49;
    else if(s=="eight") word[c]=64;
    else if(s=="nine") word[c]=81;
    else if(s=="eleven") word[c]=21;
    else if(s=="twelve") word[c]=44;
    else if(s=="thirteen") word[c]=69;
    else if(s=="fourteen") word[c]=96;
    else if(s=="fifteen") word[c]=25;
    else if(s=="sixteen") word[c]=56;
    else if(s=="seventeen") word[c]=89;
    else if(s=="eightteen") word[c]=24;
    else if(s=="nineteen") word[c]=61;
    c++;
    return 0;
}
int main(){
    string getit[6];
    for(int i=0;i<6;i++){
        cin>>getit[i];
        if(getit[i][getit[i].size()-1]=='.'){
            getit[i].erase(getit[i].size()-1,1);
        }
        getst(getit[i],c);
    }
    sort(word,word+c);
    for(int i=0;i<c;i++){
        out+=word[i];
        out*=100;
    }
    cout<<(out/100)<<endl;
    system("pause");
    return 0;
}