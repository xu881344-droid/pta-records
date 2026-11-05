// 7-10 4-4 输入构成三角形三边，计算其面积。
// 题目集：运行环境和数据类型
// 状态：答案正确    得分：10 / 10
// 提交时间：2026-10-22 10:47:54（北京时间）
// 编译器：GCC
// 提交 ID：2113100002234179584
// 原题：https://pintia.cn/problem-sets/2100433052427517952/exam/problems/type/7?problemSetProblemId=2100433052452683785

#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    printf("请输入a,b,c:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
    double p=(a+b+c)/2;
    double area;
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("area=%.3f",area);
    }
    else
    {
        printf("不能构成三角形。");
    }
    return 0;
}
