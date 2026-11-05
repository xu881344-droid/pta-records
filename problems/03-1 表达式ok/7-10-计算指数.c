// 7-10 计算指数
// 题目集：1 表达式ok
// 状态：答案正确    得分：5 / 5
// 提交时间：2026-09-27 15:40:19（北京时间）
// 编译器：GCC
// 提交 ID：2104113895562919936
// 原题：https://pintia.cn/problem-sets/2102954017439944704/exam/problems/type/7?problemSetProblemId=2102954017460916233

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int result;
    scanf("%d" , &n);
    result = pow(2 , n);

    printf("2^%d = %d\n", n , result);

    return 0;
}
