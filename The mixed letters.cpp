#include<bits/stdc++.h>
using namespace std;
char a[110];
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
	cin>>a;	
	int len=strlen(a);
	int cnt1=0,cnt2=0;
	for(int i=0;i<len;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		cnt1++;
		else if(a[i]>='a'&&a[i]<='z')
		cnt2++;
	}
	if(cnt1>cnt2)
	{
		for(int i=0;i<len;i++)
		{
			if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]+('A'-'a');
		}
	}
	else{
		for(int i=0;i<len;i++)
		{
			if(a[i]>='A'&&a[i]<='Z')
			a[i]=a[i]+('a'-'A');
		}
	}
	cout<<a<<endl; 
	}
	return 0;
} 
/*题目描述

Mike is very upset that many people on the Internet usually mix uppercase and lowercase letters in one word. That's why he decided to invent an extension for his favorite browser that would change the letters' case in every word so that it either only consisted of lowercase letters or only consisted of uppercase ones. And he wants to change as few letters as possible in the word.
For example, the word "HoUse" must be changed to "house", and the word "ViP", to "VIP".
If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, "maTRIx" should be changed to "matrix".
You task is to use the given method to change the given word.
输入

The first line contains a single integer n (n<=30), indicating the number of test cases.
Then following n lines, each line contains a word s, it consists of uppercase and lowercase
Latin letters and its length is between 1 and 100, inclusive.
输出
Print the word s after change. If the given word s has strictly more uppercase letters, make the word written in the uppercase register, otherwise, in the lowercase one.

样例输入

3
HoUse
ViP
maTRIx

样例输出

house
VIP
matrix
*/
