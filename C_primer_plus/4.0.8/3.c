#include <stdio.h>
//读取一个浮点数，
//首先以小数点计数法打印
//再以指数计数法打印

int main(void)
{
    float sum;
    scanf("%f",&sum);
    printf("The input is %.1f or %.1e\n",sum,sum);
    printf("The input is %+5.2f or %.1e\n",sum,sum);
    return 0;
}
