// 7-4 5-2 输入一个整数能否被7整除
// 题目集：3 选择-基础-ok
// 状态：答案正确    得分：15 / 15
// 提交时间：2026-10-29 11:23:41（北京时间）
// 编译器：GCC
// 提交 ID：2115645721780396032
// 原题：https://pintia.cn/problem-sets/2115601400448090112/exam/problems/type/7?problemSetProblemId=2115601400469061635

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n < 0)       
        return 0;
    if(n % 7 == 0)
    {
        printf("Yes");
    }
    else if(n % 7 != 0)
        {
            printf("No");
        }
    return 0;
}
