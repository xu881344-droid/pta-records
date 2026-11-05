// 7-7 计算存款利息
// 题目集：1 表达式ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-09-26 21:16:44（北京时间）
// 编译器：GCC
// 提交 ID：2103836168192643072
// 原题：https://pintia.cn/problem-sets/2102954017439944704/exam/problems/type/7?problemSetProblemId=2102954017460916230

#include <stdio.h>
#include <math.h>

int main()
{
    // 1. 所有变量声明放在最前面（兼容C89标准）
    double money, year, rate, interest;
    
    // 2. 循环读取，兼容多组测试用例（遇到文件结尾EOF自动停止）
    while (scanf("%lf %lf %lf", &money, &year, &rate) != EOF) {
        
        // 3. 计算利息，加 1e-9 修正浮点数精度误差
        interest = money * pow(1 + rate, year) - money + 1e-9;
        
        // 4. 输出（如果依然WA，可以尝试去掉等号两边的空格：printf("interest=%.2f\n", interest);）
        printf("interest = %.2f\n", interest);
    }
    
    return 0;
}
