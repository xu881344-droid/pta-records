// 7-8 计算大米价格
// 题目集：4 选择-进阶-ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-10-29 10:30:04（北京时间）
// 编译器：GCC
// 提交 ID：2115632227425161216
// 原题：https://pintia.cn/problem-sets/2115602240319717376/exam/problems/type/7?problemSetProblemId=2115602240340688903

#include <stdio.h>
int main()
{
    int N;
    double K;
    scanf("%d %lf",&N, &K);
    switch(N){
        case 1: printf("%.2f\n",K * 4.68);break;
        case 2: printf("%.2f\n",K * 6.26);break;
        case 3: printf("%.2f\n",K * 8.16);break;
        default: printf("Not available!");break;
    }
    return 0;
}
