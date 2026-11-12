// 7-6 三天打鱼两天晒网
// 题目集：3 选择-优阶-ok
// 状态：答案正确    得分：15 / 15
// 提交时间：2026-11-09 20:12:03（北京时间）
// 编译器：GCC
// 提交 ID：2119764956868571136
// 原题：https://pintia.cn/problem-sets/2118135003893915648/exam/problems/type/7?problemSetProblemId=2118135004023939075

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int r = N % 5;
    
    if (r == 1 || r == 2 || r == 3) {
        printf("Fishing in day %d\n", N);
    } else {
        printf("Drying in day %d\n", N);
    }
    
    return 0;
}
