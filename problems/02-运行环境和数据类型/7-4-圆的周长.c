// 7-4 圆的周长
// 题目集：运行环境和数据类型
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-09-24 09:53:52（北京时间）
// 编译器：GCC
// 提交 ID：2102939541751840768
// 原题：https://pintia.cn/problem-sets/2100433052427517952/exam/problems/type/7?problemSetProblemId=2100433052452683779

#include <stdio.h>
#define pi 3.1415926

int main()
{
    float r, c;
        scanf("%f", &r);
    c = 2 *pi *r;
    printf("%.2f\n",c);

    return 0;
    
}
