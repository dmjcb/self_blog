/*n个人报数,报1,2,3,凡是报3的人退出圈子,找出最后留下的人*/
#include <iostream>
using namespace std;
int main()
{
    /*i表示循环计数变量,j表示报号循环变量,m表示退出人数*/
    int i = 0, j = 0, m = 0, n, num[50], *p;
    cout << "输入人数：";
    cin >> n;
    p = num;
    for (i = 0; i < n; i++)
    {
        /*p指向第一个人,依次遍下去*/
        *(p + i) = i + 1;
    }
    /*当还有人未退出时*/
    while (m < n - 1)
    {
        /*p+i号不是0时*/
        if (*(p + i) != 0)
        {
            /*继续喊口号*/
            j++;
        }
        /*喊到3时*/
        if (j == 3)
        {
            /*该号编为0,退出*/
            *(p + i) = 0;
            /*口号归零,退出的人数加一*/
            j = 0;
            m++;
        }
        /*下一个人*/
        i++;
        if (i == n)
        {
            i = 0;
        }
    }
    while (*p == 0)
    {
        p++;
    }
    cout << "最后一个人是：" << *p << "号" << endl;
    return 0;
}
