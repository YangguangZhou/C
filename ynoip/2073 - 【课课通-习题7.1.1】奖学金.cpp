#include<cstdio>
#include<iostream>
using namespace std;

struct student{
    int c; //���� 
    int m; //��ѧ
    int e; //Ӣ�� 
    int all; //�ܷ� 
    int num; //ѧ�� 
}; 
int main(){
    int n,max=1,j=0; //j���������ѧ���ĸ��� 
    student a[301];
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i].c>>a[i].m>>a[i].e;
        a[i].all=a[i].c+a[i].m+a[i].e;
        a[i].num=i; //ѧ�� 
    }
    while(j!=5){
        for(int i=2;i<=n;++i){
            if(a[i].all>a[max].all || (a[i].all==a[max].all && a[i].c>a[max].c) || (a[i].all==a[max].all && a[i].c==a[max].c && a[i].num<a[max].num)){
                max=i;
            }
        }
        cout<<a[max].num<<" "<<a[max].all<<endl;
        a[max].all=-1;
        max=1;
        ++j;
    }
    return 0;
}
