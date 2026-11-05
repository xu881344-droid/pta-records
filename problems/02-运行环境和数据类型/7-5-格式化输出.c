// 7-5 格式化输出
// 题目集：运行环境和数据类型
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-09-24 10:46:52（北京时间）
// 编译器：GCC
// 提交 ID：2102952881932845056
// 原题：https://pintia.cn/problem-sets/2100433052427517952/exam/problems/type/7?problemSetProblemId=2100433052452683780

#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d ,%d", &a, &b);
    
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d*%d=%d\n",a,b,a*b);

    return 0;
}
