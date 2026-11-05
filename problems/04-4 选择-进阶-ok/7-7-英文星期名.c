// 7-7 英文星期名
// 题目集：4 选择-进阶-ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-10-29 09:37:04（北京时间）
// 编译器：GCC
// 提交 ID：2115618888988991488
// 原题：https://pintia.cn/problem-sets/2115602240319717376/exam/problems/type/7?problemSetProblemId=2115602240340688902

#include <stdio.h>
int main()
{
    int week;
    scanf("%d",&week);
    switch(week)
    {
    case 0: printf("Sunday\n");break;
    case 1: printf("Monday\n");break;
    case 2: printf("Tuesday\n");break;
    case 3: printf("Wednesday\n");break;
    case 4: printf("Thursday\n");break;
    case 5: printf("Friday\n");break;
    case 6: printf("Saturday\n");break;
    default: printf("None\n");break;
    }
    return 0;
}
