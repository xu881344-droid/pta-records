// 7-2 整数四则运算
// 题目集：1 表达式ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-09-24 11:20:05（北京时间）
// 编译器：GCC
// 提交 ID：2102961242397069312
// 原题：https://pintia.cn/problem-sets/2102954017439944704/exam/problems/type/7?problemSetProblemId=2102954017460916225

#include <stdio.h>

int main()
{
    int A,B;
    scanf("%d %d",&A,&B);

    printf("%d + %d = %d\n", A, B, A + B);
    printf("%d - %d = %d\n", A, B, A - B);
    printf("%d * %d = %d\n", A, B, A * B);
    printf("%d / %d = %d\n", A, B, A / B);
    return 0;
}
