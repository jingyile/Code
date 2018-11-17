#include<iostream>
#include<string.h>
using namespace std;
int main() {
	int t,n;
	cin>>t;
	while(t--) {
		cin>>n;
		char a[15],b[15];
		int cnt1=0,cnt2=0;
		while(n--) {
			cin>>a>>b;
			if(strcmp(a,"rock")==0&&strcmp(b,"scissors")==0) {
				cnt1++;
			}
			if(strcmp(a,"rock")==0&&strcmp(b,"paper")==0) {
				cnt2++;
			}
			if(strcmp(a,"scissors")==0&&strcmp(b,"rock")==0) {
				cnt2++;
			}
			if(strcmp(a,"scissors")==0&&strcmp(b,"paper")==0) {
				cnt1++;
			}
			if(strcmp(a,"paper")==0&&strcmp(b,"scissors")==0) {
				cnt2++;
			}
			if(strcmp(a,"paper")==0&&strcmp(b,"rock")==0) {
				cnt1++;
			}
		}
		if(cnt1==cnt2)
		cout<<"Jiong!"<<endl;
		else if(cnt1<cnt2)
		cout<<"OceanLight"<<endl;
		else
		{
		cout<<"xinge008"<<endl;	
		}
	}
	return 0;
}
/*
题目描述
OceanLight和xinge008在玩石头，剪刀，布的游戏，输的一方要罚做100道ACM题。比赛进行n局，获胜次数多的一方最终获胜。现给出n局两个人的手势，请输出输的一方。如果两人获胜次数相同，输出"Jiong!"
输入
包含T(T<=30)组数据。每组第一行，一个整数n(n<=100)，表示进行n局游戏。以下n行，每行两个字符串x，y。x表示OceanLight出的手势，y表示xinge008出的手势，x，y的值为"rock”，“scissors”， ”paper”分别表示石头剪刀布。
输出
每组数据输出单独一行，表示输的一方或输出“Jiong!”表示平局。（注意大小写！）
样例输入

3
1
rock scissors
2
paper paper
paper scissors
1
rock rock

样例输出

xinge008
OceanLight
Jiong!

*/
