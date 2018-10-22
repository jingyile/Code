/*有点做阅读理解的意思，题目大体意思就是一个俱乐部门口有一些人在排队，
门卫得保证进去的男女人数差 ，当不配对的大于x+1时，就关闭.
注意这里是X+1，因为当前为x时，可能来的下一个人性别刚好与之前的性别配对，
那么他们两个就可以进去俱乐部 
*/
#include<bits/stdc++.h>
using namespace std;
char str[1000];
int main()
{
	int x;
	int w=0,m=0;
	int mins=-1,flag=0;
	cin>>x;
	getchar();
	cin>>str;
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]=='W')
		w++;//当前women人数 
		else if(str[i]=='M')
		m++;//当前men人数 
		mins=min(w,m);//配对 
		if(fabs(w-m)>x+1)//不配对人数大于x+1，关闭俱乐部 
		{
			flag=1;
			break;
		}
	}
	if(flag)
	cout<<mins*2+x<<endl;
	else
	cout<<len<<endl;
return 0;	
}
/*
题目描述
The doorman Bruno at the popular night club Heaven is having a hard time fulfilling his duties. 
He was told by the owner that when the club is full, 
the number of women and men let into the club should be roughly the same. 
When the night club opens, people wanting to enter the club are already lined up in a queue, 
and Bruno can only let them in one-by-one. He lets them in more-or-less in the order they are lined up. 
He can however decide to let the second person in the queue cut the line and slip into the club before the person in 
front. This will no doubt upset the person first in line, especially when this happens multiple times,but Bruno is quite
 a big guy and is capable of handling troublemakers. Unfortunately though, he is not that strong on mental calculations 
 under these circumstances.He finds keeping track of the difference of the number of women and number of men let into 
 the club a challenging task. As soon as the absolute difference gets too big, he looses track of his counting and must
  declare to the party people remaining in the queue that the club is full.
输入
The first line of input contains a positive integer X< 100 describing the largest absolute difference between 
the number of women and number of men let into the club, that Bruno can handle. The second line contains a string 
consisting solely of the characters ’W’ and ’M’ of length at most 100, describing the genders of the people 
in the queue, in order. The leftmost character of the string is the gender of the person first in line.
输出
The maximum number of people Bruno can let into the club without loosing track of his counting. 
You may assume that the club is large enough to hold all the people in the queue.
样例输入

2
WMMMMWWMMMWWMW

样例输出

8
*/
