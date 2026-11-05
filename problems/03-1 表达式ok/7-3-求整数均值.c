// 7-3 求整数均值
// 题目集：1 表达式ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-09-24 11:45:07（北京时间）
// 编译器：GCC
// 提交 ID：2102967541369262080
// 原题：https://pintia.cn/problem-sets/2102954017439944704/exam/problems/type/7?problemSetProblemId=2102954017460916226

#include <stdio.h>

int main()
    {
        int a,b,c,d;
        int Sum;
        double Average;
        scanf("%d %d %d %d", &a,&b,&c,&d);
        Sum = a + b + c + d;
        Average = (a + b + c + d)*1.0/4;

        printf("Sum = %d; Average = %.1f\n", Sum,Average);

        return 0;
        
    }
