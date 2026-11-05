// 7-13 后天
// 题目集：1 表达式ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-09-27 22:15:18（北京时间）
// 编译器：GCC
// 提交 ID：2104213296562159616
// 原题：https://pintia.cn/problem-sets/2102954017439944704/exam/problems/type/7?problemSetProblemId=2102954017460916236

#include <stdio.h>

int main()
{
    int D, H;
    scanf("%d", &D);
    H = D + 2;
    if (H > 7) {
        H = H - 7;
    }
    printf("%d", H);
    return 0;
}
