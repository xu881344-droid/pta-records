// 7-4 计算平均分
// 题目集：1 表达式ok
// 状态：答案正确    得分：5 / 5
// 提交时间：2026-09-24 12:00:05（北京时间）
// 编译器：GCC
// 提交 ID：2102971308433068032
// 原题：https://pintia.cn/problem-sets/2102954017439944704/exam/problems/type/7?problemSetProblemId=2102954017460916227

#include <stdio.h>

int main()
{
    int a = 87;
    int b = 72;
    int c = 93;
    int average;
    average = (a + b +c) / 3;
    printf("math = %d, eng = %d, comp = %d, average = %d\n", a ,b ,c , average);
    return 0;
    
}
