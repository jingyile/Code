#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[15],b[15];
	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	for(int i=0; i<n; i++) {
		cin>>b[i];
	}
	int minn=999999;
	for(int i=0; i<n; i++) {
		int x=fabs(a[i]-b[i]);
		minn=min(minn,x);
	}
	cout<<minn<<endl;
	return 0;
}
/*
题目描述

某拍卖公司对一副名画进行拍卖，有n对夫妻参加竞拍，夫妻分别出价，
同一对夫妻出价最接近的获得该画。价格均为整数。n<10
输入

第一行 n
第二行 n个丈夫的出价
第三行 n个妻子的出价

输出

输出最小出价差(>=0)
样例输入

5
1000 900  800  1200 1500
1200 1000 700  1100 1200

样例输出

100*/
