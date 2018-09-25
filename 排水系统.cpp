/*第一次写代码时出了些问题，耍了小聪明AC过了，还以为测试数据问题
最后和学长讨论发现我排序时没有去除第一个水管，尴尬！*/ 
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
#define maxn 100000
int s[maxn+10];
int vis[maxn+10];
int cnt,S=0,x;
inline void fx(int n,int a) {
	S=0;
	for(int i=0; i<n; i++) {
		if(!vis[i]) {
			S+=s[i];
		}
	}
	if(S>0)
	{
		x=(s[0]*a)/S;	
	}

}
bool cmp(int a,int b) {
	return a>b;
}
int main() {
	int n,a,b;
	cin>>n>>a>>b;
	for(int i=0; i<n; i++) {
		cin>>s[i];
	}
	memset(vis,0,sizeof(vis));
	fx(n,a);
	//cout<<"S"<<S<<endl<<"X"<<x<<endl;
	sort(s+1,s+n,cmp);
	for(int i=0; i<n; i++) {
		if(x>=b) {
			cout<<i;
			break;
		}
		vis[i+1]=1;
		fx(n,a);
	//	cout<<"S"<<S<<endl<<"X"<<x<<endl;
	}
	return 0;
}
/*题目描述
有n个出水口，第i个出水口的出水量为si，在入水口加入A的水量，问你至少堵掉多少出水口才能使第一个水管出水量至少为B。出水量计算公式(s1*A)/S，S表示未堵掉出水口出水量之和。
输入
第一行包含三个数  n A B  含义题目中已给出  (1<=n<=100000, 1<=B<=A<=10000)
第二行为n个数字 s1,s2,s3...sn (1<=si<=10000) 代表出水口大小

输出
至少堵住多少出水口，可以使得第一个水管出水量至少为B。
样例输入

4 10 3
2 2 2 2

样例输出

1

来源

ACM集训队 
*/
