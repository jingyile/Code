/*�е����Ķ�������˼����Ŀ������˼����һ�����ֲ��ſ���һЩ�����Ŷӣ�
�����ñ�֤��ȥ����Ů������ ��������ԵĴ���x+1ʱ���͹ر�.
ע��������X+1����Ϊ��ǰΪxʱ������������һ�����Ա�պ���֮ǰ���Ա���ԣ�
��ô���������Ϳ��Խ�ȥ���ֲ� 
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
		w++;//��ǰwomen���� 
		else if(str[i]=='M')
		m++;//��ǰmen���� 
		mins=min(w,m);//��� 
		if(fabs(w-m)>x+1)//�������������x+1���رվ��ֲ� 
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
��Ŀ����
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
����
The first line of input contains a positive integer X< 100 describing the largest absolute difference between 
the number of women and number of men let into the club, that Bruno can handle. The second line contains a string 
consisting solely of the characters ��W�� and ��M�� of length at most 100, describing the genders of the people 
in the queue, in order. The leftmost character of the string is the gender of the person first in line.
���
The maximum number of people Bruno can let into the club without loosing track of his counting. 
You may assume that the club is large enough to hold all the people in the queue.
��������

2
WMMMMWWMMMWWMW

�������

8
*/
