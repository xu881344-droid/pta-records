// 7-8 逆序的三位数
// 题目集：1 表达式ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-09-26 20:34:07（北京时间）
// 编译器：GCC
// 提交 ID：2103825444045176832
// 原题：https://pintia.cn/problem-sets/2102954017439944704/exam/problems/type/7?problemSetProblemId=2102954017460916231

#include <stdio.h>

int main()
{
    int a;
    scanf("%d" , &a);
    int result = a % 10 * 100 + a / 10 % 10 * 10 + a / 100;

    printf("%d" , result);
    return 0;
}
