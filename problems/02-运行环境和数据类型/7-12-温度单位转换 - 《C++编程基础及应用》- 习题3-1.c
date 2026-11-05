// 7-12 温度单位转换 - 《C++编程基础及应用》- 习题3-1
// 题目集：运行环境和数据类型
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-10-22 10:51:48（北京时间）
// 编译器：GCC
// 提交 ID：2113100982170390528
// 原题：https://pintia.cn/problem-sets/2100433052427517952/exam/problems/type/7?problemSetProblemId=2100433052452683787

#include <stdio.h>
int main()
{
    float f;
    scanf("%f",&f);
    float c;
    c=5.0/9.0*(f-32);
    printf("%.1f",c);
    return 0;
}
