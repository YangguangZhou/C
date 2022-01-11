#include <bits/stdc++.h>
using namespace std;
#define N 100005
typedef long long ll;

int T,n,q,a[N],ans[N];
ll pre[N];//0<=a[i],q[i]<=10^9,后缀和要开long long

//因k要排序，所以要记录下k原来的序号
struct node{
	int v,id;
	//重载小于号（与下面的cmp作用相同）
	bool operator<(const node &rhs)const{
		return rhs.v<v;//数组从大到小排序（rhs代表数组末尾）
	}
}k[N];

// bool cmp(node xx,node yy){
// 	return xx.v>yy.v;
// }

int main(){
	cin>>T;
	while(T--){
		//初始化pre
		memset(pre,0,sizeof(pre));
		scanf("%d%d",&n,&q);
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		for(int i=1;i<=q;i++){
			scanf("%d",&k[i].v);
			k[i].id=i;
		}
		//先排序，再求前缀和
		sort(a+1,a+n+1);
		sort(k+1,k+q+1);
		for(int i=n;i>=1;i--) pre[i]=pre[i+1]+a[i];
		//双指针
		for(int i=1,j=1;i<=n&&j<=q;j++){//j移动速度更慢，故使用j++
			while(i<=n&&a[i]<((double)pre[i]/(n-i+1)-k[j].v)){//此处不能向下取整，故要转化成double
				i++;//在内部进行i++
			}
			//按映射记录答案
			ans[k[j].id]=n-i+1;
		}
		for(int i=1;i<=q;i++){
			printf("%d%c",ans[i],i==q?'\n':' ');
			//判断是否是最后一个数，如果是，则换行，不是，则空格
		}
	}
	system("pause");
	return 0;
}