// 7-1 成绩转换
// 题目集：4 选择-进阶-ok
// 状态：答案正确    得分：15 / 15
// 提交时间：2026-10-29 08:43:02（北京时间）
// 编译器：GCC
// 提交 ID：2115605291638431744
// 原题：https://pintia.cn/problem-sets/2115602240319717376/exam/problems/type/7?problemSetProblemId=2115602240340688896

#include <stdio.h>
int main()
{
    int A,B,C,D,E;
    int score;
    scanf("%d",&score);
    if(score>=90)
     printf("A");
    else if(score<90 && score>=80)
        printf("B");
        else if(score<80 && score>=70)
        printf("C");
            else if(score<70 && score>=60)
        printf("D");
        else
        printf("E");
    return 0;
}
