// 7-2 两个数的简单计算器
// 题目集：4 选择-进阶-ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-10-29 08:57:47（北京时间）
// 编译器：GCC
// 提交 ID：2115609006642532352
// 原题：https://pintia.cn/problem-sets/2115602240319717376/exam/problems/type/7?problemSetProblemId=2115602240340688897

#include <stdio.h>
int main()
{
    int a,b;
    char op;
    scanf("%d %c %d",&a, &op, &b);

    switch(op)
    {
        case '+': printf("%d\n",a + b);break;
        case '-': printf("%d\n",a - b);break;
        case '*': printf("%d\n",a * b);break;
        case '/': printf("%d\n",a / b);break;
        case '%': printf("%d\n",a % b);break;
        default: printf("ERROR\n");break;
    }
    return 0;
}
