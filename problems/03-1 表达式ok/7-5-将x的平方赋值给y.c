// 7-5 将x的平方赋值给y
// 题目集：1 表达式ok
// 状态：答案正确    得分：5 / 5
// 提交时间：2026-09-24 16:07:00（北京时间）
// 编译器：GCC
// 提交 ID：2103033446459621376
// 原题：https://pintia.cn/problem-sets/2102954017439944704/exam/problems/type/7?problemSetProblemId=2102954017460916228

#include <stdio.h>

int main()
{
    int x = 3;
    int y = x*x;

    printf("%d = %d * %d\n", y, x, x);
    printf("%d * %d = %d\n", x, x, y);

    return 0;
}
