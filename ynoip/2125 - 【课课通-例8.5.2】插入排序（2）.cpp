#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
//尾插法
struct node{
    int num;//数据域
    node *next;//指针域
};

int main(void){
    int n,x;
    node *head,*p,*q,*r;//定义node类型指针
    cin>>n;
    head = new node;//建立链表的头结点
    head->next=NULL;
    cin>>head->num;
    q=head;
    //将头节点和之后所有节点串起来
    for(int i=2;i<=n;i++){
        p=new node;
        p->next=NULL;
        cin>>p->num;
        q->next=p;//q为当前指针的前一个指针
        q=p;
    }
    //获取x这个数，查找插入位置。
    cin>>x;
    p=head;
    while(p!=NULL){
        if(p->num>=x)break;//查找大于或等于x的位置P
        q=p;
        p=p->next;
    }
    r=new node;//申请一个新的地址给r用于存放x的值
    r->num=x;
    r->next=NULL;
    //判断开头，结尾和中间的三种操作方法。
    if(p==head){
        r->next=head;
        head=r;
    }else if(p==NULL){
        q->next=r;
    }else{
        q->next=r;
        r->next=p;
    }
    //从头打印链表
    p=head;
    while(p->next!=NULL){
        cout<<p->num<<" ";
        p=p->next;
    }
    cout<<p->num<<endl;
    system("pause");
    return 0;
}