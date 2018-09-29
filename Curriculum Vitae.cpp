/*类似最长上升子序列问题*/ 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int f[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=1;
    for(int i=0;i<n;i++)
    {
        f[i]=1;
        for(int j=0;j<i;j++)
        {
            if(a[i]>=a[j])
            {
                f[i]=max(f[i],f[j]+1);
            }
            ans=max(ans,f[i]);
        }
    }
    cout << ans;
}
/*题目描述

Hideo Kojima刚辞去Konami的工作。现在他将找到一个新的工作场所。尽管他是一个知名人士，但他仍然需要一份简历来申请工作。

 

在他的职业生涯中，已经制作了n个游戏。其中一些是成功的，有些则不是。Hideo希望从他的简历中删除其中几个，以便给雇主留下更好的印象。因此，在他的简历中，成功的游戏后应该没有不成功的游戏。

 

更正式地说，给你一个值为0或1的数组s1，s2，...，sn。零对应于不成功的游戏，一对应于成功的游戏。游戏是按照它们制作的顺序给出的，Hideo不能交换这些值。他应该从这个数组中删除一些元素，使得这个数组在一之后不会出现零。

 

除此之外，Hideo还想在他的简历中提及尽可能多地游戏。帮助他确定可以在他的简历中留下的最大游戏数量。
输入

第一行包含一个整数n（1≤n≤100）。

第二行包含n个用空格隔开的整数s1，s2，...，sn（0≤si ≤1）。0对应于不成功的游戏，1对应于成功的游戏。
输出

一个整数 - Hideo可以在他的简历中留下的最大游戏数量，以便在成功之后不会出现不成功的游戏。
样例输入

4
1 1 0 1

样例输出

3
*/
