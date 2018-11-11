//时间复杂度太高 
#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int cnt=0;
	for(int x=1; x<a; x++)
		for(int y=1; y<b; y++) {
			double y1=x-a+b;
			if(y<y1) {
				cnt++;
			}
		}
	double k,bb,y2;
	double a0,b0,c0;
	a0=a,b0=b,c0=c;
	for(int x=a; x<=c; x++)
		for(int y=1; y<b; y++) {
			if(a>c) {
				k=b0/(a0-c0);
				bb=-1*k*c;
				y2=k*x+bb;
			//	cout<<k;
			} else {
				k=b0/(c0-a0)*-1;
				bb=-1*k*c;
				y2=k*x+bb;
			//	cout<<k<<" "<<bb<<endl;
			}
			if(y<y2) {
				cnt++;
			}
		}
	cout<<cnt<<endl;
	return 0;
}
/*
题目描述

又是一年毕业季，校吧内掀一起了一阵吧聚狂潮。大家聚到21,聊聊天，秀秀ID，玩玩游戏。
墨尔本为了显示高大上，推荐了这样一个游戏，假设把平地看成一个坐标轴，让三个大吧分别站在(0,0)(a,b)(c,0)的位置，两两之间拉一根直线， 然后让其他人站在里面，但是有一个要求，只能站在整数格点上（即x,y坐标都是整数），如果线穿过了某些整数格点，则人不能站在上面。现在由墨尔本随意说 a,b,c的值，你能帮忙确定能有多少人能够站在围成的图形内吗？
输入

输入三个整数a,b,c.并且0<=a<=30000,0<b<=30000,0<c<10^5;
输出

输出只有一行，包含一个整数，代表能站在围成的图形内的人数
样例输入

5 6 7

样例输出

17
*/
