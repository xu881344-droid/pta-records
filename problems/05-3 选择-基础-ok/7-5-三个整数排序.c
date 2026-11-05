// 7-5 三个整数排序
// 题目集：3 选择-基础-ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-11-05 10:05:58（北京时间）
// 编译器：GCC
// 提交 ID：2118162877829017600
// 原题：https://pintia.cn/problem-sets/2115601400448090112/exam/problems/type/7?problemSetProblemId=2115601400469061636

#include <stdio.h>

int main() {
    int a, b, c, temp;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b) {
        temp = a; a = b; b = temp;
    }
    if (a > c) {
        temp = a; a = c; c = temp;
    }
    if (b > c) {
        temp = b; b = c; c = temp;
    }
    
    printf("%d,%d,%d\n", a, b, c);
    
    return 0;
}
