#include <iostream>
#include <string.h>
using namespace std;
/* 获取输入数字的索引值，order指定需要获取哪一位的索引，1代表个位，2代表十位，3代表百位 */
int get_index(int num, int order)
{
    while(--order)
        num/=10;
    return num%10;
}
/* 进行基数排序 */
void radix_sort(int arr[], int len, int dec, int order)
{
    int i, j;
    int index;                      /* 排序索引 */
    int tmp[1001];                  /* 临时数组，用来保存待排序的中间结果 */
    int num[10];                    /* 保存索引值的数组 */
    memset(num, 0, 10*sizeof(int)); /* 数组初始清零 */
    memset(tmp, 0, len*sizeof(int));/* 数组初始清零 */
    if (dec < order)                /* 最高位排序完成后返回 */
        return;
    for (i=0; i<len; i++)
    {
        index = get_index(arr[i],order);    /* 获取索引值 */
        num[index]++;                       /* 对应位加一 */
    }
    for (i=1; i<10; i++)
        num[i] += num[i-1];                 /* 调整索引数组 */
    for (i=len-1; i>=0; i--)
    {
        index = get_index(arr[i], order);/* 从数组尾开始依次获得各个数字的索引 */
        j = --num[index];                   /* 根据索引计算该数字在按位排序之后在数组中的位置 */
        tmp[j] = arr[i];                    /* 数字放入临时数组 */
    }
    for (i=0; i<len; i++)
        arr[i] = tmp[i];                                     /* 从临时数组复制到原数组 */
/////////////////////////////////////////////////////////
       /*    这里补充代码   */
           radix_sort(arr, len, dec, order+1);
       /* 继续按高一位的数字大小进行排序 */
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
    int dec=3;      /* 最多处理位数 */
    int order= 1;   /* 排序的位数，1代表个位、2代表十位、3代表百位 */
    /* 排序函数，从个位开始 */
    radix_sort(arr, n, dec, order);
    for (i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
