// 7-2 数据类型转换
// 题目集：运行环境和数据类型
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-09-24 09:21:42（北京时间）
// 编译器：GCC
// 提交 ID：2102931450138316800
// 原题：https://pintia.cn/problem-sets/2100433052427517952/exam/problems/type/7?problemSetProblemId=2100433052452683777

#include <stdio.h>

int main()
{
    float n;
    int integer_part;
    float decimal_part;
    float product;

    scanf("%f", &n);

    integer_part = (int)n;
    decimal_part = n-integer_part;
    product = integer_part*decimal_part;

    printf("%.2f\n", product);

    return 0;
}
