// 7-1 计算分段函数[2]
// 题目集：3 选择-基础-ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-10-29 11:05:36（北京时间）
// 编译器：GCC
// 提交 ID：2115641170928005120
// 原题：https://pintia.cn/problem-sets/2115601400448090112/exam/problems/type/7?problemSetProblemId=2115601400469061632

#include <stdio.h>
#include <math.h>
int main()
{
    double x, sum;
    scanf("%lf", &x);
    if(x >= 0){
        sum = sqrt(x);
    }
    else if(x < 0){
        sum = pow(x + 1, 2) + 2 * x + 1 / x;
    }
    printf("f(%.2f) = %.2f\n", x, sum);
    return 0;
}
