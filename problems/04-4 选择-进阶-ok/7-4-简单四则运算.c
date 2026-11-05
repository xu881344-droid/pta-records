// 7-4 简单四则运算
// 题目集：4 选择-进阶-ok
// 状态：答案正确    得分：20 / 20
// 提交时间：2026-10-29 09:28:14（北京时间）
// 编译器：GCC
// 提交 ID：2115616669799522304
// 原题：https://pintia.cn/problem-sets/2115602240319717376/exam/problems/type/7?problemSetProblemId=2115602240340688899

#include <stdio.h>
int main()
{
    double a, b;
    char op;
    scanf("%lf %c %lf",&a, &op, &b);
    switch(op)
        {
            case '+': printf("%.2f\n", a+b);break;
            case '-': printf("%.2f\n", a-b);break;
            case '*': printf("%.2f\n", a*b);break;
            case '/':
            if(b == 0)
            {
                printf("The divisor is 0.");
            }
            else
            {
                printf("%.2f\n", a/b);
            }
            break;
        default:break;
        }
    return 0;
}
