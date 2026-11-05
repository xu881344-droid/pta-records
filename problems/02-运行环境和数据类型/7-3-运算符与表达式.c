// 7-3 运算符与表达式
// 题目集：运行环境和数据类型
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-09-24 11:09:34（北京时间）
// 编译器：GCC
// 提交 ID：2102958592804896768
// 原题：https://pintia.cn/problem-sets/2100433052427517952/exam/problems/type/7?problemSetProblemId=2100433052452683778

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int hundred = n /100;
    int last = n % 10;

    int result =hundred * 10000 + n * 10 + last;

    printf("%d\n", result);
    return 0;
}
