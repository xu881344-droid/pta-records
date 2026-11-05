// 7-2 计算符号函数的值
// 题目集：3 选择-基础-ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-10-29 11:33:07（北京时间）
// 编译器：GCC
// 提交 ID：2115648096494657536
// 原题：https://pintia.cn/problem-sets/2115601400448090112/exam/problems/type/7?problemSetProblemId=2115601400469061633

#include <stdio.h>
#include <math.h>
int main()
{
    int n, result;
    scanf("%d", &n);
    if(n < 0)
        result = -1;
    else if(n == 0)
        result = 0;
    else
        result = 1;
    
    printf("sign(%d) = %d\n",n, result);
    return 0;
}
