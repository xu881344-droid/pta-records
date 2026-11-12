// 7-9 分段计算居民水费
// 题目集：3 选择-优阶-ok
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-11-12 09:35:00（北京时间）
// 编译器：GCC
// 提交 ID：2120691800991760384
// 原题：https://pintia.cn/problem-sets/2118135003893915648/exam/problems/type/7?problemSetProblemId=2118135004023939078

#include <stdio.h>
int main()
{
    double x, y;
    scanf("%lf",&x);
    if(x <= 15){
        y = 4 * x / 3;
    }
    else{
        y = 2.5 * x - 17.5;
    }
    printf("%.2f",y);

    return 0;
}
