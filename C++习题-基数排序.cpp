#include <iostream>
#include <string.h>
using namespace std;
/* ��ȡ�������ֵ�����ֵ��orderָ����Ҫ��ȡ��һλ��������1�����λ��2����ʮλ��3�����λ */
int get_index(int num, int order)
{
    while(--order)
        num/=10;
    return num%10;
}
/* ���л������� */
void radix_sort(int arr[], int len, int dec, int order)
{
    int i, j;
    int index;                      /* �������� */
    int tmp[1001];                  /* ��ʱ���飬���������������м��� */
    int num[10];                    /* ��������ֵ������ */
    memset(num, 0, 10*sizeof(int)); /* �����ʼ���� */
    memset(tmp, 0, len*sizeof(int));/* �����ʼ���� */
    if (dec < order)                /* ���λ������ɺ󷵻� */
        return;
    for (i=0; i<len; i++)
    {
        index = get_index(arr[i],order);    /* ��ȡ����ֵ */
        num[index]++;                       /* ��Ӧλ��һ */
    }
    for (i=1; i<10; i++)
        num[i] += num[i-1];                 /* ������������ */
    for (i=len-1; i>=0; i--)
    {
        index = get_index(arr[i], order);/* ������β��ʼ���λ�ø������ֵ����� */
        j = --num[index];                   /* ������������������ڰ�λ����֮���������е�λ�� */
        tmp[j] = arr[i];                    /* ���ַ�����ʱ���� */
    }
    for (i=0; i<len; i++)
        arr[i] = tmp[i];                                     /* ����ʱ���鸴�Ƶ�ԭ���� */
/////////////////////////////////////////////////////////
       /*    ���ﲹ�����   */
           radix_sort(arr, len, dec, order+1);
       /* ��������һλ�����ִ�С�������� */
/////////////////////////////////////////////////////////
    return;
}
int main()
{
    int i,n;
    int arr[1001];
    cin>>n;
    for(i=0; i<n; i++)
        cin>>arr[i];
    int dec=3;      /* ��ദ��λ�� */
    int order= 1;   /* �����λ����1�����λ��2����ʮλ��3�����λ */
    /* ���������Ӹ�λ��ʼ */
    radix_sort(arr, n, dec, order);
    for (i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
