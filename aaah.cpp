//做了一道阅读理解... 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	if(s1.length()>=s2.length())
	cout<<"go";
	else
	cout<<"no";
	return 0;
}
/*
题目描述
Jon Marius shouted too much at the recent Justin Bieber concert, and now needs to go to the doctor because of his sore throat. The doctor’s instructions are to say “aaah”. Unfortunately, the doctors sometimes need Jon Marius to say “aaah” for a while, which Jon Marius has never been good at. Each doctor requires a certain level of “aah” – some require “aaaaaah”, while others can actually diagnose his throat with just a “h”. (They often diagnose wrongly, but that is beyond the scope of this problem.) Since Jon Marius does not want to go to a doctor and have his time wasted, he wants to compare how long he manages to hold the “aaah” with the doctor’s requirements. (After all, who wants to be all like “aaah” when the doctor wants you to go “aaaaaah”?)
Each day Jon Marius calls up a different doctor and asks them how long his “aaah” has to be. Find out if Jon Marius would waste his time going to the given doctor.
输入
The input consists of two lines. The first line is the “aaah” Jon Marius is able to say that day. The second line is the “aah” the doctor wants to hear. Only lowercase ’a’ and ’h’ will be used in the input, and each line will contain between 0  and 999  ’a’s, inclusive, followed by a single ’h’.
输出
Output “go” if Jon Marius can go to that doctor, and output “no” otherwise.
样例输入

aaah
aaaaah

样例输出

no*/
