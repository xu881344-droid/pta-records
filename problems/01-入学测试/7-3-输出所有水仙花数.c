// 7-3 输出所有水仙花数
// 题目集：入学测试
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-09-17 11:26:24（北京时间）
// 编译器：GCC
// 提交 ID：2100426116897472512
// 原题：https://pintia.cn/problem-sets/2100266264775520256/exam/problems/type/7?problemSetProblemId=2100266264788103170

#include <stdio.h>

int main()
{
    int i,a,b,c;
    
    for (i=100; i<=999; i++)
    {
        a=i/100;
        b=i/10%10;
        c=i%10;

        if (a*a*a +b*b*b +c*c*c ==i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
