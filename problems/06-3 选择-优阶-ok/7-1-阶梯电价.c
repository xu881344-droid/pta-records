// 7-1 阶梯电价
// 题目集：3 选择-优阶-ok
// 状态：答案正确    得分：15 / 15
// 提交时间：2026-11-09 20:19:30（北京时间）
// 编译器：GCC
// 提交 ID：2119766830651322368
// 原题：https://pintia.cn/problem-sets/2118135003893915648/exam/problems/type/7?problemSetProblemId=2118135004019744768

#include <stdio.h>

int main() {
    double s, cost;
    scanf("%lf", &s);

    if (s < 0) {
        printf("Invalid Value!\n");
    } 
    else if (s <= 50) {
        cost = s * 0.53;
        printf("cost = %.2f\n", cost);
    } 
    else {
        cost = 50 * 0.53 + (s - 50) * 0.58;
        printf("cost = %.2f\n", cost);
    }

    return 0;
}
