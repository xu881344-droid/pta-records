// 7-7 计算油费
// 题目集：3 选择-优阶-ok
// 状态：答案正确    得分：15 / 15
// 提交时间：2026-11-12 09:30:06（北京时间）
// 编译器：GCC
// 提交 ID：2120690568839458816
// 原题：https://pintia.cn/problem-sets/2118135003893915648/exam/problems/type/7?problemSetProblemId=2118135004023939076

#include <stdio.h>
int main()
{
    double a, sum;
    int b;
    char c;
    
    scanf("%lf %d %c",&a, &b, &c);

    double price = 0;
    if(b == 90){
        price = 6.95;
    }
    else if(b == 93){
        price = 7.44;
    }
    else if(b == 97){
        price = 7.93;
    }

    if(c == 'm'){
        sum = a * price * 0.95;
    }
    else if(c == 'e'){
        sum = a * price * 0.97;
    }

    printf("%.2f\n",sum);

    return 0;
}
