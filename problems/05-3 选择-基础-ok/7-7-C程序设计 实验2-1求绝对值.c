// 7-7  C程序设计 实验2-1求绝对值
// 题目集：3 选择-基础-ok
// 状态：答案正确    得分：20 / 20
// 提交时间：2026-10-29 11:59:58（北京时间）
// 编译器：GCC
// 提交 ID：2115654851639349248
// 原题：https://pintia.cn/problem-sets/2115601400448090112/exam/problems/type/7?problemSetProblemId=2115601400469061638

#include <stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    if(a < 0)
        printf("%.2f",-a);
    else if(a > 0)
        printf("%.2f",a);
    else if(a == 0)
        printf("%.2f",a);

    return 0;
}
