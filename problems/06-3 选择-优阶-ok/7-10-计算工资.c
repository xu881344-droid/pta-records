// 7-10 计算工资
// 题目集：3 选择-优阶-ok
// 状态：答案正确    得分：15 / 15
// 提交时间：2026-11-12 09:36:57（北京时间）
// 编译器：GCC
// 提交 ID：2120692292748763136
// 原题：https://pintia.cn/problem-sets/2118135003893915648/exam/problems/type/7?problemSetProblemId=2118135004028133376

#include <stdio.h>

int main(void)
{
    int years, hours;
    double rate, pay;

    scanf("%d %d", &years, &hours);

    if (years >= 5) {
        rate = 50.0;
    } else {
        rate = 30.0;
    }

    if (hours <= 40) {
        pay = hours * rate;
    } else {
        pay = 40 * rate + (hours - 40) * rate * 1.5;
    }

    printf("%.2f\n", pay);

    return 0;
}
