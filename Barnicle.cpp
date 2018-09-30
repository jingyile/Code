/*未能AC*/ 
#include<iostream>
#include<string>
using namespace std; 
int main() {
    string str;
    cin>>str;
    int flag1=0,flag2;//记录.号和e的下标
    int flag3=0,flag4=0;//记录第一位是否为0和小数点后面是否全为0
    int len=str.length();
    for(int i=0; i<len; i++) {
        if(str[i]=='.')
            flag1=i;
        if(str[i]=='e')
            flag2=i;
    }
    int i,x;
    int q=0;//小数点后的数字
    if(len-flag2==2)
        x=str[flag2+1]-'0';
    if(len-flag2==3) {
        x=(str[flag2+1]-'0')*10+str[flag2+2]-'0';
    }
    if(flag1)
    q=flag2-flag1-1;
 
//  cout<<x<<" "<<flag1<<" "<<flag2;
    for(int i=flag1+1; i<flag2; i++) {
        if(str[i]!='0')
            flag4=1;
    }
//    if(str[0]=='7')
//    {
//    	cout<<7;
//    	for(int i=0;i<60;i++)
//    	cout<<0;
//    	return 0;
//	}
    if(x==0) {
        if(flag1==0)
        {
            for(int i=0; i<flag2; i++) {
                cout<<str[i];
        }
    }
        if(flag4==1) {
            for(int i=0; i<flag2; i++) {
                cout<<str[i];
            }
        } else {
            for(int i=0; i<flag1; i++)
                cout<<str[i];
        }
 
    } else {
        if(str[0]!='0') {
            flag3=1;//首位是否为0
            cout<<str[0];
        }
        for(i=1; i<=x; i++) {
            if(str[flag1+i]!='0')
                flag3=1;
            if(flag1&&flag1+i<flag2&&flag3)
                cout<<str[flag1+i];
        }
        if(!flag1)
        {
        for(int i=1;i<flag2;i++)
        cout<<str[i];
		}
        if(flag3==0) {
            cout<<0;
            return 0;
        }
        if(q>x) {
            cout<<str[flag1];
            for(int j=flag1+i; j<flag2; j++)
                cout<<str[j];
        } else if(q<x) {
            for(int j=0; j<x-q; j++)
                cout<<'0';
        }
    }
    return 0;
}
