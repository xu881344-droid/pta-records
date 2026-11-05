// 7-13 C程序设计教程与实训-顺序结构-求两点之间的距离
// 题目集：运行环境和数据类型
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-10-22 11:22:29（北京时间）
// 编译器：GCC
// 提交 ID：2113108704043438080
// 原题：https://pintia.cn/problem-sets/2100433052427517952/exam/problems/type/7?problemSetProblemId=2100433052452683788

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    double dist=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    printf("%.2f\n",dist);
    return 0;    
}
