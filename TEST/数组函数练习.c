#include <stdio.h>
#include <string.h>
/*
void setup_arr(int *a, int s)
{
    int i;
    for (i = 0;i < s;i++)
    {
        a[i] = -1;
    }
}
void print_arr(int *a, int s)
{
    int i;
    for (i = 0;i < s;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int i;
    int arr[10] = { 0 };

    int sz = sizeof(arr) / sizeof(arr[0]);
    print_arr(arr, sz);

    setup_arr(arr,sz);

    print_arr(arr, sz);
    return 0;
}
*/

/*
void print_arr(int a[][5], int h, int l)
{
    int i, j;
    for (i = 0;i < h;i++)
    {
        for (j = 0;j < l;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
void fix_arr(int a[][5], int h, int l)
{
    int i, j;
    for (i = 0;i < h;i++)
    {
        for (j = 0;j < l;j++)
        {
            a[i][j] = i + j + 1;
        }
    }
    print_arr(a, 3, 5);
}


int main()
{
    int arr[3][5] = { 0 };
    fix_arr(arr, 3, 5);

}
*/
int is_LeapYear(int y)
{
    if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
        return 1;
    else
        return 0;
}

int get_days(int y, int m)
{
    int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

    if (is_LeapYear(y) == 1)
        arr[2]++;
    return arr[m];
}

int main()
{
    int year, month;

    printf("input year month:\n");
    scanf_s("%d %d", &year, &month);

    int day = get_days(year, month);

    printf("%d", day);
}