// 7-3 判断一个三位数是否为水仙花数
// 题目集：3 选择-基础-ok
// 状态：答案正确    得分：15 / 15
// 提交时间：2026-10-29 11:47:42（北京时间）
// 编译器：GCC
// 提交 ID：2115651765994754048
// 原题：https://pintia.cn/problem-sets/2115601400448090112/exam/problems/type/7?problemSetProblemId=2115601400469061634

#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N < 100 || N > 999){
        printf("Invalid Value.\n");
    }
    else{
        int a = N / 100;
        int b = N / 10 % 10;
        int c = N % 10;
        if(a*a*a + b*b*b + c*c*c == N)
            printf("Yes\n");
                else
            printf("No\n");
    }
    return 0;
}
