//�������*/ 
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
			 *p_to++ = ' ';  //���λ��

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
��Ŀ����

��ϲ����������ű��ܾ��������δ���������ȫ�Զ���������ϵͳ��

�����Ĵ����׼�������һ���ո񣬺ܿ����޷��÷֣�����Ҫ�ӱ�������

    ��Ҳ���ع��ھ��š���Ϊ����Щ����£�����ϵͳ�����Ĵ𰸽��С��հ׸�ʽ����������������ǣ�ȥ��������β�հף��м�Ķ���հ��滻Ϊһ���ո���ν�հ�ָ���ǣ��ո��Ʊ�����س�����

    ���´���ʵ����������ܡ���ϸ�Ķ����룬��дȱʧ�Ĳ��֣�����������ʹ���ܹ�������

void f(char* from, char* to)

{

       char* p_from = from;

       char* p_to = to;    

       while(*p_from==' ' || *p_from=='\t' || *p_from=='\n') p_from++;      

       do{

              if(*p_from==' ' || *p_from=='\t' || *p_from=='\n'){

                     do{p_from++;} while(*p_from==' ' || *p_from=='\t' || *p_from=='\n');

                     if(____________________) *p_to++ = ' ';  //���λ��

              }

       }while(*p_to++ = *p_from++);

}

����

һ�д��룬���Ǳ�׼��ʽ��
���

�������ı�׼��ʽ��
��������

      char*        p_from =     from;    

�������

char* p_from = from;

��ʾ

����ı�׼��ʽ�ǣ���βû�пո��м��пո�ĵط�Ӧ��ֻ��һ���ո����ж����
*/
