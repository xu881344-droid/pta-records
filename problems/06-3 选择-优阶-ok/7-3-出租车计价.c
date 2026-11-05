// 7-3 出租车计价
// 题目集：3 选择-优阶-ok
// 状态：答案正确    得分：15 / 15
// 提交时间：2026-11-05 11:08:49（北京时间）
// 编译器：GCC
// 提交 ID：2118178696009048064
// 原题：https://pintia.cn/problem-sets/2118135003893915648/exam/problems/type/7?problemSetProblemId=2118135004023939072

#include <stdio.h>
#include <math.h>

int main()
{
    float k;
    int m;
    float c = 0;
    scanf("%f %d", &k, &m);
    if(k <= 3.0){
        c = 10.0;
    }
    else if(k > 3.0 && k <= 10.0){
        c = 10.0 + (k-3.0) * 2.0;
    }
    else if(k > 10.0){
        c = 10.0 + 7.0 * 2.0 + (k - 10.0) * 3.0;
    }

    c = c + (m / 5) * 2.0;
    printf("%.0f\n", round(c));
    
    return 0;
}
