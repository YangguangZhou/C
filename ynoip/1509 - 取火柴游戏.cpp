#include<bits/stdc++.h>
using namespace std;

int n,a[500005],aw[32]={0},p[32];
int main(){
    //����������ת������1 2 4 8 16����
    p[0]=1;
    for(int i=1;i<=31;i++){
        p[i]=p[i-1]*2;
    }
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        //ÿ����������ƻ����������㣬���������Զ����Ʒ�ʽ����a[i]
        for(int j=0;j<=31;j++){
            //a[i]�ڵ�ǰ��jλ����������ֵ����aw[j]++
            if((a[i]&p[j])==p[j]){
                aw[j]++;
            }
        }
    }
    //�ҳ�aw[i]�����λΪ������λ��
    int mxq=-1;
    for(int i=31;i>=0;i--){
        if(aw[i]%2==1){
            mxq=i;
            break;
        }
    }
    if(mxq==-1){
        cout<<"lose"<<endl;
        //system("pause");
        return 0;
    }else{
        //�����ÿһ�ѻ�����ȥ�Ƚ�
        for(int i=1;i<=n;i++){
            if((a[i]&p[mxq])==p[mxq]){
                //���������λΪ��������ȡ����ȥ�Ա�
                int f=a[i];
                //�����λ��ʼ��aw�е�����λ���������������
                for(int j=mxq;j>=0;j--){
                    if(aw[j]%2==1){
                        f^=p[j];
                    }
                }
                //��ȥ��������״̬,ʹ֮��Ϊż״̬,�ڶ�������ȥ����
                cout<<a[i]-f<<" "<<i<<endl;
                //�����һ��ȡ�����״̬
                a[i]=f;
                for(int j=1;j<=n;j++){
                    cout<<a[j]<<" ";
                }
                cout<<endl;
                system("pause");
                return 0;
            }
        }
    }
}
