// 7-7 格式输出整数，控制长度，左边补空格。
// 题目集：运行环境和数据类型
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-10-22 11:09:29（北京时间）
// 编译器：GCC
// 提交 ID：2113105434944184320
// 原题：https://pintia.cn/problem-sets/2100433052427517952/exam/problems/type/7?problemSetProblemId=2100433052452683782

#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d*%d=%3d\n",a,b,a*b);
    return 0;
}
