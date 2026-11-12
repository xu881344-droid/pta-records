// 7-11 12-24小时制
// 题目集：3 选择-优阶-ok
// 状态：答案正确    得分：15 / 15
// 提交时间：2026-11-12 09:47:06（北京时间）
// 编译器：GCC
// 提交 ID：2120694844260134912
// 原题：https://pintia.cn/problem-sets/2118135003893915648/exam/problems/type/7?problemSetProblemId=2118135004028133377

#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d:%d",&a, &b);
    if(a > 12){
        c = a - 12;
        printf("%d:%d PM",c, b);
    }
    else if(a == 12){
        c = a;
        printf("%d:%d PM",c, b);
    }
    else if(a >= 0 && a < 12){
        printf("%d:%d AM",a,b);
    }

    return 0;
}
