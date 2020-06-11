#include <stdio.h>

int main() {
    int number = 0;
    //这里要用double
    //A+B的值是要超出int的范围的
    double A = 0, B = 0, C = 0;
    scanf("%d", &number);
    //边界条件
    if (number > 10) {
        return 0;
    }
    //定义一个数组，存储结果
    int results[number];
    //定义下标
    int index = 0;
    for (int i = 0; i < number; ++i) {
        //%lf对应  double
        scanf("%lf""%lf""%lf", &A, &B, &C);
        //边界条件
        if (A < -2147483648 || A > 2147483648) {
            return 0;
        }
        if (B < -2147483648 || B > 2147483648) {
            return 0;
        }
        if (C < -2147483648 || C > 2147483648) {
            return 0;
        }
        //判断的逻辑
        //给数组存储数据
        //用0 和 1来区分结果
        if (A + B > C) {
            results[index++] = 1;
        } else {
            results[index++] = 0;
        }
    }
    //遍历数组 输出结果
    for (int i = 0; i < number; ++i) {
        if (results[i]) {
            printf("Case #%d: true", i + 1);
        } else {
            printf("Case #%d: false", i + 1);
        }
        //最后一组时，不输出换行符
        if (i < number - 1) {
            printf("\n");
        }
    }
    return 0;
}
