// 7-6 整数152的各位数字
// 题目集：1 表达式ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-09-24 15:57:01（北京时间）
// 编译器：GCC
// 提交 ID：2103030931512999936
// 原题：https://pintia.cn/problem-sets/2102954017439944704/exam/problems/type/7?problemSetProblemId=2102954017460916229

#include <stdio.h>

int main()
{
    int a,b,c;
    a = 152 % 10;
    b = 152 / 10 % 10;
    c = 152 / 100;

    printf("152 = %d + %d*10 + %d*100", a , b , c);

    return 0;
}
