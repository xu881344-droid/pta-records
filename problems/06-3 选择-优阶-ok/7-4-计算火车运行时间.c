// 7-4 计算火车运行时间
// 题目集：3 选择-优阶-ok
// 状态：答案正确    得分：15 / 15
// 提交时间：2026-11-05 11:13:56（北京时间）
// 编译器：GCC
// 提交 ID：2118179982662127616
// 原题：https://pintia.cn/problem-sets/2118135003893915648/exam/problems/type/7?problemSetProblemId=2118135004023939073

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int start_minutes = (a / 100) * 60 + (a % 100);
    int end_minutes = (b / 100) * 60 + (b % 100);

    int diff = end_minutes - start_minutes;

    int hours = diff / 60;
    int minutes = diff % 60;

    printf("%02d:%02d\n", hours, minutes);

    return 0;
}
