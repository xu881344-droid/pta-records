// 7-1 旅游派车
// 题目集：运行环境和数据类型
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-09-24 11:36:35（北京时间）
// 编译器：GCC
// 提交 ID：2102965394552508416
// 原题：https://pintia.cn/problem-sets/2100433052427517952/exam/problems/type/7?problemSetProblemId=2100433052452683776

#include <stdio.h>

int main()
{
    int n,b;
    scanf("%d %d",&n , &b);
    int k=(n+b-1)/b;
    
    printf("%d\n" , k);

    return 0;
    
}
