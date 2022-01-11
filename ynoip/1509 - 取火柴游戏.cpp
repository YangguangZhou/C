#include<bits/stdc++.h>
using namespace std;

int n,a[500005],aw[32]={0},p[32];
int main(){
    //构建二进制转换基数1 2 4 8 16……
    p[0]=1;
    for(int i=1;i<=31;i++){
        p[i]=p[i-1]*2;
    }
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        //每个数与二进制基数进行运算，如果相等则以二进制方式存入a[i]
        for(int j=0;j<=31;j++){
            //a[i]在当前第j位二进制中有值，则aw[j]++
            if((a[i]&p[j])==p[j]){
                aw[j]++;
            }
        }
    }
    //找出aw[i]中最高位为奇数的位数
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
        //否则把每一堆火柴根数去比较
        for(int i=1;i<=n;i++){
            if((a[i]&p[mxq])==p[mxq]){
                //把所有最高位为奇数的数取出来去对比
                int f=a[i];
                //从最高位开始找aw中的奇数位，并进行异或运算
                for(int j=mxq;j>=0;j--){
                    if(aw[j]%2==1){
                        f^=p[j];
                    }
                }
                //减去最大的奇数状态,使之变为偶状态,在二进制中去分析
                cout<<a[i]-f<<" "<<i<<endl;
                //输出第一次取出后的状态
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
