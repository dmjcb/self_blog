/*
 * @Brief        : 
 * @Author       : dmjcb
 * @Date         : 2022-02-17 23:53:18
 * @LastEditors  : dmjcb@outlook.com
 * @LastEditTime : 2024-09-28 22:22:29
 */

// only run Linux
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int gVar = 6;

int main(void)
{
    int var = 88;

    pid_t pid = fork();
    // 子进程修改值
    if (pid == 0)
    {
        gVar++;
        var++;
    }
    // 父进程休眠两秒, 让子进程先输出
    else
    {
        sleep(1);
    }
    printf("father pid = %ld, pid = %ld, g_var = %d, var = %d\n", getppid(), getpid(), gVar, var);
    return 0;
}