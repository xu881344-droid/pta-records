// 7-8 超速判断
// 题目集：3 选择-优阶-ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-11-09 20:02:34（北京时间）
// 编译器：GCC
// 提交 ID：2119762570949734400
// 原题：https://pintia.cn/problem-sets/2118135003893915648/exam/problems/type/7?problemSetProblemId=2118135004023939077

#include <stdio.h>
#include <string.h>

int main() {
    double v;
    char s[20];
    
    scanf("%lf", &v);
    
    if (v > 60) {
        strcpy(s, "Speeding");
    } else {
        strcpy(s, "OK");
    }
    
    printf("Speed: %.0f - %s\n", v, s);
    
    return 0;
}
