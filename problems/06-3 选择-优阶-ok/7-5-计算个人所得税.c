// 7-5 计算个人所得税
// 题目集：3 选择-优阶-ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-11-09 19:54:22（北京时间）
// 编译器：GCC
// 提交 ID：2119760507939368960
// 原题：https://pintia.cn/problem-sets/2118135003893915648/exam/problems/type/7?problemSetProblemId=2118135004023939074

#include <stdio.h>
int main()
{
    double a, tax;
    scanf("%lf", &a);
    if(a <= 1600){
        tax = 0.00;
    }
    else if(a > 1600 && a <= 2500){
        tax = 0.05 * (a - 1600);
    }
        else if(a > 2500 && a <= 3500){
        tax = 0.10 * (a - 1600);
        }
    else if(a > 3500 && a <= 4500){
        tax = 0.15 * (a - 1600);
    }
    else{
        tax = 0.20 * (a - 1600);
    }
    printf("%.2f", tax);

    return 0;
}
