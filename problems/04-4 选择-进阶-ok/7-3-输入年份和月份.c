// 7-3 输入年份和月份
// 题目集：4 选择-进阶-ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-10-29 09:10:28（北京时间）
// 编译器：GCC
// 提交 ID：2115612195538309120
// 原题：https://pintia.cn/problem-sets/2115602240319717376/exam/problems/type/7?problemSetProblemId=2115602240340688898

#include <stdio.h>
int main()
{
    int year,month;
    scanf("%d %d",&year, &month);

    int days;
    switch(month)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days=31;break;
            case 4: case 6: case 9: case 11:
            days=30;break;
            case 2:
                if((year % 4 == 0 && year % 100 !=0 || (year % 400 ==0)))
                    days = 29;
                else
                    days = 28;
            break;
        default:
            days = 0;
        }

    printf("%d",days);
    return 0;
}
