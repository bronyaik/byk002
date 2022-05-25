#include <stdio.h>

int Sta = 1;

int FindGreatestSumOfSubArr(int arr[],int len)
{
    if(arr == NULL || len <= 0)
    {
        Sta = 0;
        return 0;
    }
    int CurMax = 0;
    int Max = arr[0];
    int i = 0;
    for(; i < len; ++i)
    {
        if(CurMax <= 0)
        {
            CurMax = arr[i];
        }
        else
        {
            CurMax += arr[i];
        }
        if(CurMax > Max)
        {
            Max = CurMax;
        }
    }
    return Max;
}

int main()
{
    int arr[] = {1,-2,3,9,-4,7,2,-5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int ret = FindGreatestSumOfSubArr(arr,len);
    if(Sta == 0)
    {
        printf("invalid...\n");
    }
    else
    {
        printf("ret = %d\n",ret);
    }
    return 0;
}
