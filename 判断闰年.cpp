#include<iostream>
using namespace std;
int a[1000];
int main() {
string a="common leapyear",b="century leapyear",c="no leapyear";
int n;
cin>>n;
if(n%4==0&&n%100!=0)
cout<<a;
else if(n%400==0)
cout<<b;
else
cout<<c;
	return 0;
}

/*题目描述
输入一个年份，判断是否是闰年，若是，判断其为普通闰年还是世纪闰年。
普通闰年:能被4整除但不能被100整除的年份为普通闰年。（如2004年就是闰年，1999年不是闰年）；
世纪闰年:能被400整除的为世纪闰年。（如2000年是闰年，1900年不是闰年）；
若是普通闰年，输出common leapyear；
若是世纪闰年，输出century leapyear；

若不是闰年，输出no leapyear；
输入
年份
输出
若是普通闰年，输出common leapyear；
若是世纪闰年，输出century leapyear；

若不是闰年，输出no leapyear；
样例输入

2000

样例输出

century leapyear
*/
