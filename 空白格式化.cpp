//多次输入*/ 
#include<bits/stdc++.h>
using namespace std;
void f(char* from, char* to)

{

	char* p_from = from;

	char* p_to = to;

	while(*p_from==' ' || *p_from=='\t' || *p_from=='\n') p_from++;

	do {

		if(*p_from==' ' || *p_from=='\t' || *p_from=='\n') {

			do {
				p_from++;
			} while(*p_from==' ' || *p_from=='\t' || *p_from=='\n');

			if(*p_from!=' ' && *p_from!='\t' && *p_from!='\n')
			 *p_to++ = ' ';  //填空位置

		}

	} while(*p_to++ = *p_from++);

}
int main()
{
	char a[1000];
	char b[1000];
	while(cin>>a)
	{
		f(a,b);
	cout<<b<<" ";	
	}
	return 0;
}
/*
题目描述

恭喜你进入了蓝桥杯总决赛，本次大赛采用了全自动机器测评系统。

如果你的答案与标准答案相差了一个空格，很可能无法得分，所以要加倍谨慎！

    但也不必过于惊慌。因为在有些情况下，测评系统会把你的答案进行“空白格式化”。其具体做法是：去掉所有首尾空白；中间的多个空白替换为一个空格。所谓空白指的是：空格、制表符、回车符。

    以下代码实现了这个功能。仔细阅读代码，填写缺失的部分，并补充完整使其能够工作。

void f(char* from, char* to)

{

       char* p_from = from;

       char* p_to = to;    

       while(*p_from==' ' || *p_from=='\t' || *p_from=='\n') p_from++;      

       do{

              if(*p_from==' ' || *p_from=='\t' || *p_from=='\n'){

                     do{p_from++;} while(*p_from==' ' || *p_from=='\t' || *p_from=='\n');

                     if(____________________) *p_to++ = ' ';  //填空位置

              }

       }while(*p_to++ = *p_from++);

}

输入

一行代码，不是标准格式。
输出

输出代码的标准形式。
样例输入

      char*        p_from =     from;    

样例输出

char* p_from = from;

提示

代码的标准格式是，首尾没有空格，中间有空格的地方应该只有一个空格不能有多个。
*/
