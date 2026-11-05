// 7-11 A乘以B
// 题目集：1 表达式ok
// 状态：答案正确    得分：5 / 5
// 提交时间：2026-09-27 15:53:27（北京时间）
// 编译器：GCC
// 提交 ID：2104117197033820160
// 原题：https://pintia.cn/problem-sets/2102954017439944704/exam/problems/type/7?problemSetProblemId=2102954017460916234

#include <stdio.h>

int main()
{
    int A , B;
    scanf("%d %d" , &A , &B);
    int result;
    result = A * B;

    printf("%d\n" , result);
    return 0;
}
