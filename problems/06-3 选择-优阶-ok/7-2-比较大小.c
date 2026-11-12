// 7-2 比较大小
// 题目集：3 选择-优阶-ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-11-12 09:17:56（北京时间）
// 编译器：GCC
// 提交 ID：2120687506040074240
// 原题：https://pintia.cn/problem-sets/2118135003893915648/exam/problems/type/7?problemSetProblemId=2118135004019744769

#include <stdio.h>

int main() {
    int a, b, c, temp;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    
    printf("%d->%d->%d\n", a, b, c);
    
    return 0;
}
