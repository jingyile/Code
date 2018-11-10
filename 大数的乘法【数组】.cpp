/*细心！！！*/
#include<bits/stdc++.h>
using namespace std;
char a[101],b[101];
int c[10005];
int main() {
	cin>>a>>b;
	int len1=strlen(a);
	int len2=strlen(b);
	int carry=0;
	int num,m=0;
	for(int i=len2; i>0; i--) {
		carry=0; //新一轮运算进位一定要初始化0！
		m=len2-i;
		for(int j=len1; j>0; j--) {
			int x=b[i-1]-'0';
			int y=a[j-1]-'0';
			num=x*y+carry;
			c[m]+=num;
			if(c[m]>9) {
				carry=c[m]/10;
				c[m]=c[m]%10;
			} else {
				carry=0;
			}
			m++;
		}
		c[m]=carry;
	}
//cout<<m;
	if(c[m]!=0)
		cout<<c[m];
	for(int i=m-1; i>=0; i--)
		cout<<c[i];
	return 0;
}
/*
题目描述

大数是指计算的数值非常大或者对运算的精度要求非常高，用已知的数据类型无法精确表示的数值。例如：我们要计算如下两个数的乘积时，用我们已知的数据类型是无法精确表示其结果的：

a1 = 11111111111111111111111111111111111

b1 = 11111111111111111111111111111111111111

求：a1 * b1;
输入

输入两行：每行一个数字，每行的数字不超过100位；

输出

输出一行：为这两个大数的乘积
样例输入

1111111111111111111
111111111111111

样例输出

123456790123456666654320987654321*/
