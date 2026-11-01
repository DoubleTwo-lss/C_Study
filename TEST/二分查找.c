#include <stdio.h>

// 二分查找函数
int binarySearch(int arr[], int left, int right, int target)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2; // 防止溢出

        if (arr[mid] == target)
        {
            return mid; // 找到，返回下标
        }
        else if (arr[mid] < target)
        {
            left = mid + 1; // 目标在右边
        }
        else
        {
            right = mid - 1; // 目标在左边
        }
    }
    return -1; // 找不到返回-1
}

int main()
{
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15 };
    //            0  1  2  3  4   5   6   7
    int len = sizeof(arr) / sizeof(arr[0]);
    int key = 0;
        scanf_s("%d", &key);

    int ret = binarySearch(arr,   0,   len-1,   key);
    //                     数组  left  right  要找的数
    
    if (ret != -1)
    {
        printf("Ya address is %d\n", ret);
    }
    else
    {
        printf("No shit!\n");
    }
    return 0;
}
