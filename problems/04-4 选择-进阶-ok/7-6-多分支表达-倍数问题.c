// 7-6 多分支表达-倍数问题
// 题目集：4 选择-进阶-ok
// 状态：答案正确    得分：50 / 50
// 提交时间：2026-10-29 10:19:54（北京时间）
// 编译器：GCC
// 提交 ID：2115629669054914560
// 原题：https://pintia.cn/problem-sets/2115602240319717376/exam/problems/type/7?problemSetProblemId=2115602240340688901

#include <stdio.h>
int main()
{
    int A;
    while(scanf("%d", &A) == 1)
        {
            if(A <= 0){
                continue;
            }
            if(A % 3 == 0 && A % 5 != 0){
                printf("%d\n", A % 5);
            }
            else if(A % 5 == 0 && A % 3 != 0){
                printf("%d\n", A % 3);
            }
            else if(A % 3 != 0 && A % 5 != 0){
                printf("%d\n", A % 15);
            }
                
        }
    return 0;

}
