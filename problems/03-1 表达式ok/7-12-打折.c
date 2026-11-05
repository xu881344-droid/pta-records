// 7-12 打折
// 题目集：1 表达式ok
// 状态：答案正确    得分：5 / 5
// 提交时间：2026-09-27 15:46:39（北京时间）
// 编译器：GCC
// 提交 ID：2104115489176141824
// 原题：https://pintia.cn/problem-sets/2102954017439944704/exam/problems/type/7?problemSetProblemId=2102954017460916235

#include <stdio.h>

int main()
{
    float a , b , c;
    scanf("%f %f" , &a , &b);
    c = a * 0.1 * b;

    printf("%.2f" , c);
    return 0;
    
}
