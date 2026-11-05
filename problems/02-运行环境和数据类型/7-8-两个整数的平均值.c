// 7-8 两个整数的平均值
// 题目集：运行环境和数据类型
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-09-24 10:57:33（北京时间）
// 编译器：GCC
// 提交 ID：2102955568208396288
// 原题：https://pintia.cn/problem-sets/2100433052427517952/exam/problems/type/7?problemSetProblemId=2100433052452683783

#include <stdio.h>

int main()
{
    int a, b;
    double average;
    scanf("%d %d", &a,&b);
    average = (a+b)*1.0/2;
    printf("Average=%.2f\n",average);

    return 0;
}
