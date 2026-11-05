// 7-9 是不是太胖了
// 题目集：1 表达式ok
// 状态：答案正确    得分：5 / 5
// 提交时间：2026-09-26 20:42:17（北京时间）
// 编译器：GCC
// 提交 ID：2103827499711320064
// 原题：https://pintia.cn/problem-sets/2102954017439944704/exam/problems/type/7?problemSetProblemId=2102954017460916232

#include <stdio.h>

int main()
{
    float H;
    scanf("%f",&H);
    float weight;
    weight=(H-100)*0.9;
    float catty;
    catty=weight*2;

    printf("%.1f" , catty);
    return 0;
}
