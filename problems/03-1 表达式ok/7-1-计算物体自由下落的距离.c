// 7-1 计算物体自由下落的距离
// 题目集：1 表达式ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-09-24 11:34:44（北京时间）
// 编译器：GCC
// 提交 ID：2102964929093812224
// 原题：https://pintia.cn/problem-sets/2102954017439944704/exam/problems/type/7?problemSetProblemId=2102954017460916224

#include <stdio.h>

int main()
{
    double t=3.0;
    double g=10.0;

    double height=0.5*g*t*t;

    printf("height = %.2f\n",height);

    return 0;
}
