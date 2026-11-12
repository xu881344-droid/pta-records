// 7-12 C程序设计 实验2-3-1身高预测
// 题目集：3 选择-优阶-ok
// 状态：答案正确    得分：20 / 20
// 提交时间：2026-11-12 10:04:08（北京时间）
// 编译器：GCC
// 提交 ID：2120699132365549568
// 原题：https://pintia.cn/problem-sets/2118135003893915648/exam/problems/type/7?problemSetProblemId=2118135004028133378

#include <stdio.h>

int main(void)
{
    char sex, sports, diet;
    double faHeight, moHeight, height;

    scanf("%c %lf %lf %c %c", &sex, &faHeight, &moHeight, &sports, &diet);

    if (sex == 'F' || sex == 'f') {
        height = (faHeight * 0.923 + moHeight) / 2;
    } else {
        height = (faHeight + moHeight) * 0.54;
    }

    if (sports == 'Y' || sports == 'y') {
        height = height * 1.02;
    }

    if (diet == 'Y' || diet == 'y') {
        height = height * 1.015;
    }

    printf("%.1fcm\n", height);

    return 0;
}
