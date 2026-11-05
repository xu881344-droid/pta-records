// 7-6 判断整数是否3，7的倍数
// 题目集：3 选择-基础-ok
// 状态：答案正确    得分：50 / 50
// 提交时间：2026-10-29 11:39:37（北京时间）
// 编译器：GCC
// 提交 ID：2115649731576963072
// 原题：https://pintia.cn/problem-sets/2115601400448090112/exam/problems/type/7?problemSetProblemId=2115601400469061637

#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a % 3 ==0 && a % 7 == 0)
        printf("yes");
    else
        printf("no");

    return 0;
}
